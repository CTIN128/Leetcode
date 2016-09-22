/*
 *题目大意:输入电话号码，根据这些号码对应的字母进行组合
 *
 *
 *Runtime:3ms
 *
 *主要思想:递归
 */

class Solution {
private:
       int len;   
public:
    void main_func(string &digits,string result,vector<string> &vec,int Pos)
    {
        if(Pos == len)
        return;
        string letter[8] = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string s = letter[digits[Pos]-'2'];
        for(size_t i =0;s[i];++i)
        {
            if(Pos == len-1)
            vec.push_back(result+s[i]);
            else
            main_func(digits,result+s[i],vec,Pos+1);
        }
    }
    vector<string> letterCombinations(string digits) 
    {
        len = digits.size();
        vector<string> vec;
        main_func(digits,"",vec,0);
        return vec;
    }
};


例如输入 342

将3的首字母d 4的首字母g 2的首字母a进行组合
之后前两者保持不变后者++i2的字母变成b,之后再变成c，之后4的字母变成h 2字母是a，之后2字母是b一层一层递归下去