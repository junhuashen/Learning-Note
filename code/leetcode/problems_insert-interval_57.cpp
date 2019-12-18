/* 
data-time 2019-12-04 13:16:56


题目描述:

57. 插入区间

给出一个无重叠的 ，按照区间起始端点排序的区间列表。

在列表中插入一个新的区间，你需要确保列表中的区间仍然有序且不重叠（如果有必要的话，可以合并区间）。

示例 1:

输入: intervals = [[1,3],[6,9]], newInterval = [2,5]
输出: [[1,5],[6,9]]
示例 2:

输入: intervals = [[1,2],[3,5],[6,7],[8,10],[12,16]], newInterval = [4,8]
输出: [[1,2],[3,10],[12,16]]
解释: 这是因为新的区间 [4,8] 与 [3,5],[6,7],[8,10] 重叠。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/insert-interval
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：1. 遍历整个数组，查找输入值的存在重合区间的index-left和right.进行判断
            对于左边的，left左边界小于它，右边界大于或者等于它。
            对于右边的，right左
            如果left=right.就不执行任何操作
            left>right将left和right之间的数据进行合并。并将右边界设置为right的右边界，左边界设置为left的左边界；
        时间复杂度O(3*n);空间复杂度O(n);
        2. 将所有的数组复制到一个vector中；查找左右边界分别应该在的位置left和right.
           遍历vector两两一组，进行编队，在left和right之间的所有数组，直接跳过。直到结束
        时间复杂度O(3*n);空间复杂度O(2*n)


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
#include <string.h>
using namespace std;
#define INT_MAX INT16_MAX
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
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
		//将其插入到数组中
		intervals.push_back(newInterval);
        //进行排序
		sort(intervals.begin(), intervals.end());
        vector<vector<int>> ans{intervals[0]};
        int n = intervals.size();
        //遍历intervals每个vector
		for(int i = 0; i < n; i ++){
			//获取尾部数组，大于当前的前一个，则存在重叠部分
			if(ans.back()[1] >= intervals[i][0]){
                ans.back()[1] = max(intervals[i][1], ans.back()[1]);
                continue;
            }
            else{//否则直接添加
                ans.push_back(intervals[i]);
                continue;
            }
        }
        return ans;
        
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,5};
    vector<vector<int>> vector_temp2={
		{1,3},
		{6,9}
	};
	int time_point_1=clock();
    auto result=my_solution.insert(vector_temp2,vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：使用flag作为标志，永远只添加有序的两个向量。当存在重叠并无序时，重新设置边界条件
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
		//flag标志符
        bool flag = false;
		//遍历输入参数
        for (auto &i:intervals)
        {
			//如果flag成立或者没有重叠，直接添加
            if (flag || i[1] < newInterval[0])
                ans.push_back(i);
            else if (newInterval[1] < i[0])//否则进行判断
            {
				//如果是完全在右侧，直接添加
                ans.push_back(newInterval);
				//再将当前数组添加上去
                ans.push_back(i);
				//设置为true
                flag = true;
            }
            else//否则，存在重叠部分
            {
				//更换边界值
                newInterval[0] = min(newInterval[0],i[0]);
                newInterval[1] = max(newInterval[1],i[1]);
            }
        }
        
        if (!flag)
            ans.push_back(newInterval);
        
        return ans;
    }   
};

//优质解答2：查找左右边界，判断是否应该删除，然后进行添加
时间复杂度O(2*n) 空间复杂度O(n);
class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int l=newInterval[0],r=newInterval[1];
        int num=intervals.size();
        if(num==0){
            intervals.push_back(newInterval);
            return intervals;
        }
        vector<int> lpos(2,-1),rpos(2,-1);
        lpos[0]=num; rpos[0]=num;
		//查找左边对应的边界
        for(int i=0;i<num;i++){
			//向前查找位置
            if(l<intervals[i][0]){
				//记录index
                lpos[0]=i;
                lpos[1]=-1;
                break;
			//如果在这之间
            }else if(l<=intervals[i][1]){
                lpos[0]=i;
                lpos[1]=0;
                break;
            }
        }
		//查找右边对应的边界
        for(int i=lpos[0];i<num;i++){
            if(r<intervals[i][0]){
                rpos[0]=i;
                rpos[1]=-1;
                break;
            }else if(r<=intervals[i][1]){
                rpos[0]=i;
                rpos[1]=0;
                break;
            }
        }
		//查看边界是否符合要求，如果左边界在区间外(需要重新设置)；将左边界设置为l,否则更新左边界
        newInterval[0]=lpos[1]==-1?l:intervals[lpos[0]][0];
		//边界是否在由边界外，否则更新右边界
        newInterval[1]=rpos[1]==-1?r:intervals[rpos[0]][1];
		//判断左右边界是否合法
        if(lpos[0]<num&&lpos[0]<=rpos[0]+rpos[1]){
            //释放边界之间的值
			intervals.erase(intervals.begin()+lpos[0],intervals.begin()+rpos[0]+rpos[1]+1);
        }
		//将左边界和右边界重新插入
        intervals.insert(intervals.begin()+lpos[0],newInterval);
        return intervals;
    }
};
//优质解答3：查找左右边界进行区间合并处理。
class Solution {
public:
	vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
		int len = intervals.size();
		vector<vector<int>> ans;
		if (intervals.empty())
		{
			ans.push_back(newInterval);
			return ans;
		}
		if (newInterval.empty())
			return intervals;
		int begin;
		for (int i = 0;i < len;++i)
		{
			if (newInterval[0] > intervals[i][1])
				ans.push_back(intervals[i]);//相当于确认他不是第一个
			else
			{
				begin = i;
				break;
			}
		}
		if (begin == len)//处理新插入区间是最后一个的情况
		{
			ans.push_back(newInterval);
			return ans;
		}
		if (newInterval[0] < intervals[begin][0]&& newInterval[1]>=intervals[begin][0])
		{
			intervals[begin][0] = newInterval[0];
		}
		if(newInterval[1] > intervals[begin][1])
			intervals[begin][1] = newInterval[1];
		if (newInterval[1] < intervals[begin][0])//处理第一个区间就不能合并的情况
			ans.push_back(newInterval);
		bool flag = false;
		for (int i = begin+1;i < len;++i)
		{
			if (intervals[begin][1] >= intervals[i][0] && intervals[begin][1] < intervals[i][1])
				intervals[begin][1] = intervals[i][1];
			else if (intervals[begin][1] < intervals[i][0])
			{
				ans.push_back(intervals[begin]);
				begin = i;
				flag = true;
				break;
			}
		}
		if (!flag)
		{
			ans.push_back(intervals[begin]);
			return ans;
		}
		for(int i=begin;i<len;++i)
			ans.push_back(intervals[i]);
		return ans;
	}
};
//优质解答4：进行合并优化
class Solution {
public:
    vector<vector<int> > insert(vector<vector<int> > &A, vector<int> &a) {
		vector<vector<int> > v;
		auto i=A.begin();
		for(; i!=A.end() && a[0]>(*i)[1]; v.push_back(*i++));
		for(; i!=A.end() && a[1]>=(*i)[0]; ++i)
			a={min(a[0],(*i)[0]), max(a[1],(*i)[1])};
		v.push_back(a);
		v.insert(v.end(),i,A.end());
		return v;
    }
};

作者：joy-teng
链接：https://leetcode-cn.com/problems/insert-interval/solution/xin-jian-shu-zu-tian-jia-by-joy-teng/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//优质解答4：直接在原数组中就地合并.二分查找找到需要合并的起始位置,然后就地合并,删除已经合并的区间,插入合并后的单个区间.
class Solution {
	static bool comp(const vector<int> &a, const vector<int> &b){
		return a[1]<b[0];
	}
public:
	vector<vector<int> > insert(vector<vector<int> > &A, vector<int> &a) {
		int i=lower_bound(A.begin(),A.end(),a,comp)-A.begin(), j=0;
		for(j=i; j<A.size() && a[1]>=A[j][0]; ++j)
			a={min(a[0],A[j][0]), max(a[1],A[j][1])};
		A.insert(A.begin()+j,a);
		A.erase(A.begin()+i, A.begin()+j);
		return A;
	}
};

作者：joy-teng
链接：https://leetcode-cn.com/problems/insert-interval/solution/xin-jian-shu-zu-tian-jia-by-joy-teng/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。


//官方题解：

//优质解析：
https://leetcode-cn.com/problems/insert-interval/solution/xin-jian-shu-zu-tian-jia-by-joy-teng/

*/