/*
 *题目大意:在s字符串中找出一小段字符串包含全部words中元素，记录这一小段字符床开始的索引
 *
 *
 *
 */





class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) 
    {
        int Mem_Size = words[0].size(),Words_Size = words.size();
        int St_Size = s.length();
        unordered_map<string,int> Count;
        for(string &word : words)
        {
            ++Count[word];
        }
        vector<int> res;
        for(size_t i = 0;i < St_Size-Words_Size*Mem_Size+1;++i)
        {                         //指标查到string总长度减去words数组中成员长度
            unordered_map<string,int> um;//容器进行刷新
            int j = 0;
            for(;j < Words_Size;++j)
            {
                string tmpcell = s.substr(i+j*Mem_Size,Mem_Size);
                if(Count.find(tmpcell) != Count.end())
                {
                    ++um[tmpcell];
                    if(um[tmpcell] > Count[tmpcell])
                       break;
                }
                else
                  break;
            }
            if(j == Words_Size)res.push_back(i);
        }
        return res;
    }
};




题目用两个无序的map一个先来保存words数组中的元素和他的数量
另一个在字符串查找中，一但发现与words中元素匹配的就一直连续查找接着的小字符串，看是否与words中的元素匹配