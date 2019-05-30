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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0)
        {
            return NULL;
        }
        if(lists.size()==1)
        {
            return lists[0];
        }
        return helper(lists,0,lists.size()-1);

    }

    ListNode *helper(vector<ListNode*> lists,int low,int high)
    {
        if(low==high)
        {
            return lists[low];
        }
        int mid=(low+high)/2;
        ListNode * leftList=helper(lists,low,mid);
        ListNode *rightList=helper(lists,mid+1,high);
        return mergeTwoLists(leftList,rightList);
    }

    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(!l1 &&!l2)
        {
            return NULL;
        }
        else if(!l1)
        {
            return l2;
        }
        else if(!l2)
        {
            return l1;
        }
        else if(l1->val<=l2->val)
        {
            l1->next=mergeTwoLists(l1->next,l2);
            return l1;
        }
        else
        {
            ListNode *temp=l1;
            l1=l2;
            l1->next=mergeTwoLists(temp,l2->next);
            return l1;
        }
    }
};
