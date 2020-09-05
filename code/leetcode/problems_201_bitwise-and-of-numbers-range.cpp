/* 
data-time 2020-03-08 14:15:56


题目描述:

201. 数字范围按位与

给定范围 [m, n]，其中 0 <= m <= n <= 2147483647，返回此范围内所有数字的按位与（包含 m, n 两端点）。

示例 1: 

输入: [5,7]
输出: 4
示例 2:

输入: [0,1]
输出: 0

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/bitwise-and-of-numbers-range
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
/*
主要思路:其实就是找两个的最大公共前缀；因此左移直到两者相同就可以了

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
#include <memory>

using namespace std;
#define INT_MAX INT16_MAX
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
    int rangeBitwiseAnd(int m, int n) {
       int offset=0;
       while(m!=n){
           m>>=1;
           n>>=1;
           ++offset;
       }

        return n<<offset;
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,0,-1,0,-2,2};
    vector<int> vector_temp2={-3,-2,-1,0,0,1,2,3};
    vector<vector<char> > temp={
        {'1','0' ,'1','0','0'},
        {'1','0', '1', '1' ,'1'},
        {'1','1' ,'1' ,'1' ,'1'},
        {'1','0' ,'0', '1','0'}
    };
	int time_point_1=clock();
    my_solution.rangeBitwiseAnd(3,7);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*




//官方题解：

//优质解析：
https://leetcode-cn.com/problems/bitwise-and-of-numbers-range/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by--41/
https://leetcode-cn.com/problems/bitwise-and-of-numbers-range/solution/shu-zi-fan-wei-an-wei-yu-qu-qi-gao-wei-wu-bian-hua/
*/