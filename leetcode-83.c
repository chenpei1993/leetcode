/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteDuplicates(struct ListNode* head) {
    struct LIstNode *first=head;
    if(head==NULL ){
        return head;
    }
    int n;
    while(head->next!=NULL){
        n=head->val;
        if(n==head->next->val){
            head->next=head->next->next;
        }else{
            head=head->next;
        }
    }
    
    return first;
}
