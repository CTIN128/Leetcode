/*
 *��Ŀ����:����������⣩�������ظ�������Ȼ���ظ������ֺϲ�
 * [1,1,2] return 2 ������[1,2]
 *
 */


class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() <= 1)
          return nums.size();
        int newlength = 1;
        for(size_t i = 1;i < nums.size();++i)
        {
            if(nums[i-1]!=nums[i])nums[newlength++] = nums[i];
        }
        return newlength;
    }
};

ǰ������Ԫ��һ����ô����ʲô�����ǰ������Ԫ�ز�һ����ô�ͰѺ������Ԫ���Ƶ�ǰ�����Ԫ��λ����