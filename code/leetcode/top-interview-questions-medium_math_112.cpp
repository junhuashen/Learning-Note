/* 
data-time 2019-11-1 13:23:56


题目描述:

快乐数

编写一个算法来判断一个数是不是“快乐数”。

一个“快乐数”定义为：对于一个正整数，每一次将该数替换为它每个位置上的数字的平方和，然后重复这个过程直到这个数变为 1，也可能是无限循环但始终变不到 1。如果可以变为 1，那么这个数就是快乐数。

示例: 

输入: 19
输出: true
解释: 
1^2 + 9^2 = 82
8^2 + 2^2 = 68
6^2 + 8^2 = 100
1^2 + 0^2 + 0^2 = 1

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/53/math/112/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 使用递归调用，每次先求各个位数上的值，然后进行平方计算求和。当其能被10整除时才可以。因为存在无线递归的情况，
        又因为，所有不快乐数都会陷入4,16,37,58,89,145,42,20,4
        的循环中，因此每次计算结束，都要检查是否是这几个数中的一个，是直接返回false,否则继续迭代。总会找到的。
        时间复杂度O(n*k) 空间复杂度O(8)
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
    bool isHappy(int n) {
        if(n==0) return false;
        if(n==1) return true;
        auto find_result=find(no_fun_vector.begin(),no_fun_vector.end(),n);
        if(find_result!=no_fun_vector.end()) return false;
        long new_n=0;
        //查看当前的各位平方和
        while(n>0){
            int index=n%10;
            n=n/10;
            new_n+=index*index;
        }
        return isHappy(new_n);
    }
    vector<int> no_fun_vector={2,4,16,20,37,42,58,89,145};
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    Solution my_solution;
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.isHappy(0);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：当n为或者7时直接返回，n<10时返回false
class Solution {
public:
   public:
	bool isHappy(int n) {
		if (n == 1 || n == 7) {
			return true;
		}
		if (n < 10) {
			return false;
		}

		int sum = 0;
		while (n >= 1) {
			int d = n % 10;
			sum += d * d;
			n /= 10;
		}

		return isHappy(sum);
	}
};

//优质解答2：使用一个unorder_map来查看是否会产生循环，如果产生循环，则直接返回false

class Solution {
public:
   
    int muxadd(int n){
        
        int val = 0;
        
        while(n > 0){
            int t = n%10;
            val += t*t;
            n = n/10;            
        }
        
        return val;
    }
    
    bool isHappy(int n) {

        unordered_map <int,bool> history;
        n = muxadd(n);
        if(n != 1)
            history.insert(pair<int, bool>(n,true));
        else
            return true;
        //循环查找数组，看是否会产生循环
        do{
            //获取新值
            n = muxadd(n);
            if(n == 1)
                break;
            //查看是否能找到
            if (history.find(n) != history.end())
                break;
            //找不到添加到历史中
            history.insert(pair<int,bool>(n,true));
        }while(1);
    
        return n == 1; 
    }
};

//优质解答3：使用“快慢指针”思想找出循环：“快指针”每次走两步，“慢指针”每次走一步，当二者相等时，即为一个循环周期。此时，判断是不是因为1引起的循环，是的话就是快乐数，否则不是快乐数。
注意：此题不建议用集合记录每次的计算结果来判断是否进入循环，因为这个集合可能大到无法存储；另外，也不建议使用递归，同理，如果递归层次较深，会直接导致调用栈崩溃。不要因为这个题目给出的整数是int型而投机取巧。
class Solution {
public:
    //获取其计算值
    int bitSquareSum(int n) {
        int sum = 0;
        while(n > 0)
        {
            int bit = n % 10;
            sum += bit * bit;
            n = n / 10;
        }
        return sum;
    }
    
    bool isHappy(int n) {
        int slow = n, fast = n;
        do{
            //获取当前一步的值，
            slow = bitSquareSum(slow);
            //获取两步的值
            fast = bitSquareSum(fast);
            fast = bitSquareSum(fast);
        }while(slow != fast);//相等时停止
        
        return slow == 1;
    }
};

作者：rachy
链接：https://leetcode-cn.com/problems/happy-number/solution/shi-yong-kuai-man-zhi-zhen-si-xiang-zhao-chu-xun-h/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

官方题解：
无：
*/