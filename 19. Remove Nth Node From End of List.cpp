/*
 *题目大意：就是将倒数第n的节点删除
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


先用for loop确定一个范围之后向后移，知道前面的指针为空，注意的是n可能会超出链表的节点总数，要加以判断