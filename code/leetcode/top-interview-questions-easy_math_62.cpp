/* 
data-time 2019-10-08 15:23:56


题目描述:

3的幂

给定一个整数，写一个函数来判断它是否是 3 的幂次方。

示例 1:

输入: 27
输出: true
示例 2:

输入: 0
输出: false
示例 3:

输入: 9
输出: true
示例 4:

输入: 45
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/25/math/62/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：使用额外的数组存储，所有3的指数，将检测数进行求取绝对值，当能搜索到它时就成立，否则不成立。
        时间复杂度O(nlog(n)+k) 空间复杂度O(n)
        

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
    Solution(){
        prepareData();
    }
    void prepareData(){
        int i=0;
        unsigned long temp=0;
        while(temp<=INT64_MAX){
            temp=pow(3,i);
            three_pow.insert(temp);
            ++i;
        }
    } 
    bool isPowerOfThree(int n) {

       if(n<0){return false;}
       if(three_pow.find(n)!=three_pow.end()){
           return true;
       }else{
           return false;
       }
    }
    std::set<unsigned long> three_pow;
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    Solution my_solution;
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.isPowerOfThree(-3);
    for(auto temp:my_solution.three_pow)
        std::cout<<temp<<std::endl;
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用辅助数组存储3的指数项，并且先利用是否为3的倍数进行排除。再循环检测是否为3的指数的倍数。
          时间复杂度O(log3(n)-1),空间复杂度O(1)
lass Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1||n==3) return true;
        if(n%3!=0||n<3) return false;
      int nums[]={3,9,81,6561};
      for(int i=3;i>=0&&n>=3;){
          if(n<nums[i])
          i--;
          else if(n%nums[i]==0) n/=nums[i];
          else return false;
      }
      if(n==1) return true;
      return false;
    }
};
//优质解答：使用循环进行检测
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==1)
            return true;
        int next=1;
        while(n>next){
            if(next>INT_MAX/3){
                return false;
            }
            else{
                next*=3;
            }
        }
        if(n==next)
            return true;
        else
            return false;
    }
};
// 算法思路：
// 判断是否是3的幂，直接求对数：log3(n).
// 若结果为整数，true，若不是整数.false.
// %1,查看余数是否为0，用来判断是否为整数
// 采用换底公式
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n == 0) return false;
        double a = log10(n)/log10(3);
        double f = a- (int)a;
        return f == 0 ? true:false;
    }
};
*/