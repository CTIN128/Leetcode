/*
 *题目大意：合并多个链表，vector contains the head pointer
 *
 *
 *
 *Runtimes:26ms
 *
 *
 */



class Solution {
public:
    ListNode* merge(ListNode* L1,ListNode* L2)
    {
        if(!L1) return L2;
        else if(!L2) return L1;
        else if(L1->val < L2->val)
        {
           L1->next = merge(L1->next,L2);
           return L1;
        }
        else
        {
          L2->next = merge(L1,L2->next);
          return L2;
        }
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) 
    {
       if(lists.empty())
       {
           return nullptr;
       }

    int len = lists.size();
    
       while(len > 1){
       for(size_t i = 0;i < len/2;++i)
       {
           lists[i] = merge(lists[i],lists[len-i-1]);
       }
        len = (len+1) /2;
       }
       return lists[0];
    }
};



核心思想就是用递归
例如将lists[i] lists[len-i-1] 前者的节点与后者的节点进行比较，之后逐层递归进行连接，最终返回头指针

主函数思想就是假设vector index为0 1 2 3 4 5 6
0 和 6merge结果放入0中  1，5 2，4
之后0，3 1，2 
最后0 ，1