/* 
data-time 2020-03-17 21:22:56


题目描述:

1071. 字符串的最大公因子

对于字符串 S 和 T，只有在 S = T + ... + T（T 与自身连接 1 次或多次）时，我们才认定 “T 能除尽 S”。

返回最长字符串 X，要求满足 X 能除尽 str1 且 X 能除尽 str2。

 

示例 1：

输入：str1 = "ABCABC", str2 = "ABC"
输出："ABC"
示例 2：

输入：str1 = "ABABAB", str2 = "ABAB"
输出："AB"
示例 3：

输入：str1 = "LEET", str2 = "CODE"
输出：""
 

提示：

1 <= str1.length <= 1000
1 <= str2.length <= 1000
str1[i] 和 str2[i] 为大写英文字母

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/greatest-common-divisor-of-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：
 使用除数留余发进行余数的计算
 时间复杂度O(max(n))；空间复杂度O(n);
 https://zhuanlan.zhihu.com/p/31824895
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
    inline int gcd(int a, int b) {return b == 0? a : gcd(b , a % b);}
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) return "";
        return str1.substr(0, gcd(str1.size(), str2.size()));
    }
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
    auto result=my_solution.gcdOfStrings("ABCABC","ABC");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：将递函数展开了

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int m=str1.length(),n=str2.length(),t;
        string res="",ele="";
        if(!m||!n)return "";
        if(m<n)
        {
            t=m;
            m=n;
            n=t;
        }
        t=m%n;
        while(t)
        {
            m=n;
            n=t;
            t=m%n;
        }
        res=str2.substr(0,n);
        ele=res;
        for(int i=1;i<str2.length()/n;i++)
        {
            res+=ele;
        }
        if(res!=str2)return "";
        res=ele;
        for(int i=1;i<str1.length()/n;i++)
        {
            res+=ele;
        }
        if(res!=str1)return "";
        return ele;
    }
};
//官方题解:
https://leetcode-cn.com/problems/greatest-common-divisor-of-strings/solution/zi-fu-chuan-de-zui-da-gong-yin-zi-by-leetcode-solu/
//优质解析:

https://leetcode-cn.com/problems/greatest-common-divisor-of-strings/solution/1071-zi-fu-chuan-de-zui-da-gong-yin-zi-by-wonderfu/
*/