/* 
data-time 2020-08-03 22:47:56


题目描述:

415. 字符串相加

给定两个字符串形式的非负整数 num1 和num2 ，计算它们的和。

 

提示：

num1 和num2 的长度都小于 5100
num1 和num2 都只包含数字 0-9
num1 和num2 都不包含任何前导零
你不能使用任何內建 BigInteger 库， 也不能直接将输入的字符串转换为整数形式

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：
将两个字符串逆序相加，最后再转置
时间复杂度O(max(m,n));
空间复杂度O(1);
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
    string addStrings(string num1, string num2) {
        string res="";
        int i = num1.size()-1;
        int j = num2.size()-1;
        int k = 0;
        while(i>=0||j>=0||k!=0){
            if(i>=0) k+=num1[i--]-'0';
            if(j>=0) k+=num2[j--]-'0';
            res+=to_string(k%10);
            k/=10;
        }
        reverse(res.begin(),res.end());
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
    auto result=my_solution.addStrings("15648","165161");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    cout<<result<<endl;
    return 0;
}
/*
//优质解答：使用ostream进行优化
class Solution {
public:
    string compressString(string S) {
        static auto speedup = [](){ios::sync_with_stdio(false);cin.tie(nullptr);return nullptr;}();
        if (S == "") return "";
        char last = S[0];
        int nCount = 1;
        string str = "";
        ostringstream ss;
        for (int i = 1; i < S.size(); ++i){
            if (S[i] == last){ ++nCount; continue; }
            ss << last << nCount;
            nCount = 1;
            last = S[i];
        }
        ss << last << nCount;
        str = ss.str();
        return str.size() < S.size() ? str : S;
    }
};

//官方题解:
https://leetcode-cn.com/problems/compress-string-lcci/solution/zi-fu-chuan-ya-suo-by-leetcode-solution/
//优质解析:

https://leetcode-cn.com/problems/compress-string-lcci/solution/shuang-zhi-zhen-fa-qu-lian-xu-zi-fu-cpython-by-net/
*/