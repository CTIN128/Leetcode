/*
 *题目大意：将string中的字符变成整数，注意越界情况
 *虽然代码多，但是运行只用了6ms（coding again）
 */



class Solution {
public:
    int myAtoi(string str) {
        long long result = 0;
        auto iter = str.cbegin();//返回底层const
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
discuss answer：

*/