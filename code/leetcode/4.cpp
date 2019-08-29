/* 
data-time 2019-08-29 14:12:56

题目编号：4

题目描述:
给定两个大小为 m 和 n 的有序数组 nums1 和 nums2。

请你找出这两个有序数组的中位数，并且要求算法的时间复杂度为 O(log(m + n))。

你可以假设 nums1 和 nums2 不会同时为空。

示例 1:

nums1 = [1, 3]
nums2 = [2]

则中位数是 2.0
示例 2:

nums1 = [1, 2]
nums2 = [3, 4]

则中位数是 (2 + 3)/2 = 2.5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/median-of-two-sorted-arrays
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路： 因为两个都是有序数组，因此需要使用二分法进行分割，对与查找第k个数，可以分别在两个数组中查找第k/2的数，如果中间任何一个不存在，则第k个大小的数，
        必定在另外一个上，直接淘汰另外一个数组的前k/2个数字即可。如果存在则比较k/2个数字的大小，淘汰较小的那组的前k/2个递归调用，最终当k==1时，比较两者对应的最小值

        另外对于为了消除奇偶数影响需要设置左右值，左右值之和/2结果不变，设置查找两个值(m + n + 1) / 2和(m + n + 2) / 2;可以消除奇偶影响

参考链接： https://blog.csdn.net/xiaomucgwlmx/article/details/87879306
		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;
//main function
#define INT_MAX INT16_MAX
#define INT_MIN INT16_MIN
class Solution {
public:
   double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        //为了消除奇偶数影响需要设置左右值，左右值之和/2结果不变
        int  left = (m + n + 1) / 2;
        int right = (m + n + 2) / 2;
        return (findKth(nums1, 0, nums2, 0, left) + findKth(nums1, 0, nums2, 0, right)) / 2.0;
    }
    //在两个有序数组中查找地k个大小的元素，查找起始位置为i和j
    int findKth(vector<int>& nums1, int i, vector<int>& nums2, int j, int k) {
        //unsigned int INT_MAX = 0-1; 
        //当前索引超过范围k必定在下一个数组中，直接查找下一个数组的数
        if (i >= nums1.size()) {
            //直接返回下一个数组的
            return nums2[j + k - 1];
        }
        //和上文一样
        if (j >= nums2.size()){
            return nums1[i + k - 1];
        }
        if (k == 1) return min(nums1[i], nums2[j]);//比较当前的最小值
        //如果没有超出范围，就返回值，否则返回一个极限值
        int midVal1 = (i + k / 2 - 1 < nums1.size()) ? nums1[i + k / 2 - 1] : INT_MAX;
        int midVal2 = (j + k / 2 - 1 < nums2.size()) ? nums2[j + k / 2 - 1] : INT_MAX;
        //如果查找的中间值有前者小于后者，则前一个数组的前k/2个必定可以被舍弃，ums1的起始位置向后移动K/2个，并且此时的K也自减去K/2
        //状况相反时，淘汰nums2中的前K/2个数字并将nums2的起始位置向后移动K/2个，并且此时的K也自减去K/2
        if (midVal1 < midVal2) {
            return findKth(nums1, i + k / 2, nums2, j, k - k / 2);//淘汰前k/2个
        } else {
            return findKth(nums1, i, nums2, j + k / 2, k - k / 2);
        }
    }
    double findMedianSortedArrays2(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();//获取大小
        return (findKth2(nums1, nums2, (m + n + 1)/2) + findKth2(nums1, nums2, (m + n + 2) / 2)) / 2.0;
    }
    //查找正序数为k的数
    int findKth2(vector<int> nums1, vector<int> nums2, int k) {
        if (nums1.empty()) return nums2[k - 1];//直接返回后面数组的第K个
        if (nums2.empty()) return nums1[k - 1];
        if (k == 1) return min(nums1[0], nums2[0]);//k=1查找最小的数
        //查看第k/2的数是否在,在则返回k/2否则直接返回大小
        int i = min((int)nums1.size(), k / 2);
        int j = min((int)nums2.size(), k / 2);
        //比较关键位置的大小，当nums1中值较大时，放弃后面的前k/2个数，反之亦然
        if (nums1[i - 1] > nums2[j - 1]) {
            return findKth2(nums1, vector<int>(nums2.begin() + j, nums2.end()), k - j);
        } else {
            return findKth2(vector<int>(nums1.begin() + i, nums1.end()), nums2, k - i);
        }
        return 0;
    }
    //保证长的在前，短的在后
    double findMedianSortedArrays3(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size(), n = nums2.size();
        if (m < n) return findMedianSortedArrays3(nums2, nums1);//调整查找顺序
        //进行查找
        if (n == 0) return ((double)nums1[(m - 1) / 2] + (double)nums1[m / 2]) / 2.0;
        int left = 0, right = n * 2;
        while (left <= right) {
            int mid2 = (left + right) / 2;
            int mid1 = m + n - mid2;
            double L1 = mid1 == 0 ? INT_MIN : nums1[(mid1 - 1) / 2];
            double L2 = mid2 == 0 ? INT_MIN : nums2[(mid2 - 1) / 2];
            double R1 = mid1 == m * 2 ? INT_MAX : nums1[mid1 / 2];
            double R2 = mid2 == n * 2 ? INT_MAX : nums2[mid2 / 2];
            if (L1 > R2) left = mid2 + 1;
            else if (L2 > R1) right = mid2 - 1;
            else return (max(L1, L2) + min(R1, R2)) / 2;
        }
        return -1;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={1,2,5,6};
    vector<int> b={3,4};
   
	int time_point_1=clock();
    auto result1=my_solution.findMedianSortedArrays(a,b);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：
//基本优质解答都在上面了，这个取巧了算法复杂度是O(m+n);直接排序，然后返回中间值，推荐实际工作中使用
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        //获取nums1数组长度
        unsigned short int s1 = nums1.size();
        //获取nums2数组长度
        unsigned short int s2 = nums2.size();
        //获取总数组长度
        unsigned short int s = s1+s2;
        //为s分配内存
        int* tmp = (int*)malloc(sizeof(int)*s);
        int i=0,j=0,k=0;
        //将两个数组进行排序
        while(i<s1&&j<s2)
        {
            tmp[k++]=nums1[i] < nums2[j]?nums1[i++]:nums2[j++];
        }
        while(i<s1)
        {
            tmp[k++]=nums1[i++];
        }
        while(j<s2)
        {
            tmp[k++]=nums2[j++];
        }
        
        if(s%2 == 0)
        {
            return (tmp[s/2]+tmp[s/2-1])/2.0;
        }
        else
        {
            return tmp[s/2];
        }
    }
};
*/
