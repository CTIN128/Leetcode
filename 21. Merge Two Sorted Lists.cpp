/*
 *题目大意；按照顺序合并两个有序的链表
 *
 *Runtimes;9ms
 */




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
    ListNode* mergeTwoLists(ListNode* L1, ListNode* L2) {
        if(L1 == nullptr)
          return L2;
        if(L2 == nullptr)
          return L1;
        ListNode *temp,*head;
        if(L1->val <= L2->val)
        {   
            head = temp = L1;
            L1 = L1->next;
        }
        else
        {
            head = temp = L2;
            L2 = L2->next;
        }
        while(L1&&L2)
        {
            if(L1->val <= L2->val)
            {
                temp->next = L1;
                temp = L1;
                L1 = L1->next;
            }
            else
            {
                temp->next = L2;
                temp = L2;
                L2 = L2->next;
            }
        }
        if(L1)
        {
            temp->next = L1;
        }
        if(L2)
        {
            temp->next = L2;
        }
        return head;
    }
};


主要用到归并的思想