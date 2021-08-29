/**
 * Definition for singly-linked list.
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
    ListNode* middleNode(ListNode* head) {
    ListNode *p1,*p2;
    p1=p2=head;
    while(1){
        if(p1&&p1->next) p1=p1->next->next;
        else return p2;
        p2=p2->next;
    }
    return nullptr;
    }
};
