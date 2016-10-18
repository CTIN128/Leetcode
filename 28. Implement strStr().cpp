/*
 *题目大意：找出haystack中needle开始的索引
 *
 */




class Solution {
public:
    int strStr(string haystack, string needle) {
        if (needle.empty()) return 0;
        for(size_t i = 0; ;++i)
        {
            for(size_t j = 0; ;++j)
            {
              if(needle[j] == 0) return i;
              if(haystack[i+j] == 0) return -1;
              if(haystack[i+j] != needle[j]) break;
            }
        }
        return -1;
    }
};

0为空字符，对于一个string中空字符只能出现在字符串首或者尾
第一个if语句说明needle本身就是一个空字符或者已经查询到needle尾，
那么当然直接返回index，第二个if说明haystack本身是个空字符或者已经检查到
haystack尾部了，还没return一个index，那么也是返回失败或者字符串中出现空字符是不可能的，最后一个if是发现needle中有个字符不符，此时结束内层循环，让外部循环指标往后移动，最终没有找到就返回-1，其实for循环中的各个return就可以实现return不会跳出for loop