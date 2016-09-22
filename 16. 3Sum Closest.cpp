/*
 *��Ŀ����:�ҳ��������ֵĺͣ����������ӽ�target���߾͵���target
 *
 *
 *��Ŀ��3sum����Щ������ֻҪ����һ�����жϼ���
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

����ʡ�Բ��־����жϵĺ���