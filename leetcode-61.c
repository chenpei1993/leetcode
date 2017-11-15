/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* rotateRight(struct ListNode* head, int k) {
    struct ListNode* first=head;
    int n=1;
    
    if(head==NULL || head->next==NULL || k==0 ){
        return head;
    }
    
    while(head->next!=NULL){
        n++;
        head=head->next;
    }
    head->next=first;
    
    if(k%=n){
        for(int i=0;i<n-k;i++){
          head=head->next;
        }
    }
    

    struct NodeList* ans=head->next;
    head->next=NULL;
    return ans;
    
    
}
