/* 
data-time 2020-02-15 16:23:56


题目描述:

477. 汉明距离总和

两个整数的 汉明距离 指的是这两个数字的二进制数对应位不同的数量。

计算一个数组中，任意两个数之间汉明距离的总和。

示例:

输入: 4, 14, 2

输出: 6

解释: 在二进制表示中，4表示为0100，14表示为1110，2表示为0010。（这样表示是为了体现后四位之间关系）
所以答案为：
HammingDistance(4, 14) + HammingDistance(4, 2) + HammingDistance(14, 2) = 2 + 2 + 2 = 6.

注意:

    数组中元素的范围为从 0到 10^9。
    数组的长度不超过 10^4。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/total-hamming-distance
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 

主要思路：1. 先计算韩明距离，然后进行相加
        时间复杂度O(n!) 空间复杂度O(0);---超时
        1.每一位上的不同的0和1的组合就是一次距离，因此每一位上就是1的个数和0的个数的总和
        时间复杂度O(32*n);
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
    int totalHammingDistance(vector<int>& nums) {
        int length=8*sizeof(int)-1;
        int result=0;
        for(int i=0;i<length;++i){
            int cnt=0;
            for(auto &n:nums){
                cnt+=(n&1);
                n>>=1;
            }
            result+=cnt*(nums.size()-cnt);
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
    auto result=my_solution.totalHammingDistance(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路相投，就是考察了一下位运算。
https://blog.csdn.net/u011236602/article/details/79888476

*/