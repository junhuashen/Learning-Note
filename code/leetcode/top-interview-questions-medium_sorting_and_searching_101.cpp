/* 
data-time 2019-10-27 12:34:56


合并区间

给出一个区间的集合，请合并所有重叠的区间。

示例 1:

输入: [[1,3],[2,6],[8,10],[15,18]]
输出: [[1,6],[8,10],[15,18]]
解释: 区间 [1,3] 和 [2,6] 重叠, 将它们合并为 [1,6].
示例 2:

输入: [[1,4],[4,5]]
输出: [[1,5]]
解释: 区间 [1,4] 和 [4,5] 可被视为重叠区间。

主要思路：1. 先对输入的第一个数进行递增排序，然后对每个数组进行遍历查找，小于左边边界的数，左值大于右值时就进行合并并，将其进行设置访问位为true，并查找对应的右边界最大值。
            然后对多个变量进行合并
            时间复杂度O(nlog(n)+n);空间复杂度O(n);
        2.  根据条件分别查找两次左边界节点和右边界节点。
            左边界节点mid-1!=taget;右边界节点mid+1!=target;
            时间复杂度O(2log(n));空间复杂度O(1);
        
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
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function

class Solution {
public:
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::sort(intervals.begin(),intervals.end(),compare);
        vector<vector <int>> result;
        vector<bool> isCheck(intervals.size(),true);

        for(int i=0;i<intervals.size();++i){
            if(!isCheck[i]) continue;
            int left=intervals[i][0];
            int right=intervals[i][1];
            for(int j=i+1;j<intervals.size();++j){
                //j没有被合并
                if(isCheck[j]){
                    //检查是否有重叠
                    if(right>=intervals[j][0]){
                        isCheck[j]=false;
                        right=right>intervals[j][1]?right:intervals[j][1];
                    }
                }
            }
            result.push_back({left,right});
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,1,1,2,2,3};
    vector<int> vector_temp2={2,2};
    vector<vector <int>> temp_vector={{1,3},{2,6},{8,10},{15,18}};
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.merge(temp_vector);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/find-peak-element/solution/xun-zhao-feng-zhi-by-leetcode/

//优质解答1：和思路二相同，而且更加优化
时间复杂度O(log(n)+n) 空间复杂度O(0)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        int len = intervals.size();
        vector<vector<int>> ans;
        //先进行一次排序
        sort(intervals.begin(), intervals.end());
        for (int i = 0; i < len;i) {
            int next = i + 1;
            while (next < len) {
                //如果左边界在下一个的边界区间内
                if (intervals[i].back() >= intervals[next][0] && intervals[i].back() <= intervals[next].back()) {
                    //更新边界
                    intervals[i].back() = intervals[next].back();
                    next++;
                    //否则不更新
                } else if (intervals[i].back() > intervals[next].back()){
                    next++;
                } else {
                    break;
                }
            }
            //添加新边界
            ans.push_back(intervals[i]);
            //更新i
            i = next;
        }
        return ans;
    }
};

//优质解答2 :先查找左节点，再顺序查找右节点
时间复杂度O(log(n)+k) ；空间复杂度O(0);
bool myfunction (vector<int> &i, vector<int> &j) { return (i[0]<j[0]); }

class Solution {
public:
    vector<vector<int>>  result;
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.size() <= 1) {
            return intervals;
        }
        
      //  sort_all_fileds(intervals);
        sort(intervals.begin(), intervals.end(), myfunction);
        result.push_back(intervals[0]);
        vector<int> last;
        for (int i = 1; i < intervals.size(); i++) {
            //或者栈顶值
            last = result.back();  
            //cur在当前范围内，直接下一个
            if (last[1] >= intervals[i][1]) {  // cur在last 中

            } else if (last[1] < intervals[i][0]) { // 完全没有重叠区域，压栈cur
                result.push_back(intervals[i]);
            } else {//存在重叠区域，更新对应值
                result[result.size()-1][1] = intervals[i][1];
            }

        }
        return result;
    }
};

//优质解答3：和思路二算法一样；不过更新动态更新最大最小值，这样减少了不必要的访问。
时间复杂度O(log(n)+n);空间复杂度O(0);

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> v;
        if(intervals.size()==0)return v;
        sort(intervals.begin(),intervals.end(),Solution::compare);
        for(int i=1 ;i<intervals.size();i++)
        {
            if(intervals[i][0]>intervals[i-1][1])
            {
                v.push_back(intervals[i-1]);
                continue;
            }
            intervals[i]={min(intervals[i][0],intervals[i-1][0]),max(intervals[i][1],intervals[i-1][1])};
        }
        v.push_back(intervals.back());
        return v;
    }
private:
    static bool compare(const vector<int>& i,const vector<int>& j)
    {
        return i[0]<j[0];
    }
};

官方题解:

https://leetcode-cn.com/problems/merge-intervals/solution/he-bing-qu-jian-by-leetcode/
*/