/*
 *题目大意:不准用multiplication（乘法）, division（除法） and mod  *operator(取余运算) 算出 dividend(被除数), divisor(除数)的商
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


不能用普通的除法那么只能用位运算，比如69 / 3
首先3*2*2*2*2 = 48, 69 < 48*2 然后69 - 48 = 21（下一次的被除数） res= 2*2*2*2 = 16

然后21 > 3,21 / 3，  3*2*2 = 12, 21 < 12*2 然后21-12 = 9（下一次的被除数） res += 2*2为20

然后9 > 3, 9　/　3 ，  3*2 = 6, 9 < 6*2 然后 9 -6 = 3（下一次的被除数） res+=2为22

然后3＝３ ，3/3，  3 < 3*2 然后3-3=0 res+=1为3

最后0 < 3退出循环得到结果res为23



 
