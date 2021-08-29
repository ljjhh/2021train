class Solution {
public:
    bool hasCycle(ListNode* head) {
        if (head == nullptr || head->next == nullptr) {
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head->next;
        while (slow != fast) {
            if (fast == nullptr || fast->next == nullptr) {//当出现了NULL时说明没有环
                return false;
            }
            slow = slow->next;
            fast = fast->next->next;
        }
        return true;
    }
};
