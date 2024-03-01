/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode *s = new ListNode(-1);
        ListNode *b = new ListNode(-1);
        ListNode *small = s;
        ListNode *big = b;
        ListNode *p = head;
        while(p != NULL)
        {
            if(p->val < x)
            {
                small->next = p;
                small = small->next;
            }else
            {
                big->next = p;
                big = big->next;
            }
            ListNode *temp = p->next;
            p->next = NULL;
            p = temp;
        }
        small->next = b->next;
        return s->next;
    }
};
