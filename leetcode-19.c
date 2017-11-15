/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    if(head == NULL || head->next == NULL)  
        return NULL;  
    struct ListNode * first = head;  
    struct ListNode * second = head;  
    for(int i = 0;i < n;i++)  
        first = first->next;  
    if(first == NULL)  
        return head->next;  
    while(first->next != NULL)  
    {  
        first = first->next;  
        second = second->next;  
    }  
    second->next = second->next->next;  
    return head;  
    
}
