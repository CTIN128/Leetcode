Maximum Subsequence Sum:
  For example, given sequence { -2, 11, -4, 13, -5, -2 }, its maximum subsequence is { 11, -4, 13 }



#include <iostream>
#include <vector>


using std::cout;
using std::endl;
using std::cin;
using std::vector; 

int main()
{
  vector<int>vec{-1,2,-3,4,-2};
  size_t begin,start,end;
  int MaxSum,thissum;
  MaxSum = thissum = vec[0];
  for(size_t i = 1;i < vec.size();++i)
  {
     if(thissum > 0)
        thissum += vec[i];//继续加可能会有更大的整数
     else
     {
        thissum = vec[i];//发现thissum已经小于0，加下去已不可能成为最大序列所以thissum变成下一个值
        begin = i;//begin也被更新
     }
     if(thissum > MaxSum)
     {
        MaxSum = thissum;
        start = begin;//如果thissum > maxsum那么begin就赋值给start
        end = i;//end变量随时更新
     }
  }
  cout << vec[start] << " " << vec[end] << endl;
}