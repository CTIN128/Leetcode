/*
 *
 *题目大意：计算array S = [-1, 0, 1, 2, -1, -4],
 *求取其中三个数和为0， 结果为
 *                       [-1, 0, 1],
 *                       [-1, -1, 2]
 *要求是结果不能重复，如[-1,0,1] 和 [-1,1,0]，所以最好就是排好顺序的
 *
 *
 *本题用到了twopointers想法
 *
 *
 */





class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> vec;
        std::sort(nums.begin(), nums.end());
        for(size_t i = 0;i < nums.size()-2;++i)
        {
            int target = -nums[i];
            int front = i+1;
            int rear = nums.size()-1;
            while(front < rear)
            {
                int sum = nums[front] + nums[rear];
                if(sum < target)
                {
                    front++;
                }
                else if(sum > target)
                {
                    rear--;
                }
                else
                {
                vector<int> triplet(3, 0);
                triplet[0] = nums[i];
                triplet[1] = nums[front];
                triplet[2] = nums[rear];
                vec.push_back(triplet);
                while (front < rear && nums[front] == triplet[1]) front++;
                while (front < rear && nums[rear] == triplet[2]) rear--;
                }
            }
            while(i+1 < nums.size()&&nums[i+1] == nums[i])
                    ++i;
        }
        return vec;
    }
};



先指定一个数，发现其相反数，然后从这个数索引+1到队尾开始向内收拢，直到找到两个数相加刚好是原先指定的数的相反数，然后最重要的就是在数组剩余的部分中再找找是否还有其他可能，

while(i+1 < nums.size()&&nums[i+1] == nums[i])
                    ++i;

这段代码防止结果重复如 -1 -1 -1 1 2
第一个-1检测完马上就跳到1这个数，不会再检测下一个-1