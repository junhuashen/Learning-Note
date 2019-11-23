/* 
data-time 2019-11-23 14:20:56


题目描述:

93. 复原IP地址

给定一个只包含数字的字符串，复原它并返回所有可能的 IP 地址格式。

示例:

输入: "25525511135"
输出: ["255.255.11.135", "255.255.111.35"]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/restore-ip-addresses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 问题的关键在于查找四个子字符串，并且每个字符串大小都不超过255。
            使用回溯的方法，将当查找当符合当前要求的字符串。
            先计算对于每个数字，先计算最小字符串长度，根据最小字符串长度来计算
        2. 暴力破解，设置四个子串的每个长度。遍历每种可能的长度，判断是否符合要求，符合则直接添加。
            注意考虑连续的0字符串.即检查前后变化
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
    vector<string> restoreIpAddresses2(string s) {
        vector<string> result;
        for(int a=1;a<4;++a){
            for(int b=1;b<4;++b){
                for(int c=1;c<4;++c){
                    for(int d=1;d<4;++d){
                        if(a+b+c+d!=s.length()) continue;
                        int n1=atoi(s.substr(0,a).c_str());
                        int n2=atoi(s.substr(a,b).c_str());
                        int n3=atoi(s.substr(a+b,c).c_str());
                        int n4=atoi(s.substr(a+b+c,d).c_str());
                        if(to_string(n1)!=s.substr(0,a)||to_string(n2)!=s.substr(a,b)||to_string(n3)!=s.substr(a+b,c)||to_string(n4)!=s.substr(a+b+c,d)) break;
                        if(n1<=255&&n2<=255&&n3<=255&&n4<=255){
                            string temp=to_string(n1)+"."+to_string(n2)+"."+to_string(n3)+"."+to_string(n4);
                            result.push_back(temp);
                        }
                    }
                }
            }
        }
        return result;
    }
    void getAddr(vector<string>& result,string &s,string temp_string ,int res_count,int start){
        int length=s.size();
        if(start>=length) return ;
        for(int i=start;i<start+3&&i<length;++i){
            if(res_count==0&&i!=length-1) continue;
            if(((length-i-1)>res_count*3)||((length-i-1)<res_count*1)) continue;
            string temp_str=s.substr(start,i-start+1);
            int ip=stoi(temp_str.c_str());
            if(ip<0||ip>255||to_string(ip)!=temp_str) continue;
            string temp_result=(temp_string.empty())?temp_str:temp_string+"."+temp_str;
            if(res_count==0){
                result.push_back(temp_result);
            }else
            {
                getAddr(result,s,temp_result,res_count-1,i+1);
            }
        }
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> result;

        getAddr(result,s,"",3,0);
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.restoreIpAddresses("25525511135");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：使用for循环来确定，避免了递归
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        if (s.length() < 4 || s.length() > 12) {
            return {};
        }
        vector<string> myVector;

        for (int pos1 = 0; pos1 < 3; pos1++) {
            for (int pos2 = pos1 + 1; pos2 < pos1 + 4; pos2++) {
                for (int pos3 = pos2 + 1; pos3 < s.length() - 1; pos3++) {
                    string str1 = s.substr(0, pos1 + 1);
                    int num1 = stoi(str1);
                    string str2 = s.substr(pos1 + 1, pos2 - pos1);
                    int num2 = stoi(str2);
                    string str3 = s.substr(pos2 + 1, pos3 - pos2);
                    int num3 = stoi(str3);
                    string str4 = s.substr(pos3 + 1, s.length() - pos3);
                    int num4 = stoi(str4);
                    if (num1 > 255 || num2 > 255 || num3 > 255 || num4 > 255) {
                        continue;
                    }
                    if (str1.length() > 1 && str1[0] == '0') {
                        continue;
                    }
                    if (str2.length() > 1 && str2[0] == '0') {
                        continue;
                    }
                    if (str3.length() > 1 && str3[0] == '0') {
                        continue;
                    }
                    if (str4.length() > 1 && str4[0] == '0') {
                        continue;
                    }
                    string ans = str1 + "." + str2 + "." + str3 + "." + str4;
                    myVector.push_back(ans);
                }
            }
        }
        return myVector;
    }
};
//优质解析：
https://leetcode-cn.com/problems/length-of-last-word/solution/hua-jie-suan-fa-58-zui-hou-yi-ge-dan-ci-de-chang-d/

*/