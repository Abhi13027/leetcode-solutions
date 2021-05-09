class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *ans = new ListNode(0);
        ListNode *ansHead = ans;
        int carry = 0;
            
        while(l1 || l2){
            if(l1){
                carry+= l1->val;
                l1 = l1->next;
            }
            if(l2){
                carry+= l2->val;
                l2= l2->next;
            }
            ans->val = carry%10;
            carry /= 10;
            if(l1 || l2 || carry){
                ans->next = new ListNode(carry);
                ans = ans->next;
            }
        }
        return ansHead;
    }
};
