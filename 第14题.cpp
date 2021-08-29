 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *p1,*p2;//快慢指针
        p2=new ListNode(1);//添加一个空的头结点，方便操作
        p2->next=head;
        p1=head;
        head=p2;
        if(head){
        while(p1){
            while(p1&&p1->val==val){
                 p2->next=p1->next;
                 delete p1;
                 p1=p2->next;
            }
            p2=p1;
            if(p1) p1=p1->next;
        }
        return head->next;
        }
        else return NULL;
    }
};
