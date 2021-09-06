struct ListNode* removeNthFromEnd(struct ListNode* head, int n){
    int nf=1;
    int ns=1;
    struct ListNode *first = head;
    struct ListNode *second = head;//本题中的head是首元结点，有实际数值，并非空的头结点。 
    while(first){
        first = first->next;
        nf++;

        if(nf>n+2){//second的启动条件，nf==n+3时，ns==2,距离始终是n+1。
            second = second->next;
            ns++; 
        }
    }
    
    if(n==nf-1)  //此时nf-1就是链表个数N，n==N意味着要删除首元结点
        return head->next;
    second->next=second->next->next;//删除的是普通结点
    return head;
}
