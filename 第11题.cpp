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
    ListNode* rotateRight(ListNode* head, int k) {
        int i,n=1;
        ListNode *p1,*p2,*tail;
        p1=tail=head;
        if(head){//r若heaad不为空
            while(tail->next){
                tail=tail->next;
                n++;
            }
            tail->next=head;
            for(i=0;i<n-k%n;i++){//找到头结点的位置
                p2=p1;
                p1=p1->next;
            }
            p2->next=nullptr;
            return p1;
        }
        else return nullptr;
    }
};
