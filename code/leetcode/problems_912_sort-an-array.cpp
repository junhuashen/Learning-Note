/* 
data-time 2020-03-30 21:22:56


题目描述:
912. 排序数组

给你一个整数数组 nums，请你将该数组升序排列。

 

示例 1：

输入：nums = [5,2,3,1]
输出：[1,2,3,5]
示例 2：

输入：nums = [5,1,1,2,0,0]
输出：[0,0,1,1,2,5]
 

提示：

1 <= nums.length <= 50000
-50000 <= nums[i] <= 50000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-an-array
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路:
使用快速排序

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
    vector<int> sortArray(vector<int>& nums) {
        /* 使用快速排序 */
        //quickSort(0,nums.size()-1,nums);
        QuickSort(nums,0,nums.size()-1);
        return nums;
    }
    void QuickSort(vector<int>& nums,int start,int end){
        if(start<0||end>=nums.size()||start>=end){
            return ;
        }
        int left=start,right=end;
        int key=nums[left];
        while(left<right){
            /* 注意这里使用第一个做哨兵，因此先查找第一个小于它的值
               当哨兵刚好为最大值或者最小值时，
               让右边提前指向哨兵节点，结束左边的排序
               否则两边都指向第一个大于key的值，右指针就不继续向右了
               造成右边不能有序
               同理，最左作为哨兵时，因该先使用左指针，防止左边不能有序
             */
            /* 指向一个小于key的 */
            while(nums[right]>=key&&left<right){
                --right;
            }
            /* 指向第一个大于key的 */
            while(nums[left]<=key&&left<right){
                ++left;
            }
            
            if(left<right){
                swap(nums[left],nums[right]);
            }
            
        }
        nums[start]=nums[left];
        nums[left]=key;
        QuickSort(nums,start,left-1);
        QuickSort(nums,left+1,end);
        return ;
    }
    //快速排序（从小到大）
void quickSort(int left, int right, vector<int>& arr)
{
	if(left >= right)
		return;
	int i, j, base, temp;
	i = left, j = right;
	base = arr[left];  //取最左边的数为基准数
	while (i < j)
	{
		while (arr[j] >= base && i < j)
			j--;
		while (arr[i] <= base && i < j)
			i++;
		if(i < j)
		{
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	//基准数归位
	arr[left] = arr[i];
	arr[i] = base;
	quickSort(left, i - 1, arr);//递归左边
	quickSort(i + 1, right, arr);//递归右边
}

};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<char>> temp_char=
    {
        {'.','.','.','.','.','.','.','.'},
        {'.','p','p','p','p','p','.','.'},
        {'.','p','p','B','p','p','.','.'},
        {'.','p','B','R','B','p','.','.'},
        {'.','p','p','B','p','p','.','.'},
        {'.','p','p','p','p','p','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'}

    };
    vector<int> vector_temp2={5,1,1,2,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.sortArray(vector_temp2);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:使用堆排序

class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
          int len=nums.size();
          heap_sort(nums,len);
          return nums;
    }
    void swp(int &a,int &b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    //创建大堆根
    void max_heapify(vector<int>& arr,int start,int end)
    {
        int dad=start;
        //设置最大中断；因为满二叉树的性质，子节点必定是父节点index的两倍+1；
        //因为下一层的节点数必定为层数的倍数
        int son=dad*2+1;
        while(son<=end)
        {
            //查找左右子节点中的最大节点
            if(son+1<=end&&arr[son]<arr[son+1])  son++;
            if(arr[dad]>arr[son]){
                return; //父节点全部大于子节点直接返回
            }else{
                //将父节点和最大的子节点进行交换
                swp(arr[dad],arr[son]);
                //递归处理剩下的节点
                dad=son;
                son=dad*2+1;
            }
        }
    }
    //进行堆排序
    void heap_sort(vector<int>& arr, int len)
    {
        //对0-len/2-1的所有的数，进行堆排序，
        for(int i=len/2-1;i>=0;i--) max_heapify(arr,i,len-1);
        //对前i个数进行堆排序
        for(int i=len-1;i>=0;i--)
        {
            swp(arr[0],arr[i]);
            max_heapify(arr,0,i-1);
        }
    }
};
//优质解答2：快速排序，代码更加简洁

class Solution {
    int partition(vector<int>& nums, int l, int r) {
        int pivot = nums[r];
        int i = l - 1;
        //使用选择排序的方式，找到小于的依次交换排列
        for (int j = l; j <= r - 1; ++j) {
            if (nums[j] <= pivot) {
                i = i + 1;
                swap(nums[i], nums[j]);
            }
        }
        swap(nums[i + 1], nums[r]);
        return i + 1;
    }
    int randomized_partition(vector<int>& nums, int l, int r) {
        int i = rand() % (r - l + 1) + l; // 随机选一个作为我们的主元
        swap(nums[r], nums[i]);
        return partition(nums, l, r);
    }
    void randomized_quicksort(vector<int>& nums, int l, int r) {
        if (l < r){
            int pos = randomized_partition(nums, l, r);
            randomized_quicksort(nums, l, pos - 1);
            randomized_quicksort(nums, pos + 1, r);
        }
    }
public:
    vector<int> sortArray(vector<int>& nums) {
        srand((unsigned)time(NULL));
        randomized_quicksort(nums, 0, (int)nums.size() - 1);
        return nums;
    }
};

作者：LeetCode-Solution
链接：https://leetcode-cn.com/problems/sort-an-array/solution/pai-xu-shu-zu-by-leetcode-solution/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解:
https://leetcode-cn.com/problems/sort-an-array/solution/pai-xu-shu-zu-by-leetcode-solution/
//优质解析:
https://leetcode-cn.com/problems/sort-an-array/solution/dang-wo-tan-pai-xu-shi-wo-zai-tan-xie-shi-yao-by-s/

*/