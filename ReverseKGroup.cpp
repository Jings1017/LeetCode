/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int group;
public:
    ListNode* reverse(ListNode* head, int k, int it) {
        if(it > group || head == NULL) {
            return head;
        }
        
        ListNode* curr = head;
        ListNode* prev = NULL;
        ListNode* next = NULL;
    
        int count = 0;
    
        while(curr != NULL & count < k) { 
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }
    
        if(next != NULL) {
            head->next = reverse(next, k, it+1);
        }
    
        return prev;
    }
    
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head == NULL)
            return NULL;
        
        ListNode* curr = head;
        int length = 0;
        
        while(curr != NULL) {
            curr = curr->next;
            length++;
        }
        
        group = length/k;
        
        return reverse(head,k,1);
    }
};