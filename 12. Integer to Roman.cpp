/*
 *��Ŀ���⣺������ת������������
 *
 
 *���ӣ�����Ҫ֪�����������м����ַ�
 *�о�123����Ҫ֪��100 C 10 X 1 I 
 *
 *123 = 100 + 20 + 3
 *100 Ϊ C  20��10��2������ΪXX 3Ϊ1��3������ΪIII �ܵľ���CXXIII
 * 
 * ����������Ҫ�������ִӴ�С���������
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



�����о���Ҫ�������ַ��Ͷ�Ӧ�����֣�����whileѭ�� һ������num��Ҫ����������е�һ�������Ĵ���ô�����֧��䣬num��ȥ�������Ȼ����������Ӧ���ַ�д��result����123 ��100����Ҫд��C  ��֮��23����10��Xд��ȥ���CX
֮��13���ǰ�10д��ȥ�Դ�����


//����û��start����for loop �е�i = 0
//��ô����199��ȥ100��Ϊ99   99�ͻ�Ҫ��1000�Ƚ�����������Ч�ʽϵ�

���value�����Ǵ�С�����ŵ���ô�������߼���Ϊ���Ǽ����������ֶ��Ǵ����λ��ʼд���ַ���


