/* 
data-time 2020-03-22 15:55:06


题目描述:

945. 使数组唯一的最小增量

给定整数数组 A，每次 move 操作将会选择任意 A[i]，并将其递增 1。

返回使 A 中的每个值都是唯一的最少操作次数。

示例 1:

输入：[1,2,2]
输出：1
解释：经过一次 move 操作，数组将变为 [1, 2, 3]。
示例 2:

输入：[3,2,1,2,1,7]
输出：6
解释：经过 6 次 move 操作，数组将变为 [3, 4, 1, 2, 5, 7]。
可以看出 5 次或 5 次以下的 move 操作是不能让数组的每个值唯一的。
提示：

0 <= A.length <= 40000
0 <= A[i] < 40000

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-increment-to-make-array-unique
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。



/*

主要思路：
先排序，遍历数组，如果当前元素小于等于前一个元素，就将其变为前一个元素+1
相当于将数组线性化，不需要考虑是谁添加了，因为总增量是一定的
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
    int minIncrementForUnique(vector<int>& A) {
        int res=0;
        sort(A.begin(),A.end());
        for(int i=1;i<A.size();++i){
            if(A[i]<=A[i-1]){
                res+=A[i-1]+1-A[i];
                A[i]=A[i-1]+1;
            }
        }
        return res;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<int> vector_temp2={2,5,6};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.minIncrementForUnique(vector_temp2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用了pre记录前值。避免了重复计算
class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int ret = 0;
        if(A.size() < 2)
            return 0;
        sort(A.begin(),A.end());
        int pre = A[0];
        for(int i = 1; i < A.size(); i++){
            if(A[i] <= pre){
                ret += (pre + 1 - A[i]);
                pre += 1;
            }
            else
                pre = A[i];
        }
        return ret;
    }
};
//优质解答2:统计所有的重复数字

class Solution {
public:
    int minIncrementForUnique(vector<int>& A) {
        int n[50000] = {0};
        int len = A.size();
        for (auto e : A) ++n[e];
        int move = 0;
        for (int i = 0; i < 50000; i++) {
            if (n[i] <= 1) {
                continue;
            }
            move += n[i] - 1;//增加需要更改的值
            n[i + 1] += n[i] - 1;//将后一个值设置为前一个值的-1；表示将剩余的重复数字后移
        }
        return move;
    }
};

//官方题解:
https://leetcode-cn.com/problems/minimum-increment-to-make-array-unique/solution/shi-shu-zu-wei-yi-de-zui-xiao-zeng-liang-by-leet-2/
//优质解析:

https://leetcode-cn.com/problems/minimum-increment-to-make-array-unique/solution/ji-shu-onxian-xing-tan-ce-fa-onpai-xu-onlogn-yi-ya/
*/