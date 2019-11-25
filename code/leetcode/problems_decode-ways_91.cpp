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
    int numDecodings(string s) {
        int len = s.length();
        if(len == 0 || s[0] == '0'){
            return 0;
        }
        int res = 1, last_r = 1;

        for(int i = 1; i < len; i++){
            //计算当前两位的临时值
            int temp = 10 * (s[i - 1] - '0') + s[i] - '0';
            //判断是否符合条件
            if(temp == 0 || (temp > 26 && s[i] == '0')){
                return 0;
            }
            //不符合将last_r设置为res
            if(temp > 26 || s[i] == '0' || temp < 10 || (i < len - 1 && s[i + 1] == '0' )){
                last_r = res;
            }else{
                //当符合条件时
                //将last_r转变为res,res+=last
                int t = last_r;
                last_r = res;
                res+=t;
            }
        }
        return res;
    }
};
//官方题解

//优质解析：
https://leetcode-cn.com/problems/decode-ways/solution/c-dong-tai-gui-hua-by-infinite-15-5/
https://leetcode-cn.com/problems/decode-ways/solution/c-wo-ren-wei-hen-jian-dan-zhi-guan-de-jie-fa-by-pr/

https://leetcode-cn.com/problems/decode-ways/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-2-3/

*/