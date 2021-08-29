/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* nextLargerNodes(struct ListNode* head, int* returnSize)
{
    int len=0;
    struct ListNode*cur=head;
    while(cur)
    {
        cur=cur->next;
        len++;
    }
    int*ret=(int*)malloc(sizeof(int)*len);
    int index=0;
    while(index!=len)
    {
        cur=head;
        int max=cur->val;
        int m=cur->val;
        while(cur)
        {
            if(max<cur->val)
            {
                max=cur->val;
                break;
            }
            cur=cur->next;
        }
        if(m==max)
        {
            ret[index++]=0;
        }
        else
        {
            ret[index++]=max;
        }
        head=head->next;
    }
    *returnSize=index;
    return ret;
}
