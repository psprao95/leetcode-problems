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
    vector<int> nextLargerNodes(ListNode* head) {
        ListNode *p=head;
        if(!head){return {};}
        stack<ListNode *> st;
        //st.push(head);
        vector<int> res;
        ListNode *temp;
        while(p)
        {
            while(!st.empty()&&p->val>st.top()->val)
            {
                st.top()->val=p->val;
                st.pop();
            }
            st.push(p);
            temp=p;
            p=p->next;
        }
        while(!st.empty())
            {
                st.top()->val=0;
                st.pop();
            }

        while(head)
        {
            res.push_back(head->val);
            head=head->next;
        }
        return res;

    }
};
