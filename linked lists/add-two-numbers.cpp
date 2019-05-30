/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
    private:

    int carry=0;
    int sum;
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1&&l2)
        {
            sum=l1->val+l2->val+carry;
            carry=sum/10;
            l1->val=sum%10;
            l1->next=addTwoNumbers(l1->next,l2->next);
            return l1;
        }

        if(l1&&!l2)
        {
            sum=l1->val+carry;
            carry=sum/10;
            l1->val=sum%10;
            l1->next=addTwoNumbers(l1->next,l2);
            return l1;
        }

        if(!l1&&l2)
        {
            sum=l2->val+carry;
            carry=sum/10;
            l2->val=sum%10;
            l2->next=addTwoNumbers(l1,l2->next);
            return l2;
        }
        if(carry)
        {
            ListNode *temp=new ListNode(carry);
            return temp;
        }
        return NULL;

    }
};
