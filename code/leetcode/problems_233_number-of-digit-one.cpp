/* 
data-time 2020-02-16 16:23:56


题目描述:

233. 数字 1 的个数

给定一个整数 n，计算所有小于等于 n 的非负整数中数字 1 出现的个数。

示例:

输入: 13
输出: 6 
解释: 数字 1 出现在以下数字中: 1, 10, 11, 12, 13 。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/number-of-digit-one
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 

主要思路：1. 对于个位而言，1的个数取决于10位的数量。每一位上的1的数目，取决于前一位。
        因此使用循环递归的方式，分别计算各个位上的1的数量。
        例：210
        当其为0时，当时位上的数目应该由后面决定；因此第一位为0；s=0;
        1 时，为它的位数，和后面的数决定。因此值为
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
    int countDigitOne(int n) {
        int num=n,s=0;
        long i=1;

        while(num)              //分别计算个、十、百......千位上1出现的次数，再求和。
        {
            if(num%10==0)
                s=s+(num/10)*i;
            //首位是1，需要另外加上余数值，注意这里的n的值
            if(num%10==1) 
                s=s+(num/10)*i+(n%i)+1;
            //首位大于1，正常进行添加
            if(num%10>1) 
                s=s+ceil(num/10.0)*i;
            
            num=num/10;
            i=i*10;
        }    
        return s;
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
    auto result=my_solution.countDigitOne(10);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
优质解答：分别取不同位上的值进行计算;两位两位进行计算
class Solution {
public:
    int countDigitOne(int n)
{
    int countr = 0;
    for (long long i = 1; i <= n; i *= 10) {
        long long divider = i * 10;
        //当前的值乘上对应的后面的值
        countr += (n / divider) * i;
        //添加上最大的值
        count+=min(max(n % divider - i + 1, 0LL), i);
    }
    return countr;
}

};

//优质解答2：
class Solution {
public:
    int NumberOf1Between1AndN_Solution(int n)
    {
        int ones = 0;
        for (long long m = 1; m <= n; m *= 10)
        {
            //这里完美的消除了奇异，
            ones += (n/m + 8) / 10 * m + (n/m % 10 == 1) * (n%m + 1);
        }
            
        return ones;

    }
};

官方题解：
https://leetcode-cn.com/problems/number-of-digit-one/solution/shu-zi-1-de-ge-shu-by-leetcode/

优质解析：
https://leetcode-cn.com/problems/number-of-digit-one/solution/gui-na-fa-jian-dan-si-lu-by-wanyuxuan/
*/