/*
 *��Ŀ���⣺��string�е��ַ����������ע��Խ�����
 *��Ȼ����࣬��������ֻ����6ms��coding again��
 */



class Solution {
public:
    int myAtoi(string str) {
        long long result = 0;
        auto iter = str.cbegin();//���صײ�const
        int mul = 1;
        bool in_middle = false;
        for(iter;iter != str.cend();++iter)
        {
            if(*iter == ' '&&in_middle)
                return result;
            else if(*iter == ' ')
                continue;
            else if(*iter >= '0'&& *iter <= '9'){
              result = result*10 + (mul * ((*iter)-'0'));
              in_middle = true;
              if(result <= INT_MIN)
              {
                return INT_MIN;
              }
              else if (result >= INT_MAX)
              {
                return INT_MAX;
              }
            }
            else if(*iter == '-' && (*(iter+1) >= '0'&& *(iter+1) <= '9')&&!in_middle){
               result = result*10 + (-((*(iter+1))-'0'));
               mul = -1;
               iter++;
               in_middle = true;
            }
            else if(*iter == '+' && (*(iter+1) >= '0'&& *(iter+1) <= '9')&&!in_middle){
                 result = result*10 + (mul * ((*(iter+1))-'0'));
                 iter++;
                 in_middle = true;
             }
             else{
                  if(result <= INT_MIN)
                  {
                    return INT_MIN;
                  }
                  else if (result >= INT_MAX)
                  {
                   return INT_MAX;
                  }
                  return result;
            }
        }
        if(result <= INT_MIN)
        {
            return INT_MIN;
        }
        else if (result >= INT_MAX){
            return INT_MAX;
        }
        return result;
    }
};




/*
discuss answer��

Runtime��6ms

int myAtoi(string str) 
{
    long result = 0;
    int indictor = 1; 
   for(size_t i = 0;i < str.size();)
   {
    i = str.find_first_not_of(' ');//���ز��ǡ� ��������
    if(str[i] == '-'||str[i] == '+')
    {
        indictor = (str[i++] == '-')?-1:1;
    }
    while(str[i] >= '0'&&str[i] <= '9')
    {
        result = result*10 + (indictor * (str[i++]-'0'));
        if(result >= INT_MAX)
            return INT_MAX;
        else if(result <= INT_MIN)
            return INT_MIN;
    }
    return result;
   }
   return 0;
}


 i = str.find_first_not_of(' ');//���ز���'�ո�'������

indictor�Ǹ�������ָʾ��

��Ҫ����whileѭ����һ�������������ֵľͰѵ�ǰ��result����
�����Ľ�����ٴ������ո�͡�+����-������
*/