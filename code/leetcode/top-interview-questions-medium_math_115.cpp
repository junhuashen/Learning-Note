/* 
data-time 2019-10-31 15:23:56


题目描述:

Pow(x, n)

实现 pow(x, n) ，即计算 x 的 n 次幂函数。

示例 1:

输入: 2.00000, 10
输出: 1024.00000
示例 2:

输入: 2.10000, 3
输出: 9.26100
示例 3:

输入: 2.00000, -2
输出: 0.25000
解释: 2-2 = 1/22 = 1/4 = 0.25
说明:

-100.0 < x < 100.0
n 是 32 位有符号整数，其数值范围是 [−2^31, 2^31 − 1] 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/53/math/115/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 尽量减少计算，使用vector长度为n的vector进行存储；n=x*n(n-1);为了快速计算，使用递归的方式，当其为偶数时返回进行递归返回
        不能用vector，会超过操作系统的堆栈限制，内存分配失败
        时间复杂度O(n) 空间复杂度O(n)
        2. 直接使用标准函数库函数std::pow(x, n)进行计算。
        

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
    double myPow1(double x, int n) {
        return std::pow(x,n);
    }
    //递归快速计算n值
    double fastPow(double x ,long n){
        if(n==1) return x;
        double temp_result=fastPow(x,n/2);
        if(temp_result==0.00000) return 0;
        if(n%2==0){
            return temp_result*temp_result;
        }else{
            return temp_result*temp_result*x;            
        }
    }
    double myPow(double x,int n){
        if(n==0) return 1;
        if(x==0.0) return 0;
        if(x==1) return 1;
        if(n==1) return x;
        long size;
        size=labs(n);
        if(n<0) x=1.0/x;
        return fastPow(x,size);
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
    auto result=my_solution.myPow(2,-2147483648);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路相同
class Solution {
public:
    double fastPow(double x, long long n) {
        if (n == 0) {
            return 1.0;
        }
        double half = fastPow(x, n / 2);
        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }
    double myPow(double x, int n) {
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }
        return fastPow(x, N);
    }
};
//优质解答2：二分递归思想

class Solution {
public:
    double myPow(double x, int n) {
        if (n == 0) { return 1; }
        if (n == 1) { return x; }
        if (n == -1) { return 1 / x; }
        double half = myPow(x, n / 2);
        double rest = myPow(x, n % 2);
        double total = rest * half * half;
        return total;
    }
};

作者：frank588
链接：https://leetcode-cn.com/problems/powx-n/solution/qing-xi-jian-dan-de-dan-han-shu-di-gui-wu-lei-xing/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
优质解答3：于是我们将这一想法再一次优化，我们只要能找到 2的k1次方+2的k2次方+...=n就好了，这样的复杂度还是O(log2n)这一想法可以通过数的二进制位运算轻易解决，比如9的二进制是1001，也就是从右往左数第i位，我们的答案就乘上a的2的i次方

class Solution {
public:
    
    double qpow(double a, long long b){
        double res = 1;
        while(b){
            if(b&1) res = res*a;
            b >>= 1;
            a *= a;
        }
        return res;
    }
    double myPow(double x, long long n) {
        if(n == 0) return 1;
        if(n > 0) return qpow(x,n);
        if(n < 0) return 1/qpow(x,-n);
        return 1.0;
    }
};

作者：0x404
链接：https://leetcode-cn.com/problems/powx-n/solution/ji-bai-cbai-fen-bai-yong-hu-by-0x404/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

官方题解：

https://leetcode-cn.com/problems/powx-n/solution/powx-n-by-leetcode/

简单叙述：
https://leetcode-cn.com/problems/powx-n/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by--15/
*/