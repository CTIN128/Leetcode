/*
 *��Ŀ���⣺
 *  ������������1234���4321��-1234���-4321
 *
 * ����ĿҪע��overflow��underflow
 * ���Ըտ�ʼlong long��������Ž����������жϸý���Ƿ�
 * ����int����Сֵ�����ֵ
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

/*�����к��ԵĲ����Ǻ���
�ǳ�����

1234
result���ǵ���4  ֮����40 + 3 ֮���� 430 +2 ֮�� ��4320+1
����Ǹ���result���� -4 ֮���� -40-3֮������
*/