class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = new ListNode(-1);
        ListNode* curr = head;
        
        int rem = 0;
        int sum = 0;
        while(l1 || l2){
            sum = ((l1)? l1->val:0) + ((l2)? l2->val:0) + rem;
            rem = (sum > 9)? 1 : 0;
            curr->next = new ListNode(sum%10);
            
            curr = curr->next;
            l1 = (l1)? l1->next : nullptr;
            l2 = (l2)? l2->next : nullptr;
        }
        if(rem) 
            curr->next = new ListNode(1);
        
        return head->next;
    }
};