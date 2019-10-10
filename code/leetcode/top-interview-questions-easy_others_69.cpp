/* 
data-time 2019-10-10 20:03:56


题目描述:

缺失数字

给定一个包含 0, 1, 2, ..., n 中 n 个数的序列，找出 0 .. n 中没有出现在序列中的那个数。

示例 1:

输入: [3,0,1]
输出: 2
示例 2:

输入: [9,6,4,2,3,5,7,0,1]
输出: 8
说明:
你的算法应具有线性时间复杂度(O(n))。你能否仅使用额外常数空间来实现(O(1))?

 

主要思路 1.暴力破解法：先对数组进行排序，然后找出值是否与其下标对应。是则继续，否则直接返回当前的index
            时间复杂度O(nlog(n)+n);空间复杂度O(0)
        2.使用一个额外的数组进行存储各位是0-9的值，

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
    int missingNumber(vector<int>& nums) {
        if(nums.empty()) return 0;
        std::sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();++i){
            if(i!=nums.at(i))
                return i;
        }
        //前面没有返回,缺少最后一个数
        return nums.size();
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={9,6,4,2,3,5,7,0,1};
    vector<int> vector_temp2={2,5,6};
	int time_point_1=clock();
    auto result=my_solution.missingNumber(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路一样，不过在遍历时使用了二分法进行遍历，来进行快速的查找。这里是因为

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int left=0;
        int right=nums.size()-1;
        while(left<=right)
        {
            int middle=(left+right)>>1;
            if(nums[middle]!=middle)
            {
                //这里是检查前面的一个是否正常
                if(middle==0||nums[middle-1]==middle-1)
                    return middle;
                right=middle;
            }
            else
                left=middle+1;
        }
        //查找到最后一个
        if(left==nums.size())
            return nums.size();
        return -1; 
    }
};
//优质解答2:使用额外的辅助数组，来记录所有值。最后遍历查找没有的
时间复杂度O(n),空间复杂度O(n+1)
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> count(nums.size() + 1, 0);
        int i = 0;
        for (i = 0; i < nums.size(); i++) {
            count[nums[i]] = 1;
        }
        for (i = 0; i < count.size(); i++) {
            if (count[i] == 0) break;
        }
        return i;
    }
}
优质解答3：更骚的操作，利用0-n的和是(1 +n) *n/ 2,来查找少加的数
时间复杂度O(n),空间复杂度O(1);
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int total = (1 + len) * len  / 2;
        int sum = 0;
        
        for (int i = 0; i < len; i++)
        {
            sum += nums[i];
        }
        
        return total - sum;
    }
};

优质解答4：还有更骚的操作，直接进行亦或运算，主要是利用 a ^ b ^ c = a ^ (b ^ c) = (a ^ b) ^ c;其中存在相同的数时res必定为0，唯一剩下的就是不存在的数
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,res=nums.size();
        for(i=0;i<nums.size();i++)
        {
            res=res^nums[i];
            res=res^i;
        }
        return res;
    }
};

*/