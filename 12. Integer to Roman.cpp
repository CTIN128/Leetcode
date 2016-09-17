/*
 *题目大意：将数字转化成罗马数字
 *
 
 *例子：首先要知道罗马数字中几个字符
 *列举123：就要知道100 C 10 X 1 I 
 *
 *123 = 100 + 20 + 3
 *100 为 C  20是10的2倍所以为XX 3为1的3倍所以为III 总的就是CXXIII
 * 
 * 罗马数字主要就是数字从大到小的组合问题
 *
 *Runtime:78ms
 *
 *
 */

class Solution {
public:
string intToRoman(int num) {
           int value[] = {1000,900,500,400,100,90,50,40,10,9,5,4,1};
           string letter[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
           string result;
           size_t start = 0;
           while(num)
           {
              for(size_t i = start;i < 13;++i)
              {
                if(num >= value[i])
                {
                    num -= value[i];
                    result.append(letter[i]);
                    break;
                }
                 start = i + 1;  
              }
           }
           return result;
    }
};



首先列举主要的罗马字符和对应的数字，进入while循环 一旦发现num所要求的数比其中的一个数来的大，那么进入分支语句，num减去这个数，然后把这个数对应的字符写入result中如123 的100所以要写入C  ，之后23遇到10把X写进去变成CX
之后13还是把10写进去以此类推


//假如没有start即把for loop 中的i = 0
//那么比如199减去100后为99   99就还要从1000比较下来，这样效率较低

如果value数组是从小到大排得那么不符合逻辑因为我们计算罗马数字都是从最大位开始写入字符的



