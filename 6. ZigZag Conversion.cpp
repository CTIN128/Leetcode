/*题目大意：
 *   将一字符串数组以如下方式排序
 *
 *  如  "ABCDE",2       "ABCDEF",3
 *     A   C   E        A       E
 *       B   D            B   D   F
 *                          C
 * 得出的结果是ACEBD  得出的结果是AEBDFC
 *
 *以下程序运行时间：152ms
 */






class Solution {
public:
        string convert(string s, int numRows) {
        if(s.size() <= 2 || numRows == 1)
        {
           return s;
        }
        vector<vector<char>> v_char(numRows);
        size_t str_index = 0;
        /*
        int count = 0;
        bool add = true;
        for(str_index;str_index < s.size();)
        {
            if(add)
            {
                v_char[count++].push_back(s[str_index++]);
                if(count == numRows)
                {
                    add = false;
                    count -= 2;
                }
            }
            else
            {
                cout << count <<endl;
                v_char[count--].push_back(s[str_index++]);
                if(count < 0)
                {
                    count += 2;
                    add = true;
                }
            }
        }
       */
        string result;
        for(auto &w : v_char)
        {
           for(auto x : w)
           {
              result += x;
           }
        }
        return result;
    }

};





/*discuss answer：

文中省略处做了优化将152ms变成52ms

        int index = 0,step = 1;
        for(str_index;str_index < s.size();)
        {
            v_char[index].push_back(s[str_index++]);
            if(index == 0)
                step = 1;
            else if(index == numRows - 1)
                step = -1;
            index += step;
        }

用step来控制index加还是减，当index加到达边界时，让step变为-1就让index减
index为0时，让step变成1让index加


string对象.append(const char *)
可让对象末尾加上常量字符串*/

