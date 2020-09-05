/* 
data-time 2019-10-20 19:18:56


题目描述:

全排列

给定一个没有重复数字的序列，返回其所有可能的全排列。

示例:

输入: [1,2,3]
输出:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/49/backtracking/93/


主要思路：1. 使用递归的方法，来进行求解；假设获得之前n-1个数的所有全排列，将第n个数添加到原有队列中的一个vector再不停的交换位置获取新的序列。插入到结果中。
        时间复杂度O(CkN);空间复杂度O(n!)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stack>
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
    vector<vector<int>> checkPermute(vector<int> &nums, int start){
        vector<vector<int>> result;
        if(nums.size()==0) return result;
        if(start==nums.size()-1){
            vector<int> temp={nums[start]};
            result.push_back(temp);
            return result;
        //非单个数组
        }else{
            //获取下面的所有值的全排列
            auto right_result=checkPermute(nums,start+1);
            for(auto temp: right_result){
                temp.push_back(nums[start]);
                int temp_length=temp.size();
                //遍历每一个进行交换
                for(int i=0;i<temp_length;++i){
                    vector<int > temp_result=temp;
                    //将最后一位与其它进行交换
                    swap(temp_result[i],temp_result[temp_length-1]);
                    result.push_back(temp_result);
                }
            }
        }
        return result;
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()==0) return result; 
        result=checkPermute(nums, 0);
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    int test_int=1; 
    vector<int > vector1={1,2,3};
	int time_point_1=clock();
    auto result=my_solution.permute(vector1);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/generate-parentheses/solution/gua-hao-sheng-cheng-by-leetcode/


//优质解答1：思路基本相同，使用了引用传递，使用了flag来记录是否应当添加当前数组。

时间复杂度O(n^2);空间复杂度O(n)

class Solution {
public:
    void backTrack(vector<vector<int>> &res, vector<int> &cur,vector<int> &flag, vector<int>& nums) {
		//如果当前大小与nums原始大小相同则直接添加进去，并且返回
        if (cur.size() == nums.size()) {
			res.push_back(cur);
			return;
		}
        //循环遍历nums
		for (int i = 0; i < nums.size(); i++) {
			//如果该数已经被遍历过，则直接跳过
            if (flag[i])continue;
            //否则开始遍历，设置标志位为1
			flag[i] = 1;
			//将其添加到当前队列
            cur.push_back(nums[i]);
            //递归进行调用
			backTrack(res, cur, flag, nums);
			//重设flag
            flag[i] = 0;
			//弹出已经加入的值
            cur.pop_back();
		}
	}
	vector<vector<int>> permute(vector<int>& nums) {
		//结果
        vector<vector<int>> res;
        //设置标志数，初始值全部为0
		vector<int> flag(nums.size(), 0);
		//记录当前的int中的数量
        vector<int> cur;

		backTrack(res, cur, flag, nums);
		return res;
	}
};
//优质解答2：思路相同，使用了全局变量作为优化
时间复杂度O(n^2);空间复杂度O(n);
class Solution {
   private:
        vector<vector<int>> res;
        vector<int> tmp;

    public:
       void swap(vector<int>& nums_copy, int i, int j)
       {
           int temp = nums_copy[i];
           nums_copy[i] = nums_copy[j];
           nums_copy[j] = temp;
       }

        void backtract(vector<int>& nums_copy, int length)
        {
            if (0 == length)
            {
                res.push_back(tmp);
            }
            
            for (int i = 0; i < length; i++)
           {
               //将当前数添加到tem中
                tmp.push_back(nums_copy[i]);
                //交换其中的i和最后一位进行交换
                swap(nums_copy, i, length - 1);
                //查找交换后的结果
                backtract(nums_copy, length - 1);
                //将添加进的数字，取出
                tmp.pop_back();
                //将数字还原
                swap(nums_copy, length - 1, i);
                
           }
        }

    vector<vector<int>> permute(vector<int>& nums)
   {
       vector<int> nums_copy;
       
       for(int n : nums)
           nums_copy.push_back(n);
           
       backtract(nums_copy, nums_copy.size());
       
       return res;
    }

};
//优质解答3：
class Solution {
public:
    //[1,2,3]
    //cur 当前的 rs 结果
    //第一个选择1 第二个可选择2，3.如果选择了2 ，第三个只能选择3
    //used数组表示当前选择了谁 对应下标
    //思路 3个数  每个数都该遍历 1 2 3 ，用used过滤
    void permute(vector<int> nums,vector<int> &cur,vector<vector<int>>&rs,vector<bool> &used,int index){
        if(index == nums.size()){
            rs.push_back(cur);
            return;
        }
        for (int i = 0; i < nums.size(); i++) {
            if(!used[i]){
                //第i个没有用过
                used[i] = true;
                cur.push_back(nums[i]);
                //递归下一个数字  比如第一个选择1   递归到下一层 找第二个可选择的
                permute(nums, cur, rs, used, index+1);
                //恢复
                used[i] = false;
                cur.pop_back();
            }
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        int size = (int)nums.size();
        if(size == 0) return {{}};
        vector<vector<int>>rs;
        vector<int>cur;
        vector<bool>used(size,false);
        permute(nums, cur,rs,used,0);
        return rs;
    }
};

//优质解答4：

class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res(0, vector<int>(nums.size()));
        vector<int> seq(nums);
        xpermute(&res, seq, 0, nums.size());
        return res;
    }
    void xpermute(vector<vector<int>> *res, vector<int> seq, int k, int n){
        if (k==n){//长度为n时，可以退出了
            res->push_back(seq);
            return;
        }
        for (int i=k+1;i<n;i++){
            vector<int> mid(seq);
            //将第k个位置的数和后面位置的交换，表示新的一个K+1长度的序列
            int tmp = mid[k];
            mid[k] = mid[i];
            mid[i] = tmp;
            xpermute(res, mid, k+1, n);
        }
        xpermute(res, seq, k+1, n);
    }
};

//官方题解：https://leetcode-cn.com/problems/
https://leetcode-cn.com/problems/permutations/solution/quan-pai-lie-by-leetcode/
*/
