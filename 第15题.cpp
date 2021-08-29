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
 #include<stack>
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> chu;
        int jing[100000],i=0,n;//用栈来解决这个问题
        ListNode *p1;
        p1=head;
        while(p1){
            chu.push(p1->val);
            jing[i++]=p1->val;
            p1=p1->next;
        }
        n=i;
        for(i=0;i<n/2;i++){//运行到n/2就可以停止了，减少运算。
            if(chu.top()!=jing[i]) return false;//如果进栈和出栈的元素不一样就返回错误。
            chu.pop();
        }
        return true;
    }
};
