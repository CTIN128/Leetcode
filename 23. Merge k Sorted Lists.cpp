/*
 *��Ŀ���⣺�ϲ��������vector contains the head pointer
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



����˼������õݹ�
���罫lists[i] lists[len-i-1] ǰ�ߵĽڵ�����ߵĽڵ���бȽϣ�֮�����ݹ�������ӣ����շ���ͷָ��

������˼����Ǽ���vector indexΪ0 1 2 3 4 5 6
0 �� 6merge�������0��  1��5 2��4
֮��0��3 1��2 
���0 ��1