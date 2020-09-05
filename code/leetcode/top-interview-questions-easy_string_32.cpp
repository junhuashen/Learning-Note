/* 
data-time 2019-09-14 13:42:56


题目描述:
反转字符串

反转字符串
编写一个函数，其作用是将输入的字符串反转过来。输入字符串以字符数组 char[] 的形式给出。

不要给另外的数组分配额外的空间，你必须原地修改输入数组、使用 O(1) 的额外空间解决这一问题。

你可以假设数组中的所有字符都是 ASCII 码表中的可打印字符。

 

示例 1：

输入：["h","e","l","l","o"]
输出：["o","l","l","e","h"]
示例 2：

输入：["H","a","n","n","a","h"]
输出：["h","a","n","n","a","H"]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/32/

/*

主要思路：直接使用交换方式，没有什么说的比较简单,只是注意这里的奇数和偶数的变化，
        算法复杂度:时间O(n/2);
        应该可以直接使用交换，将复杂度转变为O(0)
		
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
    void reverseString(vector<char>& s) {
        int length=s.size();
        
        for(int i=0;i<length/2;++i){
            char temp=s.at(i);
            s.at(i)=s.at(length-1-i);
            s.at(length-1-i)=temp;
        }
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
	int time_point_1=clock();
    my_solution.reverseString(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：基本上没有什么，注意这里c++11的写法
static bool init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

class Solution {
public:
    void reverseString(vector<char>& s) {
        reverse(s.begin(), s.end());
    }
};
*/
