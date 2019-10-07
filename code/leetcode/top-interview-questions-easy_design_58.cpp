/* 
data-time 2019-10-07 19:03:56


题目描述:

Shuffle an Array

打乱一个没有重复元素的数组。

示例:

// 以数字集合 1, 2 和 3 初始化数组。
int[] nums = {1,2,3};
Solution solution = new Solution(nums);

// 打乱数组 [1,2,3] 并返回结果。任何 [1,2,3]的排列返回的概率应该相同。
solution.shuffle();

// 重设数组到它的初始状态[1,2,3]。
solution.reset();

// 随机返回数组[1,2,3]打乱后的结果。
solution.shuffle();


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/24/design/58/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：直接使用STL 的random_shuffle函数进行乱序排列
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
    Solution(vector<int>& nums) {
        nums_=nums;
        nums2_=nums;
    }
    
    /** Resets the array to its original configuration and return it. */
    vector<int> reset() {
        return nums_;
    }
    
    /** Returns a random shuffling of the array. */
    vector<int> shuffle() {
        vector<int > result(nums_);
        random_shuffle(result.begin(), result.end());
        return result;
    }
    //成员变量保持初始值
    vector<int> nums_;
    vector<int> nums2_;
};
int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    Solution my_solution(vector_temp);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.shuffle();
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：主要使用随机数，进行随机交换。random_shuffle本质上也是一样的算法

class Solution {
public:
    vector<int> orignal;
    Solution(vector<int>& nums) {
        orignal = nums;
    }
    
    // Resets the array to its original configuration and return it.
    vector<int> reset() {
        return orignal;
    }
    
    // Returns a random shuffling of the array.
    vector<int> shuffle() {
        vector<int> result(orignal);
        //这里产生随机数并且随机交换

        for (int i = 0;i < result.size();i++) {
            int pos = rand()%(result.size()-i);
            swap(result[i+pos], result[i]);
        }
        return result;
    }
};


//优质解答:借助辅助空间进行计算，只不过借助了两个数组空间，避免了对前面最大值的查找。
class Solution {
public:
    bool isMatch(string s, string p) {
        int sLen = s.size(), pLen = p.size();
        //创建辅助的存储数组
		bool memory[sLen+1][pLen+1] = {0};
		//将原始值设置为true
        memory[0][0] = true;
		//遍历两个子串
        for(int i = 0; i <= sLen; i++) {
			for(int j = 1; j <= pLen; j++) {
				//如果前一个值是'*'
                if(p[j-1] == '*') {//注意这里主要是为了检测
                    //对应存贮的值：之前是否成立|| ((当前值等于s的前一个值|| p[j-2]=='.') &&  memory[i-1][j]);
					memory[i][j] = memory[i][j-2] || (i > 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && memory[i-1][j]);
				}else {
                    //否则直接进行正常比较

					memory[i][j] = i > 0 && (s[i-1] == p[j-1] || p[j-1] == '.')
									&& memory[i-1][j-1];
				}
			}
		}
		return memory[sLen][pLen];
    }
};
因为题目拥有最优子结构 ，一个自然的想法是将中间结果保存起来。
我们通过用 dp(i,j)表示 text[i:]和 pattern[j:]是否能匹配。我们可以用更短的字符串匹配问题来表示原本的问题。

算法

我们用 [方法 1] 中同样的回溯方法，除此之外，因为函数 match(text[i:], pattern[j:]) 只会被调用一次，我们用dp(i, j)来应对剩余相同参数的函数调用，这帮助我们节省了字符串建立操作所需要的时间，也让我们可以将中间结果进行保存。

作者：LeetCode
链接：https://leetcode-cn.com/problems/regular-expression-matching/solution/zheng-ze-biao-da-shi-pi-pei-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/