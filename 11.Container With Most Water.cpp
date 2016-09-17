/*
 *题目大意：
 *只要就是蓄水的问题
 *如给你一些数   1，2，4，3，6
 *在坐标轴上画出   1，1  2，2  3，4  4，3 5，6 这些点  
 *然后各个点与  1，0 2，0 3，0 4，0 5，0 相连成一条线
 *再和X轴组合形成一个容器
 *                    
 *寻找两条边使这个容器的蓄水量最大                        
 *
 *Runtime:32ms
 *注意点：蓄水的最大值取决于最小的一边
 */


class Solution {
public:
    int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) 
    {
        int Min = min(height[i], height[j]);
        water = max(water, (j - i) * Min);
        while (height[i] <= Min && i < j) i++;
        while (height[j] <= Min && i < j) j--;
    }
    return water;
}
};


先让i 和 j处于头尾两端，这时容器的宽度最大，但是仅仅宽度最大还不够，所以要头height[i]和尾height[j]哪个小（意思就是哪个等于Min） 那个就要不断向内缩进来提高桶的高度，直到i > j退出

要计算哪个小就是因为蓄水的最大值取决于最小的一边
