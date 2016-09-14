/*
 *题目大意：
 *  将整数倒置如1234变成4321，-1234变成-4321
 *
 * 此题目要注意overflow和underflow
 * 所以刚开始long long数据来存放结果，最后来判断该结果是否
 * 超出int的最小值和最大值
 */


class Solution {
public:
    int reverse(int x) 
{
  long long result = 0;
  /*while(x)
  {
      result = result*10 + x%10;
      x/=10;
  }*/
    return (result<INT_MIN || result>INT_MAX) ? 0 : result;
}
};

/*代码中忽略的部分是核心
非常巧妙

1234
result先是等于4  之后是40 + 3 之后是 430 +2 之后 是4320+1
如果是负数result先是 -4 之后是 -40-3之后类似
*/