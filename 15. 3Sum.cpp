/*
 *
 *��Ŀ���⣺����array S = [-1, 0, 1, 2, -1, -4],
 *��ȡ������������Ϊ0�� ���Ϊ
 *                       [-1, 0, 1],
 *                       [-1, -1, 2]
 *Ҫ���ǽ�������ظ�����[-1,0,1] �� [-1,1,0]��������þ����ź�˳���
 *
 *
 *�����õ���twopointers�뷨
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



��ָ��һ�������������෴����Ȼ������������+1����β��ʼ������£��ֱ���ҵ���������Ӹպ���ԭ��ָ���������෴����Ȼ������Ҫ�ľ���������ʣ��Ĳ������������Ƿ����������ܣ�

while(i+1 < nums.size()&&nums[i+1] == nums[i])
                    ++i;

��δ����ֹ����ظ��� -1 -1 -1 1 2
��һ��-1��������Ͼ�����1������������ټ����һ��-1