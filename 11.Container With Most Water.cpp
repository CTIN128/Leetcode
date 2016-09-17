/*
 *��Ŀ���⣺
 *ֻҪ������ˮ������
 *�����һЩ��   1��2��4��3��6
 *���������ϻ���   1��1  2��2  3��4  4��3 5��6 ��Щ��  
 *Ȼ���������  1��0 2��0 3��0 4��0 5��0 ������һ����
 *�ٺ�X������γ�һ������
 *                    
 *Ѱ��������ʹ�����������ˮ�����                        
 *
 *Runtime:32ms
 *ע��㣺��ˮ�����ֵȡ������С��һ��
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


����i �� j����ͷβ���ˣ���ʱ�����Ŀ����󣬵��ǽ��������󻹲���������Ҫͷheight[i]��βheight[j]�ĸ�С����˼�����ĸ�����Min�� �Ǹ���Ҫ�����������������Ͱ�ĸ߶ȣ�ֱ��i > j�˳�

Ҫ�����ĸ�С������Ϊ��ˮ�����ֵȡ������С��һ��
