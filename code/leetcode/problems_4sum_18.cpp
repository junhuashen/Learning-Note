/* 
data-time 2019-11-07 13:07:56


题目描述:

16. 四数之和

给定一个包含 n 个整数的数组 nums 和一个目标值 target，判断 nums 中是否存在四个元素 a，b，c 和 d ，使得 a + b + c + d 的值与 target 相等？找出所有满足条件且不重复的四元组。

注意：

答案中不可以包含重复的四元组。

示例：

给定数组 nums = [1, 0, -1, 0, -2, 2]，和 target = 0。

满足要求的四元组集合为：
[
  [-1,  0, 0, 1],
  [-2, -1, 1, 2],
  [-2,  0, 0, 2]
]


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/4sum
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1.暴力破解，直接四重循环遍历，将符合要求的值，添加到结果中。注意结果的排序和去重
        时间复杂度O(n^4);空间复杂度O(0);
        2. 先排序，然后确定一个值和第二个值，然后使用双指针，分别指向左右值。
        第一二个值后，循环跳过相同的值。
        每次比较和目标值的大小，根据大小更新左右指针
        时间复杂度O(n^2*n*log(n));空间复杂度O(0);

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
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int length=nums.size();
        int max_index=length-1;
        vector<vector<int>> result;
        for(int i=0;i< nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                for(int k=j+1;k< nums.size();++k){
                    for(int m=k+1;m< nums.size();++m){
                        if(nums[i]+nums[j]+nums[k]+nums[m]==target){
                            vector<int > temp_vector={nums[i], nums[j], nums[k],nums[m]};
                            //sort(temp_vector.begin(), temp_vector.end());
                            result.push_back(temp_vector);
                        }
                        while(m<max_index&&nums[m+1]==nums[m]) ++m;
                    }
                    while(k<max_index&&nums[k+1]==nums[k]) ++k;
                }
                while(j<max_index&&nums[j+1]==nums[j]){++j;}
            }
            while(i<max_index&&nums[i+1]==nums[i]){++i;}
        }
        //sort(result.begin(), result.end());
        //result.erase(unique(result.begin(),result.end()),result.end());
        return result;
    }
    vector<vector<int>> fourSum1(vector<int>& nums, int target){
         sort(nums.begin(), nums.end());
        int length=nums.size();
        int max_index=length-1;
        vector<vector<int>> result;
        if(length<4) return result;
        for(int i= 0; i < length-3;++i){
            for(int j=i+1;j<length-2;++j){
                //设置左右指针开始检查
                int left=j+1,right=nums.size()-1;
                while(left<right){
                    int temp_sum=nums[i]+nums[j]+nums[left]+nums[right];
                    if(temp_sum==target){
                        result.push_back({nums[i],nums[j],nums[left],nums[right]});
                        //同时更新left和right
                        while(left<right&&left<max_index&&nums[left+1]==nums[left]) ++left;
                        ++left; 
                        while(left<right&&right>0&&nums[right-1]==nums[right]) --right;
                        --right;
                    }else if(temp_sum<target){
                        while(left<right&&left<max_index&&nums[left+1]==nums[left]) ++left; 
                        ++left;
                    }else {
                        while(left<right&&right>0&&nums[right-1]==nums[right]) --right;
                        --right;
                    }
                }
                while(j<max_index&&nums[j+1]==nums[j]){++j;}
            }
            //第一个值确定结束，进行跳过
            while(i<max_index&&nums[i+1]==nums[i]){++i;}
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,0,-1,0,-2,2};
    vector<int> vector_temp2={-3,-2,-1,0,0,1,2,3};
    vector_temp2.erase
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.fourSum1(vector_temp,0);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路相同，提前返回
时间复杂度O(n^3);空间复杂度O(0);
class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        const int N = nums.size();
        if (N < 4)
            return {};
        
        sort(nums.begin(), nums.end());
        int a, b, c, d; //tuple index
        
        vector<vector<int>> res;
        for (a=0; a<= N-4; ++a) {
            //if (nums[a] > target) {return res;}
            if (a > 0 && (nums[a] == nums[a-1])) continue;
            
            for(b=a+1; b<=N-3; ++b) {
                //当值相同时直接跳过
                if ((b > (a + 1)) && nums[b] == nums[b-1]) continue;
                //设置左右指针
                c = b + 1;
                d = N - 1;
                //计算目标值
                int goal = target - (nums[a] + nums[b]);
                while(c < d) {
                    int goal2 = nums[c] + nums[d];
                    if (goal2 > goal) {
                        d--;
                    }
                    else if (goal2 < goal)
                    {
                        c++;
                    }
                    else {
                        //相同时，同时执行操作
                        res.push_back({nums[a], nums[b], nums[c], nums[d]});
                        c++;
                        d--;
                        while(c < d && nums[c] == nums[c-1]) c++;
                        while(c < d && nums[d] == nums[d+1]) d--;
                    }
                }
            }
        }
        
        return res;
        
    }
};

//优质解答2：注释很详细
时间复杂度O(n^3);空间复杂度O(0);
class Solution {
public:
    vector <vector<int>> fourSum(vector<int> &nums, int target) {
        vector <vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());
        vector<int> tmp;

        // 从第 i 位开始寻找 4 个数的组合
        for (int i = 0; i < n - 3; i++) { // i 的值最大只能为 n - 4，即倒数第 4 位
            // 4 个数不允许重复，所以如果当前第 1 个数与之前的相同则跳过
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            // 若从第 i 位开始的最小的数字组合都比 target 大，找不到满足条件的组合，结束循环
            if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
                break;

            // 若从第 i 位开始的最大的数字组合都比 target 小，找不到满足条件的组合，结束循环
            if (nums[i] + nums[n - 3] + nums[n - 2] + nums[n - 1] < target)  // smallest sum for j
                continue;

            // 从第 j 位开始寻找 3 个数的组合
            for (int j = i + 1; j < n - 2; j++) { // j 的值最大只能为 n - 3，即倒数第 3 位
                // 4 个数不允许重复，所以如果当前第 2 个数与之前的相同则跳过
                if (j > i + 1 && nums[j - 1] == nums[j])
                    continue;

                // 若从第 i 位开始的最大的数字组合都比 target - nums[i] 大，找不到满足条件的组合，结束循环
                if (nums[j] + nums[j + 1] + nums[j + 2] > target - nums[i])
                    break;

                // 若从第 i 位开始的最大的数字组合都比 target - nums[i] 小，找不到满足条件的组合，结束循环
                if (nums[j] + nums[n - 2] + nums[n - 1] < target - nums[i])
                    continue;

                int l = j + 1;
                int r = n - 1;

                int tmp = target - nums[i] - nums[j];

                while (l < r) {
                    int sum = nums[l] + nums[r];
                    if (sum == tmp) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        do { l++; } while (l < r && nums[l] == nums[l - 1]);
                        do { r--; } while (l < r && nums[r] == nums[r + 1]);
                    } else if (sum < tmp) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
//优质解答3：先做前后的判断；

class Solution {
public:
    vector <vector<int>> fourSum(vector<int> &nums, int target) {
        vector <vector<int>> ans;
        int n = nums.size();
        if (n < 4) return ans;

        sort(nums.begin(), nums.end());
        vector<int> tmp;

        // 从第 i 位开始寻找 4 个数的组合
        for (int i = 0; i < n - 3; i++) { // i 的值最大只能为 n - 4，即倒数第 4 位
            // 4 个数不允许重复，所以如果当前第 1 个数与之前的相同则跳过
            if (i > 0 && nums[i - 1] == nums[i])
                continue;

            // 若从第 i 位开始的最小的数字组合都比 target 大，找不到满足条件的组合，结束循环
            if (nums[i] + nums[i + 1] + nums[i + 2] + nums[i + 3] > target)
                break;

            // 若从第 i 位开始的最大的数字组合都比 target 小，找不到满足条件的组合，结束循环
            if (nums[i] + nums[n - 3] + nums[n - 2] + nums[n - 1] < target)  // smallest sum for j
                continue;

            // 从第 j 位开始寻找 3 个数的组合
            for (int j = i + 1; j < n - 2; j++) { // j 的值最大只能为 n - 3，即倒数第 3 位
                // 4 个数不允许重复，所以如果当前第 2 个数与之前的相同则跳过
                if (j > i + 1 && nums[j - 1] == nums[j])
                    continue;

                // 若从第 i 位开始的最大的数字组合都比 target - nums[i] 大，找不到满足条件的组合，结束循环
                if (nums[j] + nums[j + 1] + nums[j + 2] > target - nums[i])
                    break;

                // 若从第 i 位开始的最大的数字组合都比 target - nums[i] 小，找不到满足条件的组合，结束循环
                if (nums[j] + nums[n - 2] + nums[n - 1] < target - nums[i])
                    continue;

                int l = j + 1;
                int r = n - 1;

                int tmp = target - nums[i] - nums[j];

                while (l < r) {
                    int sum = nums[l] + nums[r];
                    if (sum == tmp) {
                        ans.push_back({nums[i], nums[j], nums[l], nums[r]});
                        do { l++; } while (l < r && nums[l] == nums[l - 1]);
                        do { r--; } while (l < r && nums[r] == nums[r + 1]);
                    } else if (sum < tmp) {
                        l++;
                    } else {
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};
//官方题解：

//优质解析：
https://leetcode-cn.com/problems/4sum/solution/python76msjie-fa-zong-zhi-jiu-shi-ha-xi-by-sun-wu-/
https://leetcode-cn.com/problems/4sum/solution/si-shu-zhi-he-by-gpe3dbjds1-2/
*/