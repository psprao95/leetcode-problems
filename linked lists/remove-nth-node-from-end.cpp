/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    int count=0;
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(!head)
        {
            return NULL;
        }
        head->next=removeNthFromEnd(head->next,n);
        count++;
        if(count==n)
        {
            head=head->next;
        }
        return head;
    }


};
