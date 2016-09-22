/*
 *题目大意:找出三个数字的和，这个和是最接近target或者就等于target
 *
 *
 *题目在3sum加了些条件，只要进行一定的判断即可
 *
 */







class Solution {
public:
int threeSumClosest(vector<int>& nums, int target) {
        int close_target = nums[0]+nums[1]+nums[2];
        sort(nums.begin(),nums.end());
        
        for(size_t i = 0;i < nums.size()-2;++i)
        {
            if(i > 0 && nums[i] == nums[i-1]) continue;

            int front = i+1;
            int rear = nums.size()-1;
            
            while(front < rear)
            {
                int thissum = nums[i] + nums[front] + nums[rear];
                if(thissum == target)return target;
                /*if(fabs(target-thissum) < fabs(close_target-target))
                    close_target = thissum;*/
                if(thissum < target)
                {
                  ++front;
                }
                else if(thissum > target)
                {
                  --rear;
                }
            }
        }
        return close_target;
    }
};

文中省略部分就是判断的核心