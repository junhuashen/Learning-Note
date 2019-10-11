/* 
data-time 2019-10-11 09:50:56


题目描述:

三数之和

给定一个包含 n 个整数的数组 nums，判断 nums 中是否存在三个元素 a，b，c ，使得 a + b + c = 0 ？找出所有满足条件且不重复的三元组。

注意：答案中不可以包含重复的三元组。

例如, 给定数组 nums = [-1, 0, 1, 2, -1, -4]，

满足要求的三元组集合为：
[
  [-1, 0, 1],
  [-1, -1, 2]
]

 

主要思路 1.暴力破解法：先将数组进行排序，然后选取两个不同index的数，计算第三个数的值，查找第三个数，找到了就添加。否则不管
            时间复杂度O(n^3);空间复杂度O(0);然而超时了，所以需要复杂度更低的算法
        2.先排序，再使用遍历找到第一个值，使用左右指针进行夹逼，和小于0左指针移动，大于0有指针移动。相同时则停止循环，第一个值的index++；
            注意左右指针在和为0，且与前后值相同时，为了避免重复，需要自己移动，直到不同为止。
        时间复杂度O(n^2) 空间复杂度O(0)
        https://blog.csdn.net/weixin_41463193/article/details/91859621#commentsedit

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
    vector<vector<int>> threeSum1(vector<int>& nums) {
        vector<vector<int> > result;
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();++i){
            for(int j=i+1;j<nums.size();++j){
                //遇到重复直接跳过
                 if(!result.empty()){
                    if(nums[i]==result[result.size()-1][0]&&nums[j]==result[result.size()-1][1])
                        continue;
                }
                int index=0-nums[i]-nums[j];
                auto find_result=find(nums.begin()+j+1, nums.end(),index);
                if(find_result!=nums.end()){
                    vector<int > temp_vector(3);
                    temp_vector[0]=nums[i];
                    temp_vector[1]=nums[j];
                    temp_vector[2]=*find_result;
                    //在这里去除重复
                    if(find(result.begin(),result.end(),temp_vector)==result.end()){
                        result.push_back(temp_vector);
                    }
                    
                }
            }
        }
        return result;
    }
    vector<vector<int>> threeSum(vector<int>& nums) {    
        vector<vector<int> > result;
        int length=nums.size();
        if(length<3){
            return result;
        }
        int temp_1,temp_2,temp_3;
        temp_1=temp_2=temp_3=0;
        vector< int> temp_vector(3);
        sort(nums.begin(), nums.end());
        for(int i=0;i<nums.size();++i){
            if(nums.at(i)>0){
                break;
            }
            //避免第一个重复
            if(i>0&&nums[i]==nums[i-1]){
                continue;
            }
            int temp_1=nums[i];
            int left_index=i+1;
            int right_index=nums.size()-1;
            //循环遍历直到结束
            while(left_index<right_index){
                int temp_sum=temp_1+nums[left_index]+nums[right_index];
                if(temp_sum==0){
                    temp_vector[0]=temp_1;
                    temp_vector[1]=nums[left_index];
                    temp_vector[2]=nums[right_index];
                    result.push_back(temp_vector);
                    while(left_index < right_index&&nums[left_index]==nums[left_index+1]) ++left_index;
                    while(left_index < right_index&&nums[right_index]==nums[right_index-1]) --right_index;
                    ++left_index;
                    --right_index;
                }else if(temp_sum<0){
                    ++left_index;
                }else {
                    --right_index;
                }
            }
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={-1, 0, 1, 2, -1, -4};
    vector<int> vector_temp2={2,5,6};
	int time_point_1=clock();
    auto result=my_solution.threeSum(vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路一样，不过排除了第一个数大于0的情况

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() < 2) {
            return res;
        }
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = 0;
        int sum = 0;
        for (int i = 0; i < (int)(nums.size() - 2); i++) {
            if (nums[i] > 0) {
                break;
            }
            if ((i > 0) && (nums[i] == nums[i-1])) {
                continue;
            }
            l = i + 1;
            r = (int)(nums.size() - 1);
            while (l < r) {
                sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while((l < r) && (nums[l] == nums[l - 1])) {
                        l++;
                    }
                    while((l < r) && (nums[r] == nums[r + 1])) {
                        r--;
                    }                    
                } else if (sum < 0) {
                    l++;
                } else {
                    r--;
                }
            }
            
        }
        return res;        
    }
};
//优质解答2:思路基本一样，不过增加了遇到左右指针的移动次数
时间复杂度O(n),空间复杂度O(n+1)
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if (nums.size() < 2) {
            return res;
        }
        sort(nums.begin(), nums.end());
        int l = 0;
        int r = 0;
        int sum = 0;
        for (int i = 0; i < (int)(nums.size() - 2); i++) {
            if (nums[i] > 0) {
                break;
            }
            if ((i > 0) && (nums[i] == nums[i-1])) {
                continue;
            }
            l = i + 1;
            r = (int)(nums.size() - 1);
            while (l < r) {
                sum = nums[i] + nums[l] + nums[r];
                if (sum == 0) {
                    res.push_back({nums[i], nums[l], nums[r]});
                    l++;
                    r--;
                    while((l < r) && (nums[l] == nums[l - 1])) {
                        l++;
                    }
                    while((l < r) && (nums[r] == nums[r + 1])) {
                        r--;
                    }                    
                } else if (sum < 0) {
                    l++;
                } else {
                    r--;
                }
            }
            
        }
        return res;        
    }
};
优质解答3：思路完全一样
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());       //快速排序
        if(nums.size()<3||nums.front()>0||nums.back()<0) return {};  //数目小于3，全大于0，或全小于0，退出
        vector<vector<int>> res;   //存储结果
        for(int i=0;i<nums.size()-2;i++)   //从0开始轮询，细节处是轮询到size()-2前
        {
            int fix=nums[i];                //取当前值
            if(fix>0) break;                //如果当前值大于0，退出轮询，因为后面的数都大于0，再无匹配，fix应该是负数
            if(i>0&&fix==nums[i-1])     
                continue;
            int l=i+1;                   //左指针
            int r=nums.size()-1;         //右指针
            while(l<r)                     
            {
                if(nums[l]+nums[r]==-fix)   //如果找到适合的两个数
                {
                    if(l==i+1 || r==nums.size()-1)   //处于原始位置，就可以加进去
                    {
                        res.push_back(vector<int>{nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                    }
                    else if(nums[l]==nums[l-1])  //对左指针消重，注意此处比较的是前一个，和后一个比较会遇到一种特殊情况出错，那就是左右指针相同时，直接比较到 l>r，与前一个比较可以记录重复前的数据
                        l++;
                    else if(nums[r]==nums[r+1]) //对右指针消重
                        r--;
                    else   //消重完毕
                    {
                        res.push_back(vector<int>{nums[i],nums[l],nums[r]});
                        l++;
                        r--;
                    }
                }
                else if(nums[l]+nums[r]<-fix)       
                    l++;            //如果两数之和较小，左指针向右移
                else r--;           //如果两数之和较大，右指针向左移
            }
        }
        return res;
    }
};


优质解答4：思路完全一样，使用迭代器更加简洁

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> res;
        if(nums.empty()||nums.back()<0||nums.front()>0) return res;
        for(int k=0;k<nums.size();k++){
            if(nums[k]>0) break;
            if(k>0&&nums[k]==nums[k-1]) continue;
            int target = 0 - nums[k],i = k + 1,j = nums.size() - 1;
            while(i<j){
                if(nums[i]+nums[j]==target){
                    res.push_back({nums[k],nums[i],nums[j]});
                    while(i<j&&nums[i]==nums[i+1]) i++;
                    while(i<j&&nums[j]==nums[j-1]) j--;
                    i++;j--;
                }else if(nums[i]+nums[j]<target) i++;
                else j--;
            }
        }
        return res;
    }
};
*/