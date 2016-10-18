/*
 *��Ŀ����:��׼��multiplication���˷���, division�������� and mod  *operator(ȡ������) ��� dividend(������), divisor(����)����
 *
 *
 *
 */





class Solution {
public:
    int divide(int dividend, int divisor) 
    {
        if (!divisor || (dividend == INT_MIN && divisor == -1)) return INT_MAX;
        int sign = ((dividend < 0) ^ (divisor < 0))?-1:1;
        long long divid = labs(dividend);
        long long divis = labs(divisor);
        int res = 0;
        while(divid >= divis)
        {
            long long multiply = 1,temp = divis;
            while(divid >= (temp << 1))
            {
                temp <<= 1;
                multiply <<= 1;
            }
            divid -= temp;
            res += multiply;
        }
        return sign < 0?-res:res;
    }
};


��������ͨ�ĳ�����ôֻ����λ���㣬����69 / 3
����3*2*2*2*2 = 48, 69 < 48*2 Ȼ��69 - 48 = 21����һ�εı������� res= 2*2*2*2 = 16

Ȼ��21 > 3,21 / 3��  3*2*2 = 12, 21 < 12*2 Ȼ��21-12 = 9����һ�εı������� res += 2*2Ϊ20

Ȼ��9 > 3, 9��/��3 ��  3*2 = 6, 9 < 6*2 Ȼ�� 9 -6 = 3����һ�εı������� res+=2Ϊ22

Ȼ��3���� ��3/3��  3 < 3*2 Ȼ��3-3=0 res+=1Ϊ3

���0 < 3�˳�ѭ���õ����resΪ23



 
