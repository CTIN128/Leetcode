/*
 *题目大意:看'(' '[' '{'是否成对
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



主要思想就是进行压栈弹栈处理


stack.pop()没有返回值，主要可能因为效率的原因，return value可能涉及拷贝问题，return reference会出现一个dangling(悬空的) pointer，因为他被弹出栈
引用一个不再栈的value 

stack.top()返回对栈顶的引用

所以两者应该互相配合使用 