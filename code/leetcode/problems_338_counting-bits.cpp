/* 
data-time 2020-03-22 15:55:06


题目描述:

338. 比特位计数

给定一个非负整数 num。对于 0 ≤ i ≤ num 范围中的每个数字 i ，计算其二进制数中的 1 的数目并将它们作为数组返回。

示例 1:

输入: 2
输出: [0,1,1]
示例 2:

输入: 5
输出: [0,1,1,2,1,2]
进阶:

给出时间复杂度为O(n*sizeof(integer))的解答非常容易。但你可以在线性时间O(n)内用一趟扫描做到吗？
要求算法的空间复杂度为O(n)。
你能进一步完善解法吗？要求在C++或任何其他语言中不使用任何内置函数（如 C++ 中的 __builtin_popcount）来执行此操作。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/counting-bits
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。



/*
主要思路:
1. 直接进行1的统计并循环进行计数
2. 查找规律，去掉最左边的1；对应的值+1；
时间复杂度O(n)
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
    int countOne(int n)
    {
        int res=0;
        while(n){
            n&=(n-1);
            ++res;
        }
        return res;
    }
    vector<int> countBits1(int num) {
        vector<int > res(num+1,0);
        for(int i=1;i<=num;++i){
            res[i]=countOne(i);
        }
        return res;
    }
    vector<int> countBits(int num) {
        vector<int > res(num+1,0);
        for(int i=1;i<=num;++i){
            res[i]=res[i&(i-1)]+1;
        }
        return res;
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
    auto result=my_solution.countBits(10);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：根据奇数和偶数的不同进行统计；加快执行速度
时间复杂度O(n);空间复杂度O(2*n);
class Solution {
public:
    vector<int> countBits(int num) {
       
        vector<int>dp(num+1,0);
        vector<int> res;
        dp[0]=0;
        for(int i=0;i<=num;i++)
        {
               if(i&1)//奇数
            dp[i]=dp[i-1]+1;
            else
             dp[i]=dp[i/2];
           res.push_back(dp[i]);

         
         
        }
     return res;
    }
};
//奇数：二进制表示中，奇数一定比前面那个偶数多一个 1，因为多的就是最低位的 1。
//偶数：二进制表示中，偶数中 1 的个数一定和除以 2 之后的那个数一样多。因为最低位是 0，除以 2 就是右移一位，也就是把那个 0 抹掉而已，所以 1 的个数是不变的。

//官方题解:
https://leetcode-cn.com/problems/counting-bits/solution/bi-te-wei-ji-shu-by-leetcode/
//优质解析:

https://leetcode-cn.com/problems/counting-bits/solution/hen-qing-xi-de-si-lu-by-duadua/
*/