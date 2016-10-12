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
        thissum += vec[i];//�����ӿ��ܻ��и��������
     else
     {
        thissum = vec[i];//����thissum�Ѿ�С��0������ȥ�Ѳ����ܳ�Ϊ�����������thissum�����һ��ֵ
        begin = i;//beginҲ������
     }
     if(thissum > MaxSum)
     {
        MaxSum = thissum;
        start = begin;//���thissum > maxsum��ôbegin�͸�ֵ��start
        end = i;//end������ʱ����
     }
  }
  cout << vec[start] << " " << vec[end] << endl;
}