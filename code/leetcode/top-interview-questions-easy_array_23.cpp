/* 
data-time 2019-09-04 20:42:56


题目描述:
旋转数组

给定一个数组，将数组中的元素向右移动 k 个位置，其中 k 是非负数。

示例 1:

输入: [1,2,3,4,5,6,7] 和 k = 3
输出: [5,6,7,1,2,3,4]
解释:
向右旋转 1 步: [7,1,2,3,4,5,6]
向右旋转 2 步: [6,7,1,2,3,4,5]
向右旋转 3 步: [5,6,7,1,2,3,4]
示例 2:

输入: [-1,-100,3,99] 和 k = 2
输出: [3,99,-1,-100]
解释: 
向右旋转 1 步: [99,-1,-100,3]
向右旋转 2 步: [3,99,-1,-100]
说明:

尽可能想出更多的解决方案，至少有三种不同的方法可以解决这个问题。
要求使用空间复杂度为 O(1) 的 原地 算法。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/1/array/23/
/*

主要思路：1.暴力方法，直接将所有数据后移k位，当最终下标大于数组长度时，可以求余数进行运算，一次遍历结束操作

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
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        if(k<=0||(nums.size()<=1)){return;}
        int array[k]={0};
        int max_index=nums.size()-1;
        for(int i=max_index;i>=0;--i)
        {
            if((i+k)>max_index){
                array[(i+k)-max_index-1]=nums.at(i);
            }else
            {
                nums.at(i+k)=nums.at(i);
            }
            
        }
        for(int j=0;j<k;++j)
        {
            nums.at(j)=array[j];
        }
        std::cout<<"\n ====== start printf======  \n";
        for(auto temp:nums){
            std::cout<<temp<<" \n";
        }
        std::cout<<"\n"<<std::endl;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={1,2};
    vector<int> b={1,2,3,4,5};
    int k=2;
	int time_point_1=clock();
    my_solution.rotate(b,k);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：不利用辅助空间，直接使用数组转置和两个分数组转置，实现两个数组位置的交换，复杂度为O(n)
//基本优质解答都在上面了，思路是一样的,但是代码有所区别，这个是leetcode的锅
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= nums.size();
        reverse(nums, 0, n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);

    }
    
    void reverse(vector<int>& nums, int begin, int end){
        while(begin < end)
        {
            int temp = nums[begin];
            nums[begin]=nums[end];
            nums[end]=temp;
            begin++;
            end--;
        }
    }
};

思路二：使用环形翻转

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        int size = nums.size();
        if (size == k)
        {
            return;
        }
        k %= size; 
        //方案（1）效率不高，时间复杂度o(kn)
       // while (0 < k--)
       // {
        //    int temp = nums[size - 1];
        //    for (int i = size -2; i >= 0; i--)
         //   {
          //      nums[i + 1] = nums[i];
         //   }
          //  nums[0] = temp;
       // }
        //方案二，向量元素逆转,时间复杂度o(n)，空间复杂度o(1)
       // arr_inverse(nums,0,size - 1);
        //arr_inverse(nums,0,k - 1);
        //arr_inverse(nums,k,size - 1);  
        //方案三，环形翻转
        int count = 0;
        int start = 0;
        int current = 0;
        int prep = 0;
        int temp = 0;
        int i=0;
        while (count < size)
        {
            prep = nums[start];
            //这里主要是将之间的数字进行交换
            do
            {
                current = (current + k) % size;
                temp = nums[current];
                nums[current] = prep;
                prep = temp;
                count++;
                ++i;
            }while (start != current);
            start++;
            current++;
        }
    }
    void arr_inverse(vector<int>& nums, int lo, int hi)
    {
        while (lo < hi)
        {
            swap(nums[lo], nums[hi]);
            lo++;
            hi--;
        }
    }
};

*/
