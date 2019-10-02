/* 
data-time 2019-10-02 19:58:56


题目描述:
第一个错误的版本

给定两个有序整数数组 nums1 和 nums2，将 nums2 合并到 nums1 中，使得 num1 成为一个有序数组。

你是产品经理，目前正在带领一个团队开发新的产品。不幸的是，你的产品的最新版本没有通过质量检测。由于每个版本都是基于之前的版本开发的，所以错误的版本之后的所有版本都是错的。

假设你有 n 个版本 [1, 2, ..., n]，你想找出导致之后所有版本出错的第一个错误的版本。

你可以通过调用 bool isBadVersion(version) 接口来判断版本号 version 是否在单元测试中出错。实现一个函数来查找第一个错误的版本。你应该尽量减少对调用 API 的次数。

示例:

给定 n = 5，并且 version = 4 是第一个错误的版本。

调用 isBadVersion(3) -> false
调用 isBadVersion(5) -> true
调用 isBadVersion(4) -> true

所以，4 是第一个错误的版本。 

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/8/sorting-and-searching/53/

/*

主要思路：使用二分法来检查，如果左边的index1是true就将letf设置为index1,如果右边的index,注意右边的+1转换
        时间复杂度(log2(n)),空间复杂度O(0)
        
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
bool isBadVersion(int version);
//main function
class Solution {
public:
    int firstBadVersion(int n) {
        int left=1,right=n;
        int index=(right+left)/2;
        while(left< right){
            if(isBadVersion(index)){
                right=index;
            }else{
                left=index+1;
            }
            index=(right+left)/2;
        }
        return index;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,2,3,0,0,0};
    vector<int> vector_temp2={2,5,6};
  
    int test_int=1; 
	int time_point_1=clock();
    my_solution.firstBadVersion(3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：进行逆向的遍历，防止中间的数据丢失，找到最大值进行赋值
时间复杂度O(log2(n)),空间复杂度O(1);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;
        while(low<high){
            int mid = low + (high-low)/2;
            if(isBadVersion(mid))
                high = mid;
            else
                low = mid+1;
        }
        return high;
    }
};
*/