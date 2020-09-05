/* 
data-time 2019-11-02 12:23:56


题目描述:

实现 int sqrt(int x) 函数。


计算并返回 x 的平方根，其中 x 是非负整数。

由于返回类型是整数，结果只保留整数的部分，小数部分将被舍去。

示例 1:

输入: 4
输出: 2
示例 2:

输入: 8
输出: 2
说明: 8 的平方根是 2.82842..., 
     由于返回类型是整数，小数部分将被舍去。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/53/math/116/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 使用官方提供的sqrt计算函数。
        时间复杂度O(n) 空间复杂度O(n)
        2. 二分法进行迭代，减少误差。进行二分法判断
        3. 使用牛顿法进行查找

        

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
    int mySqrt(int x) {
        if(x<=0) return 0;
        if(x<=3) return 1;
        if(x==4) return 2;
        long long left = 0, mid, right = x;
		long long res;
		while (left <= right) {
			mid = (left + right) / 2;
			res = mid * mid;
          
			if (res < x) left = mid + 1;
              else if (x == res) return mid;
			else right = mid-1;
		}
		return right;
    }
    int mySqrt2(int x){
       if(x<=0) return 0;
       if(x<=3) return 1;
       if(x==4) return 2;
       int left=0;
       int right=x/2+1;
       long mid=0;
       long long res=0;
       while(left< right){
            //注意这里一定要取右中位数，否则容易死循环
            mid=(left + right+1)/ 2;
            res=mid*mid;
            if(res==x) return mid;
            else if(res>x) right=mid-1;
            else left= mid;
       }
       return left;
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
    auto result=my_solution.mySqrt2(6);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：直接使用左右值，来进行判断
class Solution {//69. x 的平方根
public:
	int mySqrt(int x) {
      
		long long left = 0, mid, right = x;
		long long res;
		while (left <= right) {
			mid = (left + right) / 2;
			res = mid * mid;
			if (res < x) left = mid + 1;
            else if (x == res) return mid;
			else right = mid-1;
		}
		return right;
	}
};

//优质解答2：使用牛顿法进行迭代

class Solution {
public:
    int mySqrt(int x) {   
        long r = x;
        while(r * r > x)
        {
            r = (r + x / r) / 2;
        }
        return r;
    }
};
//优质解答3：解决了溢出的问题
class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1)    return x;
        int l = 0;
        int r = x;
        while(l <= r){
            int mid = l + (r - l) /2;
            int s = x / mid; //用来判断mid大于目标还是小于目标，或等于目标
            int ss = x / (mid + 1);
            if(x / s == s)  return s; //刚好是他的算术平方根
            if(s > mid && ss < mid + 1) return mid; //例如6 在2的平方以及 3的平方之间  答案为2
            if(s > mid) l = mid + 1; //调整边界
            if(s < mid) r = mid - 1;
        }
        return 0;
    }
};

作者：youlookdeliciousc
链接：https://leetcode-cn.com/problems/sqrtx/solution/cxiang-xi-ti-jie-er-fen-fa-zhi-xing-yong-shi-0ms-b/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

官方题解：

https://leetcode-cn.com/problems/powx-n/solution/powx-n-by-leetcode/

牛顿法
https://leetcode-cn.com/problems/sqrtx/solution/niu-dun-die-dai-fa-by-loafer/

中位数法
https://leetcode-cn.com/problems/sqrtx/solution/er-fen-cha-zhao-niu-dun-fa-python-dai-ma-by-liweiw/
https://leetcode-cn.com/problems/sqrtx/solution/x-de-ping-fang-gen-by-gpe3dbjds1/
*/