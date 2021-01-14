/* 
data-time 2021-01-14 21:22:56

1018. 可被 5 整除的二进制前缀

给定由若干 0 和 1 组成的数组 A。我们定义 N_i：从 A[0] 到 A[i] 的第 i 个子数组被解释为一个二进制数（从最高有效位到最低有效位）。

返回布尔值列表 answer，只有当 N_i 可以被 5 整除时，答案 answer[i] 为 true，否则为 false。

 

示例 1：

输入：[0,1,1]
输出：[true,false,false]
解释：
输入数字为 0, 01, 011；也就是十进制中的 0, 1, 3 。只有第一个数可以被 5 整除，因此 answer[0] 为真。
示例 2：

输入：[1,1,1]
输出：[false,false,false]
示例 3：

输入：[0,1,1,1,1,1]
输出：[true,false,false,false,true,false]
示例 4：

输入：[1,1,1,0,1]
输出：[false,false,false,false,false]
 

提示：

1 <= A.length <= 30000
A[i] 为 0 或 1


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/binary-prefix-divisible-by-5
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/

/**
主要思路:检查最后两位是否为0或者5就可以了
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
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> res(A.size(),false);
        int num = 0;
        for(int i=0;i<A.size();++i) {
            num <<=1;
            num += A[i];
            num%=10;
            res[i] = (num%5==0)?true:false;
        }
        return res;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<int>> temp_char=
    {
        {0,1,0},
        {0,0,1},
        {1,1,1},
        {0,0,0}
    };
    vector<int> vector_temp2={0,1,1,0,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    my_solution.prefixesDivBy5(vector_temp2);
    int time_point_2=clock();
    for(auto temp:vector_temp2){
        cout<<temp<<endl;
    }
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:直接计算检查是否为5的倍数

class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& A) {
        vector<bool> ans;
        long long number = 0;
        for(int i = 0; i < A.size(); i++){
            number = (2 * number + A[i]) % 5;
            if(number == 0)
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
}

//官方题解:
https://leetcode-cn.com/problems/binary-prefix-divisible-by-5/solution/ke-bei-5-zheng-chu-de-er-jin-zhi-qian-zh-asih/
//优质解析:
https://leetcode-cn.com/problems/binary-prefix-divisible-by-5/solution/you-xian-zhuang-tai-ji-by-nonsensersunny-glkk/

*/