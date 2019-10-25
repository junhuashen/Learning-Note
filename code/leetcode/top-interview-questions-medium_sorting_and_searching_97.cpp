/* 
data-time 2019-10-22 13:48:56


题目描述:

前 K 个高频元素

给定一个非空的整数数组，返回其中出现频率前 k 高的元素。

示例 1:

输入: nums = [1,1,1,2,2,3], k = 2
输出: [1,2]
示例 2:

输入: nums = [1], k = 1
输出: [1]
说明：

你可以假设给定的 k 总是合理的，且 1 ≤ k ≤ 数组中不相同的元素的个数。
你的算法的时间复杂度必须优于 O(n log n) , n 是数组的大小。


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/50/sorting-and-searching/97/

主要思路：1. 使用set存储数值和其出现频率。并使用插入排序法，只保留前5个数。进行排序，然后统计其数量，大于其就添加进去，当数量大于5时就比较数目的大小，来更新最小值。
            时间复杂度O(nlog(n)+n+k);空间复杂度O(5);
        2. 
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
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
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<std::pair<int,int>> result(k);
        //排序统计
        sort(nums.begin(), nums.end());
        int temp_key=NULL;
        for(int i=0;i<nums.size();){
            temp_key=nums[i];
            int count=0;
            while(i<nums.size()&&nums[i]==temp_key){
                ++count;
                ++i;
            }
            //找寻元素中比它小的第一个值
            for(int j=0;j<k; ++j){
                if(result[j].second<=count){
                    result.insert(result.begin()+j,std::make_pair(temp_key,count));
                    break;
                }
            }
            
        }
        vector<int> result2;
        for(int m=0;m<k;m++){
            result2.push_back(result[m].first);
        }
        
        return result2;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1,2,2,3};
    vector<int> vector_temp2={1,2};
  
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.topKFrequent(vector_temp2,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/sort-colors/solution/yan-se-fen-lei-by-leetcode/

//优质解答：unordered_map存储所有可能的值，计算频率；再将其插入vector中，对其进行排序；输出最终值
时间复杂度O(2n+n*log(n)) 空间复杂度O(n)

typedef pair<int, int> PAIR;  
int cmp(const PAIR &x, const PAIR &y)  
{  
    return x.second > y.second;  
}

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int , int> temp;
        vector <int>result;
        for(unsigned int i = 0; i < nums.size(); ++i )
        {
            temp[nums[i]]++;
        }
        
       vector <PAIR>pair_src;

      for (unordered_map<int,int>::iterator it = temp.begin();it != temp.end(); ++it )
      {
           pair_src.push_back(make_pair((*it).first,(*it).second));
      }
      
       sort(pair_src.begin(), pair_src.end(), cmp);  
       
       for(unsigned j =0; j < k; ++ j)
       {
           result.push_back(pair_src[j].first);
       }
        
        return result;
        
        
        
        
    }
};



//优质解答2 ：使用优先队列代替队列进行添加；每次添加后直接取出最后一个不符合要求的

时间复杂度O(n(n-1)/2) 空间复杂度O(2)
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> m;
        for(auto&e : nums) {
            m[e]++;
        }
        //注意这里的队列是使用的升序，因此最小值在最后--数字小的优先级更高
        priority_queue<pair<int, int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;

        for(auto&e : m) {
            pq.push({e.second, e.first}); 
            if(pq.size() > k) {
                pq.pop();
            }
        }
        
        vector<int> res;
        while(!pq.empty()) {
            res.push_back(pq.top().second);
            pq.pop();
        }
        
        return res;
    }
};
//优质解答4：使用快速排序。对vector进行了排序

时间复杂度O(2*n*log(n)) 空间复杂度O(n);

class FreqNode {
public: 
    int val;
    int freq;
};
//二分查找对应的值
int partation(vector<FreqNode> &vecFreq, int begin, int end)
{

    FreqNode pivot = vecFreq[begin];
    //进行一次快排
    while (begin < end) {
        while (begin < end && vecFreq[end].freq >= pivot.freq) {
            end--;
        }
        vecFreq[begin] = vecFreq[end];
        
        while (begin < end && vecFreq[begin].freq <= pivot.freq) {
            begin++;
        }
        
        vecFreq[end] = vecFreq[begin];
    }
    //重新设置值
    vecFreq[begin] = pivot;
    //返回最后指针位置
    return begin;
}


class Solution {

    public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqMap;
        
        int i;
        //统计各个数的频率
        for (i = 0; i < nums.size(); i++) {
            freqMap[nums[i]]++;
        }
        //创建结构体
        vector<FreqNode> vecFreq;
        unordered_map<int, int>::iterator iter = freqMap.begin();
        //遍历整个无序map
        for (; iter != freqMap.end(); iter++) {
            FreqNode tmp;
            tmp.val = iter->first;
            tmp.freq = iter->second;
            vecFreq.push_back(tmp);
        }
        
        int begin = 0;
        int end = vecFreq.size() - 1;
        int len = vecFreq.size();
        //需要舍弃的量
        int nk = len - k;
        //设计步长
        int gard = (nk == 0) ? 1: nk;
        //printVecFreq(vecFreq);
        do {
            //快速排序后begin位置，即begin指针移动的次数
            int pos = partation(vecFreq, begin, end);
            //printf(" ---- %d\n", pos);
            //printVecFreq(vecFreq);
            //刚好等于差值，直接返回
            if (pos == gard-1) {
                break;
            //不同begin+1,继续排序；就是快排
            } else if (pos < gard-1) {
                begin = pos + 1;
            } else {
                end = pos - 1;
            }
        } while(1);
        
        vector<int> res;
        //printf("nk = %d\n", nk);
        for (i = nk; i < len; i++) {
            res.push_back(vecFreq[i].val);
        }
        return res;
    }
};
//官方解答：https://leetcode-cn.com/problems/top-k-frequent-elements/solution/qian-k-ge-gao-pin-yuan-su-by-leetcode/

//优质解答5：使用hash表统计次数

class Solution {
public:
    vector<int> topKFrequent(const vector<int> &nums, int k) {
        unordered_map<int, int> count;
        for (auto num : nums)
            count[num]++;
        using value_t = pair<int, int>;
        vector<value_t> container(count.begin(), count.end());
        auto comp = [](const value_t &v1, const value_t &v2) {return v1.second < v2.second;};
        //比较并排序
        make_heap(container.begin(), container.end(), comp);
        vector<int> result;
        for (int i = 0; i < k; ++i) {
            result.push_back(container.begin()->first);
            pop_heap(container.begin(), container.end() - i, comp);
        }
        return result;
    }
};

*/