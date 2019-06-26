/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int v=INT32_MIN;
public:
    ListNode* deleteDuplicates(ListNode* head) {

        ListNode *temp=head;
        while(temp)
        {
            if(temp->next&&temp->next->val==temp->val)
            {
                temp->next=temp->next->next;
                continue;
            }


                   temp=temp->next;


        }
        return head;
    }
};
