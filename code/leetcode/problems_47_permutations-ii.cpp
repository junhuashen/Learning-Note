/* 
data-time 2019-11-13 18:49:56


47. 全排列 II

全排列

给定一个可包含重复数字的序列，返回所有不重复的全排列。

示例:

输入: [1,1,2]
输出:
[
  [1,1,2],
  [1,2,1],
  [2,1,1]
]


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/permutations-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 使用递归的方法，来进行求解；假设获得之前n-1个数的所有全排列，将第n个数添加到原有队列中的一个vector再不停的交换位置获取新的序列。插入到结果中。
        但是要注意，在插入交换的过程中，需要检查是否含有相同值，值相同直接跳过。
        时间复杂度O(n*log(n)CkN);空间复杂度O(n!);
        2. 因为不允许重复值，因此先排序，然后在递归中，当遇到相同值时直接跳过保证没有重复值。
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
            //return result;
        //非单个数组
        }else{
            //获取下面的所有值的全排列
            auto right_result=checkPermute(nums,start+1);
            for(auto temp: right_result){
                temp.push_back(nums[start]);
                int temp_length=temp.size();
                result.push_back(temp);
                //遍历每一个进行交换，
                for(int i=0;i<temp_length-1;++i){
                    vector<int > temp_result=temp;
                    //注意这里的判断条件
                    if(temp_result[i]!=temp_result[temp_length-1]){
                        //将最后一位与其它进行交换
                        swap(temp_result[i],temp_result[temp_length-1]);
                        result.push_back(temp_result);
                    }
                }
            }
           
        }
        //删除同类项
        sort(result.begin(),result.end());
        result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        if(nums.size()==0) return result; 
        result=checkPermute(nums, 0);
        return result;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    int test_int=1; 
    vector<int > vector1={1,1,2};
	int time_point_1=clock();
    auto result=my_solution.permuteUnique(vector1);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/generate-parentheses/solution/gua-hao-sheng-cheng-by-leetcode/


//优质解答1：先排序，然后根据顺序性来查找是否需要交换的值，直到所有顺序已经被完全成为逆序。可以想像成为冒泡排序的逆过程
时间复杂度O(n*log(n)+n^2);空间复杂度O(0);

时间复杂度O(n^2);空间复杂度O(n)

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        if(nums.size() == 0) return {};
        //先进行排序
        sort(nums.begin(),nums.end());
        //定义结果
        vector<vector<int>> res;
        //将当前nums添加到队列中
        res.push_back(nums);
        //递归进行查找
        helper(nums,res);
        return res;
    }
    void helper(vector<int>& nums,vector<vector<int>>& res){
        int left = nums.size();
        //是否需要转置矩阵，即查看矩阵是否是递增的。
        bool isReverse = true;
        //检查矩阵是否递减(没有小于的数)，并将left设置为拐点，为前后递增，后面递减
        for(int i=nums.size()-1;i>0;i--){
            //存在
            if(nums[i]>nums[i-1]){
                left = i-1;
                isReverse = false;
                break;
            }
        }
        //不存在拐点(一直递减)，直接返回；
        if(isReverse) return;
        //将前面的n个数，直接进行交换。相当于快速排序,将违反规则的left与后面有序的每一个值进行对比
        for(int i= nums.size()-1;i>left;i--){
            //找到第一个比left大的数，将其与left进行交换，完成逆序操作。
            if(nums[i]>nums[left]){
                swap(nums[i],nums[left]);
                break;
            }
        }
        //将整个vector转置，将原来的逆序vector转变为顺序
        reverse(nums.begin()+left+1,nums.end());
        //将其添加到result中
        res.push_back(nums);
        //继续递归迭代
        helper(nums,res);
    }
};

//优质解答2：思路相同，基本相同，使用了标志数组来记录当前值是否应该参与遍历。这样可以有效跳过相同数组，避免重复。
时间复杂度O(n^2);空间复杂度O(n);

class Solution {
public:
    vector<int> nums;
    vector<vector<int>> res;
    vector<int> path;
    //进行深度遍历
    void DFS(int level,vector<bool>& visitor){
        //小于0直接添加并返回
        if(level < 0){
            res.push_back(path);
            return;
        }
        //遍历数组
        for(int i = 0;i<nums.size();i++){
            //如果已经访问过或者，是连续相等值，直接跳过
            if(visitor[i] == true || i>0 && nums[i] == nums[i-1]&&!visitor[i-1])
                continue;
            //设置为访问过
            visitor[i] = true;
            //将当前值加入到path
            path.push_back(nums[i]);
            //继续深度遍历
            DFS(level-1,visitor);
            //取出，避免下次迭代的影响
            path.pop_back();
            //将其标志位设置为可以
            visitor[i] = false;
        }
    }
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        //排序
        sort(nums.begin(),nums.end());
        //设置是否访问过的标志数组
        vector<bool> visitor(nums.size(),false);
        //设置nums
        this->nums = nums;
        //对其进行深度遍历
        DFS(nums.size()-1,visitor);

        return res;
    }
};

//优质解答3：和2的解答思路基本相同，不过使用了左右指针，进行交换变换，递归直到遇到左指针
class Solution {
    vector<vector<int>> ans;

public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        perm(nums, 0, nums.size() - 1);
        return ans;
    }
    //注意这里的nums是拷贝
    void perm(vector<int> nums, int left, int right) {
        //左右指针相同，直接将其添加到答案中
        if (left == right)
            ans.push_back(nums);
        else {
            //依次将left和right之间的数进行交换
            for (int i = left; i <= right; i++) {
                //注意这里，等于left就直接跳过，因为有序，因此必定是相同值
                if (i != left && nums[left] == nums[i]) continue;  
                swap(nums[left], nums[i]);
                //再次递归遍历
                perm(nums, left + 1, right);
            }
        }
    }
};

//优质解答4：直接根据条件判断其是否存在下一个字节序(为升序)；否则将当前的字典序数组直接添加上去

class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        do {
            result.push_back(nums);
        } while(next_permutation(nums.begin(), nums.end()));
        return result;
    }
};
//优质解答5：使用map统计其中的不同数的数目，然后回朔遍历，每次用过之后就直接--其数目，然后递归，
            然后将其取出，增加其被用数目，避免二次影响
class Solution {
public:
    void backtrace(map<int, int>& m, int k, int n,
                   vector<int>& v, vector<vector<int>>& res) {
        if (k == n) {
            res.push_back(v);
            return;
        }
        for (auto& p : m) {
            if (p.second == 0) continue;
            --p.second;
            //添加这个数，表示取它的情况
            v.push_back(p.first);
            backtrace(m, k + 1, n, v, res);
            ++p.second;
            //删除这个数表示不取它的情况
            v.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        map<int, int> m;
        for (auto x : nums) ++m[x];
        vector<vector<int>> res;
        vector<int> v;
        backtrace(m, 0, nums.size(), v, res);
        return res;
    }
};

作者：da-li-wang
链接：https://leetcode-cn.com/problems/permutations-ii/solution/c-jian-dan-hui-su-by-da-li-wang/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解：
https://leetcode-cn.com/problems/permutations/solution/quan-pai-lie-by-leetcode/
*/
