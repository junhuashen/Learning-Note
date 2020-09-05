/* 
data-time 2019-10-09 13:23:56


题目描述:

汉明距离

两个整数之间的汉明距离指的是这两个数字对应二进制位不同的位置的数目。

给出两个整数 x 和 y，计算它们之间的汉明距离。

注意：
0 ≤ x, y < 231.

示例:

输入: x = 1, y = 4

输出: 2

解释:
1   (0 0 0 1)
4   (0 1 0 0)
       ↑   ↑

上面的箭头指出了对应二进制位不同的位置。
 

主要思路：2. 循环获取最后一位，进行比较，直到两边都为0；
        时间复杂度O(32),空间复杂度O(0)
        1.直接进行亦或运算，统计运算结果中1的个数。
        时间复杂度O(n),空间复杂度O(0)

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
    int hammingDistance1(int x, int y) {
        int i=0;
        int result=0;
        while(i<32){
            if((x&(0x1))!=(y&(0x1))){
                ++result;
            }
            x=x>>1;
            y=y>>1;
            ++i;
            if(x==0&&y==0) break;
        }
        return result;
    }
    int hammingDistance(int x,int y) {
        int n=x^y;
        int result=0;
        while(n>0){
            n&=(n-1);
            ++result;
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
    auto result=my_solution.hammingDistance(1,14);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路相投，就是考察了一下位运算。
https://blog.csdn.net/u011236602/article/details/79888476

*/