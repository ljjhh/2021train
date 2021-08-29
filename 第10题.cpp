class Solution {
    public ListNode reverseKGroup(ListNode head, int k) {
        ListNode pre = new ListNode(0);
        ListNode ans = pre;
        while(head != null){
            pre = reverse(pre,head,k);
            head = pre == null ? null : pre.next;
        }
        return ans.next;
    }
    private ListNode reverse(ListNode pre, ListNode head, int n){//将翻转函数单独写出来
        ListNode ans = null;
        int oldn = n;
        ListNode old = head;
        while(n > 0 && head != null){
            ListNode tmp = head.next;
            head.next = ans;
            ans = head;
            head = tmp;
            n--;
        }
        if(n > 0){
            while(n != oldn){   
                ListNode tmp = ans.next;
                ans.next = head;
                head = ans;
                ans = tmp;
                n++;
            }
            pre.next = head;
            return null;
        }
        pre.next = ans;
        old.next = head;
        return old;
    }
}
