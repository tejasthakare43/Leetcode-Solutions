class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *answer=new ListNode(0);
        ListNode *temp=answer;
int a=0;
int b=0;
int sum=0;
int digit=0;
        int carry=0;

        while(l1!=NULL || l2!=NULL || carry!=0){
            a=0;
            b=0;
            if(l1!=NULL){
                a=l1->val;
                l1=l1->next;

            }
            if(l2!=NULL){
                b=l2->val;
                l2=l2->next;

            }
            sum=a+b+carry;
            digit=sum%10;
            carry=sum/10;

            temp->next=new ListNode(digit);
            temp=temp->next;

        }

return answer->next;
    }
};
