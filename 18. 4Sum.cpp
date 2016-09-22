/*
 *题目大意:找出4个数字他们之和为target
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


基本上就是将4sum 变成每确定一个数之后再判断这个数对应的3sum即可。增多的就是中间加了些许判断，来防止不必要的循环