/*
 *��Ŀ����:��'(' '[' '{'�Ƿ�ɶ�
 *
 *
 *
 *Runtime:0ms
 */







class Solution {
public:
    bool isValid(string s) {
        if(s.size() <= 1)
         return false;
        stack<char> data;
        for(size_t i = 0;i <= s.size()-1;++i)
        {
            if(s[i] == ')')
             {
              if(data.empty()||data.top() != '(')
                 return false;
               data.pop();
            }
            else if(s[i] == ']')
             {
             if(data.empty()||data.top() != '[')
                 return false;
               data.pop();
            }
            else if(s[i] == '}')
             {
              if(data.empty()||data.top() != '{')
                 return false;
               data.pop();
            }
            else
            data.push(s[i]);
        }
        if(data.empty())
          return true;
        else
          return false;
        }
    
};



��Ҫ˼����ǽ���ѹջ��ջ����


stack.pop()û�з���ֵ����Ҫ������ΪЧ�ʵ�ԭ��return value�����漰�������⣬return reference�����һ��dangling(���յ�) pointer����Ϊ��������ջ
����һ������ջ��value 

stack.top()���ض�ջ��������

��������Ӧ�û������ʹ�� 