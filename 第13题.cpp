/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *p1,*p2;
        for(p1=headA;p1;p1=p1->next){
            for(p2=headB;p2;p2=p2->next){
                if(p1&&p2&&(p1==p2)) return p1;//短路现象防止出现错误
            }
        }
        return NULL;
    }
};
