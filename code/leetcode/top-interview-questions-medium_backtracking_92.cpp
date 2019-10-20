/* 
data-time 2019-10-20 17:35:56


题目描述:

生成括号

给出 n 代表生成括号的对数，请你写出一个函数，使其能够生成所有可能的并且有效的括号组合。

例如，给出 n = 3，生成结果为：

[
  "((()))",
  "(()())",
  "(())()",
  "()(())",
  "()()()"
]

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/49/backtracking/92/


主要思路：1.因为存在的可能性是2^(2*n)次方中可能性，可以强制暴力遍历所有可能性；当成功时就添加到结果中。这里主要是一个二叉树的遍历
            同时利用左右括号的对称性，动态添加条件来缩小范围。
            使用递归的方法可以实现所有的遍历
        时间复杂度O(2^n);空间复杂度O(n)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <map>
#include <stack>
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
    void checkParenthesis(string temp,int left,int right){
        if(left==0&&right==0){
            result.push_back(temp);
        }
        if(left>0){
            checkParenthesis(temp+"(",left-1,right);
        }
        //注意这里当两边不平衡时需要添加一个right
        if(left<right){
            checkParenthesis(temp+")",left,right-1);
        }
    }
    vector<string> generateParenthesis(int n) {
        checkParenthesis("(",n-1,n);
        return result;
    }
    vector<string> result;
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<vector<char > > grid={
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'},
        {'1','1','1','1','1'}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.generateParenthesis(5);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
https://leetcode-cn.com/problems/generate-parentheses/solution/gua-hao-sheng-cheng-by-leetcode/


//优质解答1：思路基本相同，不过是正向考虑，做了一下提前返回优化

时间复杂度O(4^n);空间复杂度O(n)

class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> vec;
        if(n==1){res.push_back("()");return res; }
        getThesis(vec,0,0,n,"");
        return vec;
    }
    void getThesis(vector<string> &vec,int begin,int end,int n,string str)
    {
        if(begin+end==n*2)
        {
            vec.push_back(str);
            return;
        }
        if(begin<n)
            getThesis(vec,begin+1,end,n,str+"(");
        if(begin>end)
            getThesis(vec,begin,end+1,n,str+")");
    }
};
//优质解答2：思路相同不过做了提前返回。
时间复杂度
class Solution {
public:
    void helper(int left, int right, string tmp, vector<string> &result) {
        if (left == 0 && right == 0) {
            result.push_back(tmp);
            return;
        }
        //这里超出范围直接返回
        if (left>right || left<0 || right<0)  //左括号用的比右括号少
            return ;
      
        helper(left-1, right, tmp+'(', result);
        helper(left, right-1, tmp+')', result);
        
    }
    vector<string> generateParenthesis(int n) {
        vector<string>result;
        helper(n,n, "", result);
        return result;
    }
};
方法三：闭合数
思路

为了枚举某些内容，我们通常希望将其表示为更容易计算的不相交子集的总和。

考虑有效括号序列 S 的 闭包数：至少存在 index >= 0，使得 S[0], S[1], ..., S[2*index+1]是有效的。 显然，每个括号序列都有一个唯一的闭包号。 我们可以尝试单独列举它们。

算法

对于每个闭合数 c，我们知道起始和结束括号必定位于索引 0 和 2*c + 1。然后两者间的 2*c 个元素一定是有效序列，其余元素一定是有效序列。

作者：LeetCode
链接：https://leetcode-cn.com/problems/generate-parentheses/solution/gua-hao-sheng-cheng-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
class Solution {
    public:
    vector<string> generateParenthesis(int n) {
        vector<string> result;
        if(n==0){
            result.push_back("");
        }else{
            //遍历每一次,设置左右界限
            for(int i=0;i<n;++i){
                //查找左边符合符序列
                vector<string> left_result=generateParenthesis(i);
                for(int j=0;j<left_result.size();++j){
                    vector<string> right_result=generateParenthesis(n-i-1);
                    for(int k=0;k<right_result.size();++k){
                        //注意这里添加左右节点
                        result.push_back("("+left_result[j]+")"+right_result[k]);
                    }
                }
            }
        }
        return result;
    }

};
*/
