/*
 *��Ŀ���⣺���ǽ�������n�Ľڵ�ɾ��
 *
 *
 */




class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *fast = head,*slow = head;
        size_t i = 0;
    for(;i <= n&&fast;++i)
    {
        fast = fast->next;
    }
    while(fast)
    {
        fast = fast->next;
        slow = slow->next;
    }
    if(n >= i)
    {
        return head->next;
    }
    slow->next = slow->next->next;
    return head;
    }
};


����for loopȷ��һ����Χ֮������ƣ�֪��ǰ���ָ��Ϊ�գ�ע�����n���ܻᳬ������Ľڵ�������Ҫ�����ж�