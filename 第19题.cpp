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
    int numComponents(ListNode* head, vector<int>& nums) {
        int flag=0;
        while(head)
        {
            if(show(head,nums)&&!show(head->next,nums))
            {
                flag+=1;
            }
            head=head->next;
        }
        return flag;
    }
    bool show(ListNode* s,vector<int>& nums)
    {
        if(s==nullptr)
        return false;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==s->val)
            {
                return true;
            }
        }
        return false;
    }
};
