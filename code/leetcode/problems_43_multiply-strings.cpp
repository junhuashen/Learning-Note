/* 
data-time 2019-11-14 13:19:56


题目描述:

43. 字符串相乘

给定两个以字符串形式表示的非负整数 num1 和 num2，返回 num1 和 num2 的乘积，它们的乘积也表示为字符串形式。

示例 1:

输入: num1 = "2", num2 = "3"
输出: "6"
示例 2:

输入: num1 = "123", num2 = "456"
输出: "56088"
说明：

num1 和 num2 的长度小于110。
num1 和 num2 只包含数字 0-9。
num1 和 num2 均不以零开头，除非是数字 0 本身。
不能使用任何标准库的大数类型（比如 BigInteger）或直接将输入转换为整数来处理。


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/multiply-strings
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路 1.使用位数相乘法，来依次确定各个位上的数字。例如最后一位是，nums1最后一位与nums2最后一位的乘积，
        第二位，nums2的最后一位与nums1[length-1]的乘积与nums2第一位与nums[length-1]位的乘积。
        递推，对与第n位有：所有符合i+k=n的数的集合。由此进行计算和增加。
        时间复杂度O((n+m)^2);空间复杂度O(1);
        2. 使用正向遍历法，先使用定长空间来存储各个位上的结果。然后使用双重遍历两个数组，计算不同位上的结果，并保存在vector中
        时间复杂度O(m*n);空间复杂度O(n)
        3. 直接将其拆成加法来做，先实现字符串加法，再依次进行乘法。

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
    string multiply(string num1, string num2) {
        //将1设置为最长的那个
        if(num1.size()<num2.size()) swap(num1,num2);
        string result="";
        //获取长度
        int length1=num1.size();
        int length2=num2.size();
        //设置结果的最长单位
        int max_size=num1.size()+num2.size();
        int temp_result=0;
        for(int i=0;i<max_size;++i){
            int temp_result1=0;
            //根据最短值进行查找所有符合要求的值
            for(int j=0;j<=i&&j<length2;++j){
                //num1上存在可以相乘的值
                if(i-j<length1){
                    int temp_num1=num1[length1-i+j-1]-'0';
                    int temp_num2=num2[length2-j-1]-'0';
                    temp_result1+=temp_num2*temp_num1;
                }
            }
            temp_result+=temp_result1;
            result=to_string(temp_result%10)+result;
            temp_result/=10;
        }
        int i=0;
        //除去开头的0
        while (result[i]=='0')
        {
            ++i;
        }
        result.erase(result.begin(),result.begin()+i);
        return result.empty()?"0":result;
         
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,3,6,7};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.multiply("0","0");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答1：使用定长空间来保存临时结果，然后遍历求值，并计算最终结果

class Solution {
public:
    string multiply(string num1, string num2) {
        int n1=num1.size();
        int n2=num2.size();
        string ans(n1+n2,'0');
        for(int i=n1-1;i>=0;i--){
            for(int j=n2-1;j>=0;j--){
                int res=ans[i+j+1]-'0'+(num1[i]-'0')*(num2[j]-'0');
                ans[i+j+1]=res%10+'0';//当前位的值
                ans[i+j]+=res/10;//计算下一位的值
            }
        }
        for(int i=0;i<n1+n2;i++){
            if(ans[i]!='0') return ans.substr(i);
        }
        return "0";
    }
};

//优质解答2： 思路相同提前做了返回
执行用时为 0 ms 的范例
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1[0] == '0' || num2[0] =='0')
            return "0";
        int temp = 0;
        string temp_string(num1.size() + num2.size(), '0');
        for(int i = num2.size() - 1 ; i >= 0; --i)
        {
            for (int j = num1.size() - 1; j >= 0; --j)
            {
                temp = temp_string[i+j+1] - '0' + (num1[j] - '0')*(num2[i] - '0');
                temp_string[i+j+1] = '0' + temp % 10;
                temp_string[i + j] += temp / 10;
            }
        }
        
        for (int n = 0; n < num1.size() + num2.size(); ++n)
        {
            if (temp_string[n]!='0')
                return temp_string.substr(n);
        }
        
        return "0";
    }
};

//优质解析：
https://leetcode-cn.com/problems/multiply-strings/solution/ping-xing-cheng-fa-yu-shu-shi-cheng-fa-by-simple-2/
https://leetcode-cn.com/problems/multiply-strings/solution/c-shu-shi-cheng-fa-dai-ma-jian-ji-you-ya-yi-dong-b/
*/