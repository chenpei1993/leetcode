/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
   if (l1 == NULL) return l2;
    if (l2 == NULL) return l1;

    if (l1->val > l2->val) {
      struct ListNode *tmp = l2;
      tmp->next = mergeTwoLists(l1, l2->next);
      return tmp;
    } else {
      struct ListNode *tmp = l1;
      tmp->next = mergeTwoLists(l1->next, l2);
      return tmp;
    }
  
}
