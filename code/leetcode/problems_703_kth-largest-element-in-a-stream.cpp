/* 
data-time 2020-02-15 16:23:56


题目描述:

703. 数据流中的第K大元素

设计一个找到数据流中第K大元素的类（class）。注意是排序后的第K大元素，不是第K个不同的元素。

你的 KthLargest 类需要一个同时接收整数 k 和整数数组nums 的构造器，它包含数据流中的初始元素。每次调用 KthLargest.add，返回当前数据流中第K大的元素。

示例:

int k = 3;
int[] arr = [4,5,8,2];
KthLargest kthLargest = new KthLargest(3, arr);
kthLargest.add(3);   // returns 4
kthLargest.add(5);   // returns 5
kthLargest.add(10);  // returns 5
kthLargest.add(9);   // returns 8
kthLargest.add(4);   // returns 8

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/kth-largest-element-in-a-stream
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 

主要思路：1. 使用标准库的优先队列；即一个大小为k的堆即可
        时间复杂度O(nlogn);空间复杂度O(n);
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
class KthLargest {
    //小顶堆
    priority_queue<int, vector<int>, greater<int> > smallHeap;
    int k;
public:
    KthLargest(int k, vector<int>& nums) {
        this->k = k;
        for (auto num:nums) {
            add(num);
        }
        
    }
    
    int add(int val) {
        if (smallHeap.size() < k) {
            smallHeap.push(val);
        }else if(val > smallHeap.top()){
            smallHeap.pop();
            smallHeap.push(val);
        }
        return smallHeap.top();
    }
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
     KthLargest my_solution(3,vector_temp);
    int test_int=1; 
    uint32_t test_3=1;
	int time_point_1=clock();
    auto result=my_solution.add(3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

优质解答1：思路相同代码更加简洁
class KthLargest {
public:
    priority_queue<int, vector<int>, greater<int> > minHeap_;
    int k_;
    KthLargest(int k, vector<int>& nums) {
        k_ = k;
        for(int& n : nums) {
            minHeap_.push(n);
            if(minHeap_.size() > k_) minHeap_.pop();
        }
    }
    
    int add(int val) {
        minHeap_.push(val);
        if(minHeap_.size() > k_) minHeap_.pop();
        return minHeap_.top();
    }
};
//优质解答2： 使用multiset更加快速的判断
官方题解：
class KthLargest {
    int K = 0;
    multiset<int> st;

public:
    KthLargest(int k, vector<int>& nums) {
        for (int n : nums) 
        {
            st.insert(n);
            if (st.size() > k) 
                st.erase(st.begin());
        }       
        K = k;
        
    }
    
    int add(int val) {
        st.insert(val);
        if (st.size() > K) 
            st.erase(st.begin());
        return *st.begin();
    }
};
//优质解答3：s使用优先队列
class KthLargest {
private:
	int l;
	priority_queue<int, vector<int>, greater<int>> q;//使用优先队列,小顶堆
public:
    KthLargest(int k, vector<int>& nums) {
		l = k;
		for (int n : nums){//遍历该集合
			add(n);
		}
    }
    
    int add(int val) {
        if (q.size() < l){//若优先队列的长度小于l，则加入队列
			q.push(val);
		}else if (q.top() < val){//若队首小于该变量则入队
			q.pop();
			q.push(val);
		}
		
		return q.top();
    }
};

官方题解：

优质解析：
https://leetcode-cn.com/problems/kth-largest-element-in-a-stream/solution/shu-ju-liu-zhong-de-di-kda-yuan-su-by-gpe3dbjds1/
*/