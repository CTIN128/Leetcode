/*
 *题目大意：判断一个数字是不是回文数
 *
 *题目要求是要考虑越界情况，但是越界无非是像5432112345这样
 *但是原先这个数就已经超出了INT_MAX，所以这个数将变成INT_MAX
 *很明显INT_MAX不是回文数
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
