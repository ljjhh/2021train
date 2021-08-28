void deleteNode(struct ListNode* node) {
    if(node!=NULL){
        node->val=(node->next)->val;
        if((node->next)->next!=NULL){
            node->next=(node->next)->next;
        }
        else{
            node->next=NULL;
        }
    }
}
