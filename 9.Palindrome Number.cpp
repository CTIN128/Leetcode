/*
 *��Ŀ���⣺�ж�һ�������ǲ��ǻ�����
 *
 *��ĿҪ����Ҫ����Խ�����������Խ���޷�����5432112345����
 *����ԭ����������Ѿ�������INT_MAX����������������INT_MAX
 *������INT_MAX���ǻ�����
 *
 */





class Solution {
public:
    bool isPalindrome(int x) {
        int result = 0,Pre_X = x;
        if(x < 0)
            return false;
        else
        {
        while(x)
        {
           result = result*10+x%10;
           x/=10;
        }
        }
        return result == Pre_X;
    }
};
