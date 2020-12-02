/* 
data-time 2019-10-08 10:23:56


题目描述:

Fizz Buzz

写一个程序，输出从 1 到 n 数字的字符串表示。

1. 如果 n 是3的倍数，输出“Fizz”;

2. 如果 n 是5的倍数，输出“Buzz”;

3.如果 n 同时是3和5的倍数，输出 “FizzBuzz”。

示例：

n = 15,

返回:
[
    "1",
    "2",
    "Fizz",
    "4",
    "Buzz",
    "Fizz",
    "7",
    "8",
    "Fizz",
    "Buzz",
    "11",
    "Fizz",
    "13",
    "14",
    "FizzBuzz"
]


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/25/math/60/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：分别查找当前值除15,5,3的商k1,k2,k3，然后使用循环添加
        直接使用循环添加字符串，并且在添加时判断是否被15整除，或者5整除或者3整除。替换不同的string
        时间复杂度O(n);空间复杂度O(n);

*/
#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <stack>
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
    vector<string> fizzBuzz(int n) {
        vector<string> result;
        for(int i=1;i<=n;++i){
            if(i%15==0){
                result.push_back("FizzBuzz");
            }else if(i%5==0){
                result.push_back("Buzz");
            }else if(i%3==0){
                result.push_back("Fizz");
            }else{
                result.push_back(to_string(i));
            }
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
    auto result=my_solution.fizzBuzz(10);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路基本完全相同，使用辅助工具来统计当前的5的倍数和3的倍数，当达到要求就直接添加数组并将其置0
class Solution {
public:
    vector<string> fizzBuzz(int n) {
      vector<string> ans(n);
        int fizz=0,buzz=0;
        
        for(int i=1;i<=n;i++)
        {
            fizz++;
            buzz++;
            if(buzz==5&&fizz==3)
            {
                ans[i-1]="FizzBuzz";
                fizz=0;
                buzz=0;
            }
            else if(fizz==3)
            {
                ans[i-1]="Fizz";
                fizz=0;
            }
            else if(buzz==5)
            {   
                ans[i-1]="Buzz";
                buzz=0;
            }
            else
                ans[i-1]=to_string(i);  
        }
        return ans;
    }
};
*/