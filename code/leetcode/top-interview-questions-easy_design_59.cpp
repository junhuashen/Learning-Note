/* 
data-time 2019-10-07 16:03:56


题目描述:

最小栈

设计一个支持 push，pop，top 操作，并能在常数时间内检索到最小元素的栈。

push(x) -- 将元素 x 推入栈中。
pop() -- 删除栈顶的元素。
top() -- 获取栈顶元素。
getMin() -- 检索栈中的最小元素。
示例:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> 返回 -3.
minStack.pop();
minStack.top();      --> 返回 0.
minStack.getMin();   --> 返回 -2.


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/24/design/59/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：使用一个辅助栈来记录最小值，当插入值小于当前值时，辅助栈插入新值，否则插入原来值。获取最小值时，直接top()辅助栈的值

*/
#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <stack>
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
class MinStack {
public:
    MinStack() {
        
    }
    
    void push(int x) {
        sub_stack.push(x);
        if(min_stack.empty()){
            min_stack.push(x);
        }else if(x<min_stack.top()){
            min_stack.push(x);
        }else{
            min_stack.push(min_stack.top());
        }
    }
    
    void pop() {
        sub_stack.pop();
        min_stack.pop();
    }
    
    int top() {
        return sub_stack.top();
    }
    
    int getMin() {
        return min_stack.top();
    }
    std::stack<int > sub_stack;
    std::stack<int > min_stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    MinStack my_solution;
    int test_int=1; 
	int time_point_1=clock();
    my_solution.push(0);
    auto result=my_solution.getMin();
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路基本完全相同，只是代码不同
class MinStack {
    stack<int> s1, m1;
public:
    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(m1.empty()) m1.push(x);
        else{
        if(x<=m1.top()) m1.push(x);
        else m1.push(m1.top());
        }
    }
    
    void pop() {
        s1.pop();
        m1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return m1.top();
    }
};
*/
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */