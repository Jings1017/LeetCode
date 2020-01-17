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
   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int record = 0;
        ListNode* res = new ListNode(1);
        ListNode* l3=res;   
        
        while (l1!=NULL || l2!=NULL){
            int num1 = (l1 == NULL) ? 0 : l1->val;
            int num2 = (l2 == NULL) ? 0 : l2->val;
            int sum = num1 + num2 + record;
            ListNode* t = new ListNode(sum % 10);
            record = sum>9?1:0;
            l3->next = t;
            l3 = l3->next;
            l1 = (l1 == NULL) ? NULL : l1->next;
            l2 = (l2 == NULL) ? NULL : l2->next;
        }
        
        if (record!=0){
            ListNode* t = new ListNode(1);
            l3->next = t;
        }
        return res->next;
        
    }
};