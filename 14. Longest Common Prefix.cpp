/*
 *题目大意：求数组相同的最大前缀
 *
 *如 "ab" "abc" "abcd" 相同最大前缀即为ab
 * "acd" "a" "ae" 相同最大前缀为a
 *
 *Runtime:6ms
 */




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
           return "";
        int length =  strs[0].size();
        for(size_t i = 0;i < strs.size();++i)
        {
            for(size_t j = 0;j < strs[0].size();++j)
            {
                if(strs[i][j] != strs[0][j])
                {
                    if(j < length)
                      length = j;
                }
            }
        }
        return strs[0].substr(0,length);
     }
};



核心部分就是先假设最大相同前缀为strs[0]，之后拿strs[0]和之后的string比较
一旦发现后面的的string跟有不符之处，比较此时j和length的大小，如果j小，那么length变成j



好像 "abc" "ab" "abde"

先假设为abc length为3 之后ab拿来比较发现j = 2 strs[1][2]!=strs[0][2]   且 2 < 3故length就变成2


str.substr(index1,length)
从index1开始包括index1 的2个字符，复制进str

