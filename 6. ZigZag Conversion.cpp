/*��Ŀ���⣺
 *   ��һ�ַ������������·�ʽ����
 *
 *  ��  "ABCDE",2       "ABCDEF",3
 *     A   C   E        A       E
 *       B   D            B   D   F
 *                          C
 * �ó��Ľ����ACEBD  �ó��Ľ����AEBDFC
 *
 *���³�������ʱ�䣺152ms
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





/*discuss answer��

����ʡ�Դ������Ż���152ms���52ms

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

��step������index�ӻ��Ǽ�����index�ӵ���߽�ʱ����step��Ϊ-1����index��
indexΪ0ʱ����step���1��index��


string����.append(const char *)
���ö���ĩβ���ϳ����ַ���*/

