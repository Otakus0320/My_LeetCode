/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
        struct ListNode dummy;
        struct ListNode* p = &dummy;
        struct ListNode* p1 = list1;
        struct ListNode* p2 = list2;
        while(p1 != NULL && p2 != NULL)
        {
            if(p1->val < p2->val)
            {
                p->next = p1;
                p1 = p1->next;
            }else
            {
                p->next = p2;
                p2 = p2->next;
            }
            p = p->next;
        }
        
        if(p1 != NULL)
        {
            p->next = p1;
        }else
        {
            p->next = p2;
        }
        
        return dummy.next;
    
}
