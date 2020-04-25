/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        typedef struct ListNode node;
        node*p=head;
        while (p) {
            if (p->next==NULL) break;
            int temp = p->val;
            p->val = p->next->val;
            p->next->val = temp;
            p = p->next->next;
        }
        return head;
    }
};