class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int number = 0;
        ListNode* temp = head;
        int count = 0;
        while(head != NULL){
            count++;
            head = head->next;
        }
        int counter = 0;
        while(temp!=NULL){
            number+= pow(2,count-counter-1)*temp->val;
            temp=temp->next;
            counter++;
        }
        
        return number;
    }
};
