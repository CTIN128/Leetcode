/*
 *��Ŀ���⣺����������ת������ͨ����
 *
 *
 *ע�����ǣ�IVʱ���һֱ�ӵĻ�����6������ -1+5
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

����Ҫ�Ĵ����
������IV   ������I �Ⱥ����V С���������ȼ�ȥI�ټ���V��-1 + 5

