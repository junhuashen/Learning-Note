/* 
data-time 2019-10-08 10:23:56


题目描述:

计数质数

统计所有小于非负整数 n 的质数的数量。

示例:

输入: 10
输出: 4
解释: 小于 10 的质数一共有 4 个, 它们是 2, 3, 5, 7 。


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/25/math/61/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 使用暴力破解法，遍历每一个直接判断是否是质数，这个问题的关键点在于判断质数，因此使用质数筛选定理： n不能够被不大于根号n的任何质数整除，则n是一个质数
            时间复杂度O(n^2)
        

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
    bool isPrimes(int n){
        if(n==2){return true;}
        if(n%2==0){return false;}
        int temp=(int)sqrt(n*1.0);
        for(int i=2;i<=temp;++i){
            if(n%i==0){
                return false;
            }
        }
        return true;
    }
    int countPrimes(int n) {
        int result=0;
        for(int i=2;i<n;++i){
            if(isPrimes(i)){
                ++result;
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
    auto result=my_solution.countPrimes(10);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用辅助数组存储，i是否是质数，并且将i的倍数全部设置为非质数。
    时间复杂度O(n),空间复杂度O(n)
class Solution
{
public:
    int countPrimes(int n)
    {
        if (n < 3)
            return 0;
        int a[n];
        int ans = 0;
        memset(a, 1, sizeof(a));
        //对每一个数进行判断
        for (int i = 2; i < n; i++)
        {
            //如果！=0
            if (a[i])
            {
                ans += 1;
                //对于它的倍数全部设置为0；
                for (int j = i + i; j < n; j += i)
                    a[j] = 0;
            }
        }
        return ans;
    }
};
//投机取巧，有辱斯文，方法一样

class Solution {
public:
    int countPrimes(int n) {
      
        if (n == 10000)
            return 1229;
        if (n == 499979)
            return 41537;
        if (n == 999983)
            return 78497;
        if (n == 1500000)
            return 114155;
       if(n<3)
       return 0;
        vector<bool> sign(n,true);
       int count=0;
       for(int i=2;i<n;i++){
           if(sign[i]) {
             count++;
               for(int j=i*2;j<n;j+=i){
                   sign[j]=false;
               }
           }
           else continue;
       }
       return count;
    }
};
*/