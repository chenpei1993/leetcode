/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* swapPairs(struct ListNode* head) {
    if(head==NULL || head->next==NULL){
        return head;
    }
    int n=1,a;
    struct ListNOde *first=head;
    while(head->next!=NULL){
        n++;
        head=head->next;
    }
    
    head=first;
    if(n%2==0){
         while(head!=NULL ){
            a=head->val;
            head->val=head->next->val;
            head->next->val=a; 
            head=head->next->next;
         } 
    }else{
        while(head->next!=NULL){
            a=head->val;
            head->val=head->next->val;
            head->next->val=a;
            head=head->next->next;
        }
    }
    
   
    return first;
   
    
    
}
