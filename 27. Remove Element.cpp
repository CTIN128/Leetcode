/*
 *��Ŀ���⣺����һ��ֵ�ͣ����⣩���飬�������в��Ǹ���ֵ��Ԫ�ظ������ƶ�
 *(���ִ������һ��Ԫ���Ƴ�)
 *
 */





class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.empty())
          return 0;
        else if(nums.size() == 1 && nums[0]!=val)
          return 1;
        else if(nums.size() == 1 && nums[0]==val)
          return 0;
        int newlength = 0;
        for(size_t i = 0;i < nums.size();++i)
        {
            if(nums[i] != val)
             nums[newlength++] = nums[i];
        }
        return newlength;
    }
};