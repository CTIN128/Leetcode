/*
 *题目大意：交换链表中 第0节点和第1节点， 第2节点和第3节点，....
 *
 *
 *
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
    ListNode* swapPairs(ListNode* head) {
        if(!head||!(head->next))
           return head;
        ListNode *post,*in,*pre,*tmp_head;
        post = head;
        tmp_head = in = head->next;
        while(in)
        {
            pre = in->next;
            in->next = post;
            post->next = nullptr;
            if(!pre)
              return tmp_head;
            else if(pre->next!=nullptr)
            {
                post->next = pre->next;
            }
            else
              post->next = pre;
            in = pre->next;
            post = pre;
        }
        return tmp_head;
    }
};


主要的就是中间revers要加上判断