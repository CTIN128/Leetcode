/*
 *��Ŀ����:��s�ַ������ҳ�һС���ַ�������ȫ��words��Ԫ�أ���¼��һС���ַ�����ʼ������
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
        {                         //ָ��鵽string�ܳ��ȼ�ȥwords�����г�Ա����
            unordered_map<string,int> um;//��������ˢ��
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




��Ŀ�����������mapһ����������words�����е�Ԫ�غ���������
��һ�����ַ��������У�һ��������words��Ԫ��ƥ��ľ�һֱ�������ҽ��ŵ�С�ַ��������Ƿ���words�е�Ԫ��ƥ��