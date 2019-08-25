#include <iostream>
#include <vector>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <time.h>
using namespace std;
/*题目描述：
实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。
示例 1：

输入: "Hello"
输出: "hello"
示例 2：

输入: "here"
输出: "here"
示例 3：

输入: "LOVELY"
输出: "lovely"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/to-lower-case
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


*/
/*解题思路：
1. 使用c++ stl中的lower函数
2. 直接当成字符数组，遍历-32;注意不要写奇怪的代码，不然编译器不好优化
*/


class Solution {
public:
    string toLower(string str) {
        for(int i=0;i<str.size();++i)
        {
            if(str[i]<='Z'&&str[i]>='A'){
                //printf("%s\n",str[i]);
                str[i]+=32;
            }
        }
        return str;
    }
    string toLower2(string str){
        transform(str.begin(), str.end(), str.begin(),::tolower);
        return str;

    }
    string toLower3(string str){
        int len=str.length();
        int a='A'-'a';
        for(int i=0;i<len;++i){
            if(str[i]<='Z'&&str[i]>='A'){
                str[i]-='A'-'a';
            }
        }
        return str;

    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    std::string input_string1="Hello";//目标输出"1[.]1[.]1[.]1"
    std::string input_string2="LOVELY";//目标输出"255[.]100[.]50[.]0"
    //output string
    std::string output1="";
    //time 
    int begin_time1=clock();

    //my result number
    string my_result1=my_solution.toLower(input_string2);
    int end_time=clock();
    
    printf("\t Time :%d ms \n",end_time-begin_time1);
    string my_result2=my_solution.toLower2(input_string2);
    int end_time2=clock();
    printf("\t Time :%d ms \n",end_time2-end_time);
    string my_result3=my_solution.toLower3(input_string2);
    int end_time3=clock();
    printf("\t Time :%d ms \n",end_time3-end_time2);

    //print_vector(my_result);
    std::cout<<"result1:"<<my_result1<<"\n"<<"resutl2:"<<my_result2<<"\n result3 :"<<my_result3<<std::endl;

    //print_vector(my_result);
    return 0;
}
