/* 
data-time 2020-02-15 16:23:56


题目描述:

面试题 17.14. 最小K个数

设计一个算法，找出数组中最小的k个数，并从小到大排序后输出。

示例：

输入： arr = [1,3,5,7,2,4,6,8], k = 4
输出： [1,2,3,4]

提示：

    0 <= len(arr) <= 100000
    0 <= k <= min(100000, len(arr))

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/smallest-k-lcci
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 

主要思路：1.使用优先队列，取第k个

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
    vector<int> smallestK(vector<int>& arr, int k) {
         if(arr.size()<k||k<1) return {};
        vector<int> result(k,0);
        std::priority_queue<int> temp_queue;
        //循环遍历进行添加 
        for(int i=0;i<arr.size();++i){
            if(temp_queue.size()<k){
                temp_queue.push(arr[i]);
            }else if(arr[i]<temp_queue.top()){
                temp_queue.pop();
                temp_queue.push(arr[i]);
            }
        }
        for(int i=0;i<k;++i){
            result[i]=temp_queue.top();
            temp_queue.pop();
        }
        return result;
    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    int test_int=1; 
    uint32_t test_3=1;
	int time_point_1=clock();
    auto result=my_solution.smallestK(vector_temp,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
优质解答:1.直接排序然后返回
class Solution { 
public: 
    vector<int> smallestK(vector<int>& A, int k) { 
        sort(A.begin(),A.end()); 
        vector<int> Ans; 
        for (int i=0;i<k;++i) 
            Ans.push_back(A[i]);
        return Ans; 
    } 
}; 

作者：LighTcml
链接：https://leetcode-cn.com/problems/smallest-k-lcci/solution/pai-xu-by-lightcml/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


官方题解：

https://leetcode-cn.com/problems/total-hamming-distance/solution/yi-ming-ju-chi-zong-he-by-leetcode/
优质解析：
https://leetcode-cn.com/problems/total-hamming-distance/solution/wei-yun-suan-by-autuanliu/
*/