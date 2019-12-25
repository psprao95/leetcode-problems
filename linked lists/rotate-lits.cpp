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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head){return head;}
        ListNode *p=head;
        ListNode *newhead=head;
        ListNode *q=head;
        int count=0;
        while(p->next)
        {
            q=p;
            p=p->next;
            count++;

        }
        k=k%(count+1);
        while(k)
        {


            p->next=newhead;
            newhead=p;
            q->next=NULL;
            p=newhead;

            while(p->next)
            {
                q=p;
                p=p->next;
            }
            k--;
        }
        return newhead;


    }
};
