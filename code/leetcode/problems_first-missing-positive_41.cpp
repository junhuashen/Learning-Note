/* 
data-time 2019-12-01 12:05:56


题目描述:

41. 缺失的第一个正数


给定一个未排序的整数数组，找出其中没有出现的最小的正整数。

示例 1:

输入: [1,2,0]
输出: 3
示例 2:

输入: [3,4,-1,1]
输出: 2
示例 3:

输入: [7,8,9,11,12]
输出: 1
说明:

你的算法的时间复杂度应为O(n)，并且只能使用常数级别的空间。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/first-missing-positive
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 这里的主要问题是顺序查找，可以先对数组进行排序，然后跳过小于1的数，
            比较每个数是否和其逻辑index(index-i(i表示小于1的数))相同，不同时则跳出并返回该索引。
            否则返回最后一个索引
            时间复杂度O(n*log(n)+n)；空间复杂度O(0);不符合时间复杂度要求
        2. 设置一个与输入数组等大的数组，数组，将其值i对应的arr[nums[i]]设置为true;
            然后遍历arr，检查第一个为false的值k,返回k+1;
            时间复杂度O(2*n);空间复杂度O(n)
        3. 使用递归的方法，将查看前面i-1个是否符合要求，因为函数占不算空间
            时间复杂度O(2*n);空间复杂度O(0);
        4. 在二的基础上进行改进，使用一个大小为2^n的数来进行代替，数的每一位表示其是否含有i这个数，
        5. ，首先遍历一遍；将负数和0全部转换为1.并且检查是否有1的存在；没有就直接跳出
            然后在元数组的基础上，将对应的index的数变为负数，最终查找是否含有非负数。为非负数的index这个index肯定不在。
            时间复杂度O(3*n);空间复杂度O(0);
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
#include <string.h>
using namespace std;
#define INT_MAX INT16_MAX
#define INT_MIN INT16_MIN
//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
bool Comp(const std::pair<int ,int>& a,const  std::pair<int ,int>& b){
    return a.second>=b.second;
}
//main function
class Solution {
public:
    int firstMissingPositive1(vector<int>& nums) {
        int result=-1;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int start=0;
        while(start<nums.size()&&nums[start]<=0) ++start;
        for(int i=start;i<nums.size();++i){
            if(nums[i]!=i-start+1){
                result=i-start+1;
                break;
            }
        }
        if(result==-1) result=nums.size()-start+1;
        return result;
    }
    int firstMissingPositive(vector<int>& nums) {
        int result=-1;
        //首先遍历将负数和0，全部转换为1，并且查找是否含有1
        int contains=0;
        int last_length=nums.size();
        for(int i=0;i<nums.size();++i){
            if(nums[i]<=0){
                nums[i]=1;
            }else if(nums[i]==1){
                ++contains;
            }
        }
        if(contains==0){
            return 1;
        }
        //继续遍历将index上的数置为负数
        for(int j=0;j<nums.size();++j){
            //返回数值所指代的位置k;并将第k个数置为负数
            unsigned int k=labs(nums[j]);
            if(k<=nums.size()){
                //将值转换为负数
                if(nums[k-1]>0){
                    nums[k-1]*=-1;
                }else{
                    --last_length;
                }
            }
        }
        //遍历检查是否有大于0的数；
        for(int k=0;k<last_length;++k){
            if(nums[k]>0){
                result=k+1;
                break;
            }
        }
        //完全没有；返回数组长度
        if(result==-1) result=last_length+1;
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={3,4,-1,1};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
    vector<vector<char>> char_vector={
            {'5','3','.','.','7','.','.','.','.'},
            {'6','.','.','1','9','5','.','.','.'},
            {'.','9','8','.','.','.','.','6','.'},
            {'8','.','.','.','6','.','.','.','3'},
            {'4','.','.','8','.','3','.','.','1'},
            {'7','.','.','.','2','.','.','.','6'},
            {'.','6','.','.','.','.','2','8','.'},
            {'.','.','.','4','1','9','.','.','5'},
            {'.','.','.','.','8','.','.','7','9'}
        };
	int time_point_1=clock();
    //auto result=
    my_solution.firstMissingPositive(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：直接使用map来进行存储，然后遍历map
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int N = nums.size();

        unordered_map<int, int> hashmap;

        for (const auto &elem : nums) {
            if (elem >= 1 && elem <= N) {
                hashmap[elem]++;
            }
        }

        int res = 1;
        while (res <= N) {
            if (hashmap[res] == 0)  break;
            ++res;
        }

        return res;
    }
};


//官方题解
https://leetcode-cn.com/problems/first-missing-positive/solution/que-shi-de-di-yi-ge-zheng-shu-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/first-missing-positive/solution/tong-pai-xu-python-dai-ma-by-liweiwei1419/
https://leetcode-cn.com/problems/first-missing-positive/solution/41-by-ikaruga/

*/