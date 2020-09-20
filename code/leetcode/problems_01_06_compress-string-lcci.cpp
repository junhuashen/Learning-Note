/* 
data-time 2020-03-17 21:22:56


题目描述:

面试题 01.06. 字符串压缩。

字符串压缩。利用字符重复出现的次数，编写一种方法，实现基本的字符串压缩功能。比如，字符串aabcccccaaa会变为a2b1c5a3。若“压缩”后的字符串没有变短，则返回原先的字符串。你可以假设字符串中只包含大小写英文字母（a至z）。

示例1:

 输入："aabcccccaaa"
 输出："a2b1c5a3"

示例2:
 输入："abbccd"
 输出："abbccd"
 解释："abbccd"压缩后为"a1b2c2d1"，比原字符串长度更长。
提示：

字符串长度在[0, 50000]范围内。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/compress-string-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：
主要思路循环统计；然后使用[]进行统计
时间复杂度O(n);空间复杂度O(n);
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
using namespace std;




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
    string compressString(string S) {
         if (S == "") return "";
        static auto speedup = [](){ios::sync_with_stdio(false);cin.tie(nullptr);return nullptr;}();
        string res;
        for(int i=0;i<S.size();++i){
            char temp_char=S[i];
            res+=temp_char;
            int temp_count=1;
            while((i+1)<S.size()&&temp_char==S[i+1]){
                ++i;
                ++temp_count;
            }
            res+=to_string(temp_count);
        }
        return res.size()>=S.size()?S:res;
    };
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<int> vector_temp2={2,5,6};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.compressString("abbccd");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用ostream进行优化
class Solution {
public:
    string compressString(string S) {
        static auto speedup = [](){ios::sync_with_stdio(false);cin.tie(nullptr);return nullptr;}();
        if (S == "") return "";
        char last = S[0];
        int nCount = 1;
        string str = "";
        ostringstream ss;
        for (int i = 1; i < S.size(); ++i){
            if (S[i] == last){ ++nCount; continue; }
            ss << last << nCount;
            nCount = 1;
            last = S[i];
        }
        ss << last << nCount;
        str = ss.str();
        return str.size() < S.size() ? str : S;
    }
};

//官方题解:
https://leetcode-cn.com/problems/compress-string-lcci/solution/zi-fu-chuan-ya-suo-by-leetcode-solution/
//优质解析:

https://leetcode-cn.com/problems/compress-string-lcci/solution/shuang-zhi-zhen-fa-qu-lian-xu-zi-fu-cpython-by-net/
*/