/* 
data-time 2019-11-2 12:28:56


题目描述:

Excel表列序号

给定一个Excel表格中的列名称，返回其相应的列序号。

例如，

    A -> 1
    B -> 2
    C -> 3
    ...
    Z -> 26
    AA -> 27
    AB -> 28 
    ...
示例 1:

输入: "A"
输出: 1
示例 2:

输入: "AB"
输出: 28
示例 3:

输入: "ZY"
输出: 701


主要思路：1. 本质上是一个进制转换。遍历字符串，进行相关的操作
         时间复杂度O(n) 空间复杂度O(1)


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
using namespace std;

#define INT_MAX INT32_MAX
#define INT_MIN INT32_MIN

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
    int titleToNumber(string s) {
        long result=0;
        for(int i=0;i<s.size();++i){
            result*=26;
            result+=s[i]-'A'+1;
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    Solution my_solution;
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.titleToNumber("ABC");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：使用指数函数和加法，加快了运算速度
时间复杂度O(n)
class Solution {
public:
    int titleToNumber(string s) {
        int len=s.length();
        int n=len-1;
        int sum=0;
        for(int i=0;i<len;++i)
        {
            int temp=pow(26,n)*(s[i]-'A'+1);
            sum+=temp;
            n--;
        }
        return sum;
        
    }
};

//优质解答2：使用倒叙相加的方式，加快了运算速度
class Solution {
public:
    int titleToNumber(string s) {
        int l = s.size();
        int ans = 0;
        for (int i = l - 1; i >= 0; i--){
            ans += (s[l-1-i]-'A' + 1) * (int)(pow(26,i) + 0.5);            
        }
        return ans;
    }
};
官方题解：
无：
*/