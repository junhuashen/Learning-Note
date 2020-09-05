/* 
data-time 2019-11-03 14:01:56


题目描述:

求众数
给定一个大小为 n 的数组，找到其中的众数。众数是指在数组中出现次数大于 ⌊ n/2 ⌋ 的元素。

你可以假设数组是非空的，并且给定的数组总是存在众数。

示例 1:

输入: [3,2,3]
输出: 3
示例 2:

输入: [2,2,1,1,1,2,2]
输出: 2


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/54/others/121/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1.没什么好说的，直接使用map进行数字和出现次数的统计；
        时间复杂度O(n);空间复杂度O(n);
        2. 先排序，然后直接返回n/2 index的数
        时间复杂度O(n*log(n));空间复杂度O(0)

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
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1) return nums[0]; 
        int length=nums.size();
        std::map<int,int> temp_map;
        for(int key:nums){
            if(temp_map.find(key)== temp_map.end()){
                temp_map[key]=1;
            }else{
                ++temp_map[key];
            }
            if(temp_map[key]>length/2) return key;
        }
        return nums[0];
    }
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,2,1,1,1,2,2};
    vector<int> vector_temp2={2,5,6};
    vector<string> vector_string={"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    Solution my_solution;
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.majorityElement(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：先排序，然后直接返回，index为其一般的数。
时间复杂度O(log(n));空间复杂度O(0)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return(nums[nums.size()/2]);
    }
};

//优质解答2：使用conut进行计数，找出，出现次数超过一般的数

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int size = nums.size();
        int count = 0;
        int value;
        for (int i = 0; i < nums.size(); ++i) {
            if (count == 0) {
                value = nums[i];
                count = 1;
            } else if (nums[i] == value){
                ++count;
            } else {
                --count;
            }
        }
        return value;
    }
};
//优质解答3：
class Solution {
public:
    // unordered_map
    int majorityElement(vector<int>& nums) {
        int len = nums.size() / 2;
        
        unordered_map<int, int> numsmap;
        for (int num : nums) {
            numsmap[num]++;            
            if (numsmap[num] > len)
                return num;
        }
        return -1;
    }
    
    // 先排序，再直接找
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        return nums[nums.size()/2];
    }
    // 摩尔投票法
    int majorityElement(vector<int>& nums) {
        int ret = -1;
        int count = 0;
        
        for(int num : nums) {
            if(count == 0) {
                ret = num;
            }
            (ret == num) ? ++count : --count;
        }
        return ret;      
    }
    
};
//优质解答4：使用位运算，因为众数数组中出现次数大于n/2；则众数对应的二进制每个为1的位数出现的次数一定大于n/2;
//时间复杂度O(n*32) 空间复杂度O(0)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int result = 0, k = nums.length >> 1;//k除以2
        //循环遍历所有位数
        for (int j = 0; j < 32; j++) {
            //输入统计，各个位上的统计
            int count = 0;
            //遍历数组
            for (int num : nums) {
                //统计j位中1出现的次数
                count += num >> j & 1;
                //次数大于k直接跳出循环
                if (count > k) {
                    result += 1 << j;
                    break;
                }
            }
        }
        return result;
    }
};

作者：mxNHujryVX
链接：https://leetcode-cn.com/problems/majority-element/solution/java-wei-yun-suan-by-mxnhujryvx/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

官方题解：
https://leetcode-cn.com/problems/majority-element/solution/qiu-zhong-shu-by-leetcode-2/
优质解析：
https://leetcode-cn.com/problems/majority-element/solution/du-le-le-bu-ru-zhong-le-le-ru-he-zhuang-bi-de-qiu-/
*/