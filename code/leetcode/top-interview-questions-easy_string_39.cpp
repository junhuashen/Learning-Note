/* 
data-time 2019-09-16 13:21:56


题目描述:
最长公共前缀

报数序列是一个整数序列，按照其中的整数的顺序进行报数，得到下一个数。其前五项如下：

1.     1
2.     11
3.     21
4.     1211
5.     111221
1 被读作  "one 1"  ("一个一") , 即 11。
11 被读作 "two 1s" ("两个一"）, 即 21。
21 被读作 "one 2",  "one 1" （"一个二" ,  "一个一") , 即 1211。

给定一个正整数 n（1 ≤ n ≤ 30），输出报数序列的第 n 项。

注意：整数顺序将表示为一个字符串。

 

示例 1:

输入: 1
输出: "1"
示例 2:

输入: 4
输出: "1211"
 


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/39/

/*

主要思路：1.因为这里是直接的报数，因此可以在for循环中进行字符的拷贝和统计，设置初始的序列为"1".
            对于每一次新的生成都是先，看上面一个中相同数字的统计数量，将连续的几个数变为n+这个数。使用循环进行统计计算对应的数的值。
            重复循环产生对应的数据列表。
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
    string countAndSay(int n) {
        if(n<0){return "";}
        if(n<2){return "1";}
        n-=1;
        std::string result="1";
        //进行for循环进行数字统计
        for(int i=0;i<n;++i){
            string temp_result="";//本次循环的临时变量
            int temp_length=0;//统计相同字符串出现的次数
            char temp_char=result.at(0);
            for(int j=0;j<result.length();++j){
                if(result.at(j)==temp_char){
                    ++temp_length;
                }else{//当不相同时
                    //更新temp_result
                    temp_result+=std::to_string(temp_length)+temp_char;
                    //更新temp_char
                    temp_char=result.at(j);
                    temp_length=1;    
                }
            }
            temp_result+=std::to_string(temp_length)+temp_char;
            result=temp_result;
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
    std::string strings ="2147483648";
    std::string string2= "147";
    int test_int=2; 
	int time_point_1=clock();
    auto result=my_solution.countAndSay(test_int);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路基本相同只是代码更加简练
 时间复杂度为O(n)
class Solution {
public:
    string countAndSay(int n) {
        if (n <= 0) {
            return "";
        }
        string res = "1";
        for (int i = 0; i < n-1; i++) {
            string cur = "";
            for (int j = 0; j < res.size(); j++) {
                int num = 1;
                while (j + 1 < res.size() && res[j] == res[j + 1]) {
                    num++;
                    j++;
                }
                cur += to_string(num) + res[j];
            }
            res = cur;
        }
        return res;
    }
};

*/
