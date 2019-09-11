/* 
data-time 2019-09-11 19:20:56


题目描述:
 加一

给定一个由整数组成的非空数组所表示的非负整数，在该数的基础上加一。

最高位数字存放在数组的首位， 数组中每个元素只存储单个数字。

你可以假设除了整数 0 之外，这个整数不会以零开头。

示例 1:

输入: [1,2,3]
输出: [1,2,4]
解释: 输入数组表示数字 123。
示例 2:

输入: [4,3,2,1]
输出: [4,3,2,2]
解释: 输入数组表示数字 4321。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/27/
/*

主要思路：倒叙进行相加，注意这里只是+1，但是需要考虑进一位的情况，最差的情况下会多出一位，因此要使用头插法来进行新数据的更新。

		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
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
    vector<int> plusOne(vector<int>& digits) {
        vector<int> result;
        //是否进位
        int is_up=1;
        
        for(int i=digits.size()-1;i>=0;--i)
        {
            int temp=(digits.at(i)+is_up)%10;
            is_up=(digits.at(i)+is_up)/10;
            result.insert(result.begin(),temp);
        }
        if(is_up){
            result.insert(result.begin(),is_up);
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={9,9,9};
    vector<int> b={9,4,9,8,4};
	int time_point_1=clock();
    auto  result=my_solution.plusOne(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：一样的思路不过没有用到额外的变量，直接进行拷贝，检查是否有进位。并且在中间检查是否进位，没有进位直接返回。
//数组的操作比较基础，还是应该多思考一下。
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for (int i=digits.size()-1; i>-1; i--){
            digits[i] = (digits[i] + 1) % 10;
            if (digits[i] != 0)
                return digits;
        }
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
*/
