/*
 *��Ŀ���⣺��������ͬ�����ǰ׺
 *
 *�� "ab" "abc" "abcd" ��ͬ���ǰ׺��Ϊab
 * "acd" "a" "ae" ��ͬ���ǰ׺Ϊa
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



���Ĳ��־����ȼ��������ͬǰ׺Ϊstrs[0]��֮����strs[0]��֮���string�Ƚ�
һ�����ֺ���ĵ�string���в���֮�����Ƚϴ�ʱj��length�Ĵ�С�����jС����ôlength���j



���� "abc" "ab" "abde"

�ȼ���Ϊabc lengthΪ3 ֮��ab�����ȽϷ���j = 2 strs[1][2]!=strs[0][2]   �� 2 < 3��length�ͱ��2


str.substr(index1,length)
��index1��ʼ����index1 ��2���ַ������ƽ�str

