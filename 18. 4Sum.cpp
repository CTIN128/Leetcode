/*
 *��Ŀ����:�ҳ�4����������֮��Ϊtarget
 *
 *
 *
 */





class Solution {
public:
vector<vector<int>> fourSum(vector<int>& nums, int target) 
{
    vector<vector<int>> result;
    if(nums.size() < 4)
    {
        return result;
    }
    sort(nums.begin(),nums.end());
    int len = nums.size();
  for(size_t i = 0;i < nums.size()-3;++i)
  {
     if(i > 0&&nums[i-1] == nums[i])
        continue;
     if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3] > target)
        break;
     if(nums[i]+nums[len-1]+nums[len-2]+nums[len-3] < target)
        continue;
      for(size_t j  = i+1;j < nums.size();++j)

      {
        if(j > i+1&&nums[j-1] == nums[j])
        continue;
     if(nums[i]+nums[j]+nums[j+1]+nums[j+2] > target)
        break;
     if(nums[i]+nums[j]+nums[len-2]+nums[len-1] < target)
        continue;
    int front = j+1,rear = len-1;
    while(front < rear)
       
       {
        int thissum = nums[i]+nums[j]+nums[rear]+nums[front];
              if(thissum > target)
                --rear;
              else if(thissum < target)
               ++front;
              else
               {std::vector<int> v{nums[i],nums[j],nums[front],nums[rear]};
               result.push_back(v);
               int front_data = nums[front];
               int rear_data = nums[rear];
               while(front < rear&&nums[front] == front_data) ++front;
               while(front < rear&&nums[rear] == rear_data) --rear;}
       }
      }
    
  }

  return result;     
}
};


�����Ͼ��ǽ�4sum ���ÿȷ��һ����֮�����ж��������Ӧ��3sum���ɡ�����ľ����м����Щ���жϣ�����ֹ����Ҫ��ѭ��