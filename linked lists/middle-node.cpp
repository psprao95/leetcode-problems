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
    ListNode* middleNode(ListNode* head) {
       int count=0;
        ListNode *temp=head;
        while(temp)
        {
            count++;
            temp=temp->next;
        }

        if(!count)
        {
            return NULL;
        }

        int p=count/2;
            while(p)
            {
                head=head->next;
                p--;
            }

        return head;
    }
};
