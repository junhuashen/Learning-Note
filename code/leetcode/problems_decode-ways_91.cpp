/* 
data-time 2019-11-24 21:23:56


题目描述:

91. 解码方法


一条包含字母 A-Z 的消息通过以下方式进行了编码：

'A' -> 1
'B' -> 2
...
'Z' -> 26
给定一个只包含数字的非空字符串，请计算解码方法的总数。

示例 1:

输入: "12"
输出: 2
解释: 它可以解码为 "AB"（1 2）或者 "L"（12）。
示例 2:

输入: "226"
输出: 3
解释: 它可以解码为 "BZ" (2 26), "VF" (22 6), 或者 "BBF" (2 2 6) 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/decode-ways
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 使用动态规划的方法，对于因为最多可以显示26位，因此，可以一次最多取2未有效数字，和26进行大小比较。
            符合条件就将当前值添加上，否则进行下一次。
        时间复杂度O(n^2);空间复杂度O(0)
        2. 将递归更换为循环
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <stack>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <set>
#include <string.h>
using namespace std;
#define INT_MAX INT16_MAX
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main function
class Solution {
public:
    //这个方法超出时间限制了
    void checkNums(string &s,int start_index){
        if(start_index>s.size()) return ;
        if(start_index==s.size()){
            ++result;
        }else{
            for(int i=1;i<=2;++i){
                int temp=atoi(s.substr(start_index,i).c_str());

                if(temp>=1&&temp<=26&&to_string(temp)==s.substr(start_index,i)){
                    checkNums(s,start_index+i);
                }else{
                    continue;
                }
            }
        }
    }
    int numDecodings1(string s) {
         if (s.size() == 0 || s[0] == '0') // 起始位0无解
            return 0;
        checkNums(s,0);
        return result;
    }
    int numDecodings(string s) {
        if (s[0] == '0') return 0;
        int pre = 1, curr = 1;//dp[-1] = dp[0] = 1
        for (int i = 1; i < s.size(); i++) {
            int tmp = curr;
            if (s[i] == '0')
                if (s[i - 1] == '1' || s[i - 1] == '2') curr = pre;
                else return 0;
            else if (s[i - 1] == '1' || (s[i - 1] == '2' && s[i] >= '1' && s[i] <= '6'))
                curr = curr + pre;
            pre = tmp;
        }
        return curr;
    }
    int result=0;
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.numDecodings("101");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：使用for循环来确定，避免了递归
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        if (s.length() < 4 || s.length() > 12) {
            return {};
        }
        vector<string> myVector;

        for (int pos1 = 0; pos1 < 3; pos1++) {
            for (int pos2 = pos1 + 1; pos2 < pos1 + 4; pos2++) {
                for (int pos3 = pos2 + 1; pos3 < s.length() - 1; pos3++) {
                    string str1 = s.substr(0, pos1 + 1);
                    int num1 = stoi(str1);
                    string str2 = s.substr(pos1 + 1, pos2 - pos1);
                    int num2 = stoi(str2);
                    string str3 = s.substr(pos2 + 1, pos3 - pos2);
                    int num3 = stoi(str3);
                    string str4 = s.substr(pos3 + 1, s.length() - pos3);
                    int num4 = stoi(str4);
                    if (num1 > 255 || num2 > 255 || num3 > 255 || num4 > 255) {
                        continue;
                    }
                    if (str1.length() > 1 && str1[0] == '0') {
                        continue;
                    }
                    if (str2.length() > 1 && str2[0] == '0') {
                        continue;
                    }
                    if (str3.length() > 1 && str3[0] == '0') {
                        continue;
                    }
                    if (str4.length() > 1 && str4[0] == '0') {
                        continue;
                    }
                    string ans = str1 + "." + str2 + "." + str3 + "." + str4;
                    myVector.push_back(ans);
                }
            }
        }
        return myVector;
    }
};
//官方题解
https://leetcode-cn.com/problems/restore-ip-addresses/solution/fu-yuan-ipdi-zhi-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/restore-ip-addresses/solution/hui-su-shi-jian-100-ti-gong-yi-ge-cde-ban-ben-gei-/
https://leetcode-cn.com/problems/restore-ip-addresses/solution/cdi-gui-0msji-bai-100-by-dongzengjie/

*/