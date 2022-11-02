class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        
        if(head==NULL){
            return head;
        }
            
        ListNode*mid=head;
        ListNode*end=head;
        
        while(end!=NULL && end->next!=NULL){
            mid = mid->next;
            end = end->next->next;
        }
        
        if(end==head && mid==head){
            return NULL;
        }
        
        else if(mid->next==NULL){
           head->next = NULL;
        }
        else{
        mid->val = mid->next->val;
        mid->next = mid->next->next;
        }
        return head;
    }
};
