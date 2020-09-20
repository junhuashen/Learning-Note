/* 
data-time 2019-09-04 20:42:56


题目描述:
两个数组的交集 II

给定两个数组，编写一个函数来计算它们的交集。

示例 1:

输入: nums1 = [1,2,2,1], nums2 = [2,2]
输出: [2,2]
示例 2:

输入: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
输出: [4,9]
说明：

输出结果中每个元素出现的次数，应与元素在两个数组中出现的次数一致。
我们可以不考虑输出结果的顺序。
进阶:

如果给定的数组已经排好序呢？你将如何优化你的算法？
如果 nums1 的大小比 nums2 小很多，哪种方法更优？
如果 nums2 的元素存储在磁盘上，磁盘内存是有限的，并且你不能一次加载所有的元素到内存中，你该怎么办？

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/26/
/*

主要思路：1.主要思路：先对两个数组进行排序，然后借助额外的子空间分别进行查找，查找到相同的就输出。否则持续查找下一个
参考链接：https://blog.csdn.net/huanting74/article/details/79742059

		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <algorithm>
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
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        //nums1.erase(unique(nums1.begin(),nums1.end()),nums1.end());
        sort(nums2.begin(),nums2.end());
        //nums2.erase(unique(nums2.begin(),nums2.end()),nums2.end());
        vector<int> result;
        //接下来进行顺序查找
        for(int i=0,j=0;i<nums1.size()&&j<nums2.size();)
        {
            if(nums1.at(i)==nums2.at(j)){
                result.push_back(nums1.at(i));
                ++i;
                ++j;
            }else if(nums1.at(i)>nums2.at(j))
            {
                ++j;
            }else{
                ++i;
            }
            
        }
        return result;

    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={4,9,5};
    vector<int> b={9,4,9,8,4};
	int time_point_1=clock();
    auto  result=my_solution.intersect(a,b);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：一样的思路不过将变量都预定义好了，估计会快一点
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        vector<int> res;
        int n = nums1.size();
        int m = nums2.size();
        int i,j,k;
        i = 0; j = 0; k = 0;
        while(i<n && j<m){
            if(nums1[i] == nums2[j]){
                res.push_back(nums1[i]);
                i++;j++;
            }else if(nums1[i] < nums2[j]){
                i++;
            }else{
                j++;
            }
        }
        return res;
    }
};
思路二借助辅助空间，来记录元素是否被遍历过

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> result;
        int size = nums2.size();
        vector<bool> flags;
        for(int i=0;i<size;i++){
            flags.push_back(false);
        }
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums2.size();j++){
                if(nums1[i]==nums2[j]&&flags[j]==false){//相等并且没有被遍历过
                    result.push_back(nums1[i]);
                    flags[j]=true;
                    break;
                }
            }
        }
        return result;
    }
};
*/
