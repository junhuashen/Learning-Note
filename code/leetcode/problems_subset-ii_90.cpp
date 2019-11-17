/* 
data-time 2019-11-14 14:08:56


题目描述:

90. 子集II

给定一个可能包含重复元素的整数数组 nums，返回该数组所有可能的子集（幂集）。

说明：解集不能包含重复的子集。

示例:

输入: [1,2,2]
输出:
[
  [2],
  [1],
  [1,2,2],
  [2,2],
  [1,2],
  []
]


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/subsets-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路 1.  使用递归的方法，先串入一个空数组，然后一次遍历数组中的数，将原有的集合添加到当前，
            注意因为存在重复的字符，因此遇到重复字符时，只需针对新增的进行添加就可以了
            只针对上一个新增的进行计算。
        时间复杂度O(n!);空间复杂度O(n!)
        2. 
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
#define INT_MAX INT16_MAX
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
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        result.push_back({});
        unsigned long last_index=0;
        int start;
        for(int i=0;i<nums.size();++i){
            //记录起始值
            start=0;
            int temp_result=nums[i];
            if(i>0&&nums[i]==nums[i-1]){
                start=last_index;
            }
            int temp_length=result.size();
            int new_count=0;
            for(int j=start;j<temp_length;++j){
                vector<int> temp_vector=result[j];
                temp_vector.push_back(temp_result);
                result.push_back(temp_vector);
                ++new_count;
            }
            //更新对应的值
            last_index=result.size()-new_count;
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,2,2};
    vector<int> vector_temp2={2,5,6};
    vector<vector<int> > two_vector={
        {1, 2, 3 },
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.subsetsWithDup(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*


//优质解答1：思路基本相同，不过不是记录最后一个index,而是统计连续的相同值，直接将其连续的数视为一个数，一起进行操作
时间复杂度O(k);空间复杂度O(1)
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> empty;
        res.push_back(empty);
        
        for (int i=0; i<nums.size(); i++){
            //统计重复数 
            int num_repeat = 0;
            //持续统计重复的数
            while (i+1<nums.size() && nums[i]==nums[i+1]){
                num_repeat++;
                i++;
            }
            //获取当前长度
            int len = res.size();
            //遍历result
            for (int j=0; j<len; j++){
                //获取结果中的vector
                vector<int> tmp = res[j];
                //将每一个重复符直接添加到数组中，再添加到结果中
                //注意：这里是将相同值视为一个整体，进行添加，每次值添加不同的相同值数量不同
                for (int k=0; k<=num_repeat; k++){
                    //每次在tmp中添加的相同值的数量不同
                    //https://leetcode-cn.com/problems/subsets-ii/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-19/
                    tmp.push_back(nums[i]);
                    res.push_back(tmp);
                }
            }
        }
        return res;
    }
};

//优质解答2：思路基本相同，使用递归的方式，回溯，添加和取出，避免了值的重复影响。
时间复杂度O(n!);空间复杂度O(n!)
class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;
        vector<int> curr;
        dfs(res, nums, curr, 0);
        return res;
    }
    
    void dfs(vector<vector<int>>& res, vector<int>& nums, vector<int>& curr, int i){
        res.push_back(curr);
        int prev = INT_MIN;
        for (int j=i; j<nums.size(); j++){
            //如果相同，直接跳过
            if (prev == nums[j]) continue;
            //记录当前值
            prev = nums[j];
            //获取当前vector
            vector<int> tmp = curr;
            //添加进去
            tmp.push_back(nums[j]);
            //继续深度遍历
            dfs(res, nums, tmp, j+1);
        }
    }
};
优质解答3：思路基本相同，使用递归的方式，添加和取出，避免了值的重复影响。
时间复杂度O(n!);空间复杂度O(n!)
class Solution {
public:
    vector<vector<int>> ans;
    vector<int> path;
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        dfs(nums,0);
        return ans;
    }
    
    void dfs(vector<int>& nums,int u)
    {
        if(u==nums.size())
        {
            ans.push_back(path);
            return;
        }
        //计算重复当前数字的个数
        int k=0;
        while(u+k<nums.size()&&nums[u+k]==nums[u]) k++;
        //每次执行相同的数
        for(int i=0;i<=k;i++)  //枚举k次
        {
            dfs(nums,u+k);  //从下一个数开始递归
            path.push_back(nums[u]);
        }
        
        for(int i=0;i<=k;i++) path.pop_back();  //恢复现场        
        
    }
};

优质解答4：使用额外的空间；存储重复数字频率，同一进行处理

1. nums数组排序
2. 将nums数组转换为存储类型tag的数组s,tag类型包括val和num两个变量，顾名思义，此时数组s中不存在重复变量
3. 回溯（递归），在处理s中每个元素时，需要根据num值生成num个分别包含1-num个val元素的子集
4. 回溯算法本质是递归，递归后不要忘记回退（代码里的pop)
class Solution {
public:
    struct tag{
        int val;
        int num;
    };
    void push(vector<int>& inst, vector<tag>& s, int index, int n){
        for(int i = 0; i < n; i++){
            inst.push_back(s[index].val);
        }
    }
    
    void pop(vector<int>& inst, int n){
        for(int i = 0; i < n; i++){
            inst.pop_back();
        }
    }
    void recall(vector<vector<int>>& result, vector<int>& inst, vector<tag>& s, int i, int n){
        if(n == 0){
            result.push_back(inst);
            return;
        }
        for(int j = i; j <= (s.size() - n); j++){
            for(int k = 1; k <= s[j].num; k++){
                //添加对应的数
                push(inst, s, j, k);
                recall(result, inst, s, j + 1, n - 1);
                //将其回退
                pop(inst, k);
            }
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<tag> s;
        vector<vector<int>> result;
        if(nums.size() == 0) return result;
        
        for(int i = 0; i < nums.size(); i++){
            if(i == 0 || nums[i] != nums[i - 1]){
                tag t = {nums[i], 1};
                s.push_back(t);
            }else{
                s[s.size() - 1].num += 1;
            }
        }
        
        vector<int> inst;
        for(int n = 1; n <= s.size(); n++){
            recall(result, inst, s, 0, n);
        }
        result.push_back(vector<int>());
        return result;
    }
};

作者：heroma-2
链接：https://leetcode-cn.com/problems/subsets-ii/solution/c-shi-jian-ji-bai-92kong-jian-ji-bai-56-by-heroma-/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


//官方题解：


//优质解析：
https://leetcode-cn.com/problems/subsets-ii/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-19/

https://leetcode-cn.com/problems/subsets-ii/solution/c-shi-jian-ji-bai-92kong-jian-ji-bai-56-by-heroma-/
*/