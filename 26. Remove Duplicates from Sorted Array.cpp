/*
 *题目大意:计算出（特殊）数组中重复个数，然后将重复的数字合并
 * [1,1,2] return 2 数组变成[1,2]
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

前后两个元素一样那么不做什么，如果前后两个元素不一样那么就把后面这个元素移到前后这个元素位置上