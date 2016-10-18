/*
 *��Ŀ���⣺��������k��Ԫ�ص��õ���
 *
 * Given this linked list: 1->2->3->4->5
 * For k = 2, you should return: 2->1->4->3->5
 * For k = 3, you should return: 3->2->1->4->5
 *
 *
 */





class Solution { 
public: 
    ListNode* reverseKGroup(ListNode* head, int k) 
    {
       if(!goonReverse(head,k))
         return head;
       ListNode *Post = new ListNode(0);
       ListNode *newhead = Post;
       Post->next = head;
       ListNode *Pre = head;
       while(goonReverse(Pre,k))
       {
           /*for(int i = 0;i < k-1;++i)
           {
               ListNode *temp = Post->next;
               Post->next = Pre->next;
               Pre->next = Pre->next->next;
               Post->next->next = temp;
           }
           Post = Pre;
           Pre = Post->next;*/
       }
       return newhead->next;
    }
private:
    bool goonReverse(ListNode *node,int k)
    {
        int cnt = 0;
        while(node)
        {
            ++cnt;
            if(cnt >= k)
              return true;
            node = node->next;
        }
        return false;
    }
};


����ʡ�Բ��ּ�Ϊ���ģ��ɼ�ͼ