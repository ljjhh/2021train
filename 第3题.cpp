class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        ListNode *p1,*p2,*p3;
        if(!pHead) return NULL;//为空的特殊情况
        else if(pHead&&!pHead->next)  return pHead;//只有一个元素的特殊情况
        else if(pHead&&pHead->next){//用三个指针来修改next，使得不会中断，又能够修改指正
        p1=pHead;
        p2=p1->next;
        p3=p2->next;
        while(1){
            p2->next=p1;
            if(!p3) break;
            p1=p2;
            p2=p3;
            p3=p3->next;
        }
        pHead->next=NULL;
        return p2;
        }
        else return NULL;
    }
};
