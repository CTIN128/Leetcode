/*
 *��Ŀ���⣺�ҳ�haystack��needle��ʼ������
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

0Ϊ���ַ�������һ��string�п��ַ�ֻ�ܳ������ַ����׻���β
��һ��if���˵��needle�������һ�����ַ������Ѿ���ѯ��needleβ��
��ô��Ȼֱ�ӷ���index���ڶ���if˵��haystack�����Ǹ����ַ������Ѿ���鵽
haystackβ���ˣ���ûreturnһ��index����ôҲ�Ƿ���ʧ�ܻ����ַ����г��ֿ��ַ��ǲ����ܵģ����һ��if�Ƿ���needle���и��ַ���������ʱ�����ڲ�ѭ�������ⲿѭ��ָ�������ƶ�������û���ҵ��ͷ���-1����ʵforѭ���еĸ���return�Ϳ���ʵ��return��������for loop