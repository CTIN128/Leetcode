/*
 *题目大意：将罗马数字转换成普通数字
 *
 *
 *注意点就是：IV时如果一直加的话会变成6而不是 -1+5
 *Runtime:96ms
 */





class Solution {
public:
    int romanToInt(string s) {
        int value[256]{};
        value['I'] = 1; value['V'] = 5; value['X'] = 10; value['L']=50;
	    value['C'] = 100; value['D'] = 500; value['M'] = 1000;
	    int result = 0;
	    for(size_t i = 0;i < s.size();++i)
	    {
	        if(value[s[i]] < value[s[i+1]])
	        {
	            result -= value[s[i]];
	        }
	        else
	            result += value[s[i]];
	    }
	    return result;
    }
};



  if(value[s[i]] < value[s[i+1]])
	        {
	            result -= value[s[i]];
	        }

最重要的代码段
如碰到IV   他会检测I 比后面的V 小所以他会先减去I再加上V即-1 + 5

