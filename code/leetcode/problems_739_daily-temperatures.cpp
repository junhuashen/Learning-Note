/* 
data-time 2020-04-06 21:22:56


题目描述:
739. 每日温度

给你一个整数数组 nums，请你将该数组升序排列。

 

根据每日 气温 列表，请重新生成一个列表，对应位置的输出是需要再等待多久温度才会升高超过该日的天数。如果之后都不会升高，请在该位置用 0 来代替。

例如，给定一个列表 temperatures = [73, 74, 75, 71, 69, 72, 76, 73]，你的输出应该是 [1, 1, 4, 2, 1, 1, 0, 0]。

提示：气温 列表长度的范围是 [1, 30000]。每个气温的值的均为华氏度，都是在 [30, 100] 范围内的整数。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/daily-temperatures
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*
主要思路:
1. 先暴力破解；直接向后查找，高于其的温度，找到就返回
时间复杂度O(n^2);空间复杂度O(1);
2. 使用倒叙的方式，
因为其记录大于他的最近值
因此对于res[i]有
T[i]<T[i+1] res[i]=1
T[i]>T[i+1] res[i]=0
3. 使用单调栈，
建立一个单调递减的栈，如果比栈顶大，就将栈顶的所有元素取出，并更新res；
如果小，就加入到栈中
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <stack>
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
    vector<int> dailyTemperatures1(vector<int>& T) {
         int len=T.size();
        if(len==0) return {};
        vector<int> res(len,0);
        
        res[len-1]=0;
        if(len<=1) return res;
        //暴力
        for(int i=len-2;i>=0;--i){
            int key=T[i];
            bool is_get=false;
            //遍历查找所有可能
            for(int j=i+1;j<T.size();j+=res[j]){
                if(T[i]<T[j]){
                    res[i]=j-i;
                    break;
                }else if(res[j]==0){
                    res[i]=0;
                    break;
                }
            }

        }
        return res;
    }
    vector<int> dailyTemperatures(vector<int>& T){
          int len=T.size();
        if(len==0) return {};
        vector<int> res(len,0);
        res[len-1]=0;
        if(len<=1) return res;
        stack<int> d_stack;
        d_stack.push(0);
        for(int i=1;i<len;++i){
            if(!d_stack.empty()){
              while((!d_stack.empty())&&T.at(d_stack.top())<T[i]){
                  int idx=d_stack.top();
                  res[idx]=i-idx;
                  d_stack.pop();
              }
            }
            d_stack.push(i);
        }
        return res;
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
    auto result=my_solution.dailyTemperatures(vector_temp2);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:代码更加简洁

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        vector<int> days(T.size(), 0);
        stack<int> tmpS;

        for (int i = 0; i < T.size(); i++) {
            while (!tmpS.empty() && T[tmpS.top()] < T[i]) {
                int index = tmpS.top();
                days[index] = i-index;
                tmpS.pop();
            }

            tmpS.push(i);
        }

        return days;
    }
};


//官方题解:
https://leetcode-cn.com/problems/daily-temperatures/solution/mei-ri-wen-du-by-leetcode/
//优质解析:
https://leetcode-cn.com/problems/daily-temperatures/solution/leetcode-tu-jie-739mei-ri-wen-du-by-misterbooo/

*/