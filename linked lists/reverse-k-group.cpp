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
    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==NULL)
        {
            return NULL;
        }
        int j=k-1;
        ListNode *temp=head;
        while(temp->next&&j){
            temp=temp->next;
            j--;
        }
        if(!temp->next&&j)
        {
            return head;
        }
        if(temp->next&&!j){
            ListNode *p=temp->next;
            temp->next=NULL;
            ListNode *n=reverseList(head);
            ListNode *f=n;
            if(f==NULL)
            {
                return NULL;
            }
            while(f->next!=NULL)
            {
                f=f->next;
            }
            f->next=reverseKGroup(p,k);
            return n;
        }
        return reverseList(head);


    }

     ListNode* reverseList(ListNode* head) {
         if(!head || !head->next)
         {
             return head;
         }
        ListNode *temp=reverseList(head->next);
        head->next->next=head;
        head->next=NULL;
        return temp;

    }
};
