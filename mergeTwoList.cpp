class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2){
        if(!l1) return l2;
        if(!l2) return l1;
        if(l2 && l2->val< l1->val ) swap(l1,l2); 
        l1->next = mergeTwoLists(l1->next, l2); 
        return l1;
    }
};