/* 
data-time 2020-03-07 14:15:56


题目描述:

225. 用队列实现栈

使用队列实现栈的下列操作：

push(x) -- 元素 x 入栈
pop() -- 移除栈顶元素
top() -- 获取栈顶元素
empty() -- 返回栈是否为空
注意:

你只能使用队列的基本操作-- 也就是 push to back, peek/pop from front, size, 和 is empty 这些操作是合法的。
你所使用的语言也许不支持队列。 你可以使用 list 或者 deque（双端队列）来模拟一个队列 , 只要是标准的队列操作即可。
你可以假设所有操作都是有效的（例如, 对一个空的栈不会调用 pop 或者 top 操作）。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/implement-stack-using-queues
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
/*
主要思路:直接使用两个队列，每次取出时，将一个队列中的前n-1个元素都转移到另外一个；
取出最后一个
交换两个队列
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
#include <memory>

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
class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }
    
    /** Push element x onto stack. */
    void push(int x) {
        q1.push(x);
    }
    
    /** Removes the element on top of the stack and returns that element. */
    int pop() {
        int temp;
        while(q1.size()>1){
            temp=q1.front();
            q1.pop();
            q2.push(temp);
        }
        temp=q1.front();
        q1.pop();
        swap(q1,q2);
        return temp;
    }
    
    /** Get the top element. */
    int top() {
        return q1.back();
    }
    
    /** Returns whether the stack is empty. */
    bool empty() {
        return q1.empty();
    }
    queue<int > q1;
    queue<int>  q2;
};

int main(int argc, char const *argv[]) {
     MyStack my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,0,-1,0,-2,2};
    vector<int> vector_temp2={-3,-2,-1,0,0,1,2,3};
    vector<vector<char> > temp={
        {'1','0' ,'1','0','0'},
        {'1','0', '1', '1' ,'1'},
        {'1','1' ,'1' ,'1' ,'1'},
        {'1','0' ,'0', '1','0'}
    };
	int time_point_1=clock();
    my_solution.push(1);
    my_solution.push(2);
    my_solution.top();
    my_solution.pop();
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：完全相同
class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size()==0) return 0;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int maxlen=0;
        vector<vector<int>> dp(rows,vector<int>(cols));
        for(int i=0;i<rows;i++){
            dp[i][0]=matrix[i][0]-'0';
            maxlen=max(maxlen,dp[i][0]);
        }
        for(int i=0;i<cols;i++){
            dp[0][i]=matrix[0][i]-'0';
            maxlen=max(maxlen,dp[0][i]);
        }
        for(int i=1;i<rows;i++){
            for(int j=1;j<cols;j++){
                if(matrix[i][j]=='1'){
                    dp[i][j]=min(min(dp[i-1][j],dp[i][j-1]),dp[i-1][j-1])+1;
                    maxlen=max(maxlen,dp[i][j]);
                }
            }
        }
        return maxlen*maxlen;
    }
};



//官方题解：
https://leetcode-cn.com/problems/maximal-square/solution/zui-da-zheng-fang-xing-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/maximal-square/solution/c-er-wei-dong-tai-gui-hua-liang-ge-zhuang-tai-geng/
https://leetcode-cn.com/problems/maximal-square/solution/li-jie-san-zhe-qu-zui-xiao-1-by-lzhlyle/
*/