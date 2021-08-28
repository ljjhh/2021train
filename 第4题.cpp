/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 * };
 */

class Solution {
public:
    /**
     * 
     * @param head ListNode类 
     * @return ListNode类
     */
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *p1,*p2,*p3;
        p3=new ListNode(1);
        p1=p2=head;
        p3->next=p1;
        head=p3;
        while(p1){//p1在最前面，p2在中间，p3在最后
            p1=p1->next;
            if(!p1) break;
            while(p1&&p1->val==p2->val){//这里要用循环
                while(p1&&p1->val==p2->val){//循环删除多余元素
                    p2->next=p1->next;
                    delete(p1);
                    p1=p2->next;
                }
                p3->next=p2->next;
                delete(p2);
                p2=p3->next;
                if(p1) p1=p2->next;
            }
            p3=p2;
            p2=p1;
        }
        return head->next;
    }
};
