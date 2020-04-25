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
    typedef ListNode node;
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        node* ans = NULL;
        for (auto x: lists){
            ans = merge(ans,x);
        }
        return ans;
    }

    node* merge(node* a, node* b){
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;
        node* tmp;
        if(a->val <= b->val){
            tmp = a;
            tmp->next = merge(a->next,b);
        }
        else{
            tmp = b;
            tmp->next = merge(a,b->next);
        }
        return tmp;
    }
};