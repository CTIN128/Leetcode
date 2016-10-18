/*
 *题目大意：给定一数值和（特殊）数组，求数组中不是该数值的元素个数并移动
 *(发现代码最后一个元素移除)
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