class Solution {
public:
    ListNode* reverse(ListNode* head) { //反转链表指针
        ListNode* prev = NULL;
        while (head != NULL) {
            ListNode* next = head->next;
            head->next = prev;
            prev = head;
            head = next;
        }
    return prev;
}
    bool isPail(ListNode* head) {
        ListNode* p = head;
        int n = 0;
        while(p != NULL){ //找到链表长度
            n++;
            p = p->next;
        }
        n = n / 2; //中点
        p = head;
        while(n > 0){
            p = p->next;
            n--;
        }
        p = reverse(p);  //中点处反转
        ListNode* q = head;
        while (p != NULL) {
            if (p->val != q->val) //比较判断节点值是否相等
                return false;
            p = p->next;
            q = q->next;
        }
        return true;
    }
};
