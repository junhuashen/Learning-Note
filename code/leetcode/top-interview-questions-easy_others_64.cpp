/* 
data-time 2019-10-08 15:23:56


题目描述:

位1的个数

编写一个函数，输入是一个无符号整数，返回其二进制表达式中数字位数为 ‘1’ 的个数（也被称为汉明重量）。

 

示例 1：

输入：00000000000000000000000000001011
输出：3
解释：输入的二进制串 00000000000000000000000000001011 中，共有三位为 '1'。
示例 2：

输入：00000000000000000000000010000000
输出：1
解释：输入的二进制串 00000000000000000000000010000000 中，共有一位为 '1'。
示例 3：

输入：11111111111111111111111111111101
输出：31
解释：输入的二进制串 11111111111111111111111111111101 中，共有 31 位为 '1'。
 

提示：

请注意，在某些语言（如 Java）中，没有无符号整数类型。在这种情况下，输入和输出都将被指定为有符号整数类型，并且不应影响您的实现，因为无论整数是有符号的还是无符号的，其内部的二进制表示形式都是相同的。
在 Java 中，编译器使用二进制补码记法来表示有符号整数。因此，在上面的 示例 3 中，输入表示有符号整数 -3。


主要思路：

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
    int hammingWeight(uint32_t n) {
        int result=0;
        int i=0;
        while(i<32){
            if(n==0){
                break;
            }
            if(n&(0x1)){
                ++result;
            }
            n=n>>1;
            ++i;
        }
        return result;
    }
    
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    int test_int=1; 
    uint32_t test_3=1;
	int time_point_1=clock();
    auto result=my_solution.hammingWeight(test_3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路相投，就是考察了一下位运算。
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int r=0;
        for(int i=0; i<32; i++){
            if(n%2==1) r++;
            //cout<<n<<endl;
            n=n>>1;
            if(n==0) break;
        }
        return r;
    }
};
//优质解答：思路一样，不过代码更加简洁
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int res = 0;
        for (int i = 0; i < 32; ++i) {
            res += (n & 1);
            n = n >> 1;
        }
        return res;
    }
};
//还可以直接使用位运算，因为n&(n-1)可以进行相关的操作，有多少个1就可以执行多少次

class Solution {
public:
    int hammingWeight(uint32_t n) {
        while(n > 0)  
        {  
            count++;  
            n&=(n-1);  
        }  
    }
};

*/