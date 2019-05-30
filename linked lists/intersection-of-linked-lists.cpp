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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA||!headB)
        {
            return NULL;
        }
        ListNode *a=headA;
        ListNode *b=headB;
        int da=0,db=0;
        while(a!=NULL)
        {
            a=a->next;
            da++;
        }
        while(b!=NULL)
        {
            b=b->next;
            db++;
        }
        a=headA;
        b=headB;
        if(da>=db)
        {
            while(da-db)
            {
                a=a->next;
                da--;
            }
        }
        else
        {
            while(db-da)
            {
                b=b->next;
                db--;
            }
        }
        while((a&&b)&&a!=b)
        {
            a=a->next;
            b=b->next;
        }
        if(!a||!b)
        {
            return NULL;
        }
        return a;

    }
};
