/*
 *��Ŀ����:����绰���룬������Щ�����Ӧ����ĸ�������
 *
 *
 *Runtime:3ms
 *
 *��Ҫ˼��:�ݹ�
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


�������� 342

��3������ĸd 4������ĸg 2������ĸa�������
֮��ǰ���߱��ֲ������++i2����ĸ���b,֮���ٱ��c��֮��4����ĸ���h 2��ĸ��a��֮��2��ĸ��bһ��һ��ݹ���ȥ