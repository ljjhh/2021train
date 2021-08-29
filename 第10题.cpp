class Solution {
public:
    ListNode* insertionSortList(ListNode* head) {
        if (head == nullptr) return head;

        ListNode* dummyHead = new ListNode(0); // 定一个虚拟头结点
        ListNode* cur = head;
        ListNode* pre = dummyHead;

        while (cur != nullptr) {
            while (pre->next != nullptr && pre->next->val < cur->val) {
                pre = pre->next;
            }
            // 在pre和prenext之间插入数据
            ListNode* next = cur->next; // 步骤一：保存curnext
            cur->next = pre->next;      // 步骤二
            pre->next = cur;            // 步骤三
            pre = dummyHead;            // 步骤四：pre重新指向虚拟头结点来找下一个插入位置
            cur = next;                 // 步骤五：cur的前一个节点的下一个节点指向保存的next
        }
        return dummyHead->next;
    }
};
