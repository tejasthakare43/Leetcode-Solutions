class Solution {
public:
    ListNode* reverseList(ListNode* head) {
       ListNode *temp1=head;
       ListNode *temp2=NULL;

       while(temp1!=NULL){
        
          ListNode *node=new ListNode(temp1->val);
            
            node->next=temp2;

            temp2=node;
            temp1=temp1->next;
       }
return temp2;
    }
};
