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
    int getDecimalValue(ListNode* head) {

        return helper(head).first;
    }

    pair<int,int> helper(ListNode *head)
    {
        if(!head)
        {
            return {0,0};
        }
       pair< int,int> h=helper(head->next);
        int res=h.first;
        if(head->val==1)
        {
            res+=pow(2,h.second);
        }
        return {res,h.second+1};
    }
};
