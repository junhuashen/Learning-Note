/* 
data-time 2019-09-15 13:38:56


题目描述:
验证回文字符串

给定一个字符串，验证它是否是回文串，只考虑字母和数字字符，可以忽略字母的大小写。

说明：本题中，我们将空字符串定义为有效的回文串。

示例 1:

输入: "A man, a plan, a canal: Panama"
输出: true
示例 2:

输入: "race a car"
输出: false
 


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/36/

/*

主要思路：先进行数据清洗，将其转化为只含数字和小写的字符。然后交换比较。检查是否为回文字符串。
        当出现不同的时候则，直接返回false
        算法复杂度:时间O(1.5*n);
        应该可以直接使用交换，将复杂度转变为O(n)
		
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
    bool isPalindrome(string s) {
        if(s.length()<=0){return true;}
        string temp;
        //数据筛选
        for(int i=0;i<s.length();++i){
            if(s.at(i)>='0'&&s.at(i)<='9'){
                temp.push_back(s.at(i));
                continue;
            }
            if(s.at(i)>='A'&&s.at(i)<='Z'){
                temp.push_back(s.at(i)-'A'+'a');
                continue;
            }
            if(s.at(i)>='a'&&s.at(i)<='z'){
                temp.push_back(s.at(i));
                continue;
            }
        }
        for(int j=0;j<temp.length()/2;++j){
            if(temp.at(j)!=temp.at(temp.length()-j-1)){
                return false;
            }
        }
        return true;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
    std::string strings = "A man, a plan, a canal: Panama";
    std::string string2= "race a car"; 
	int time_point_1=clock();
    auto result=my_solution.isPalindrome(strings);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：直接使用左右两个指针记录和查找对应的左右两侧的值。不相同就直接返回false，将算法复杂度降低到了O(n/2);
static bool init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

class Solution {
public:
    bool isPalindrome(string s) {
        if (s == "")
        {
            return true;
        }
        
        int left = 0, right = s.size() - 1;
        while (left < right)
        {
            while (left < right && !isalnum(s[left]))
            {
                left++;
            }
            while (left < right && !isalnum(s[right]))
            {
                right--;
            }
            if (tolower(s[left]) != tolower(s[right]))
            {
                return false;
            }
            left++;
            right--;
        }
        
        return true;
    }
};

class Solution {
public:
    bool isPalindrome(string s) {
        int len=s.size();
        int l=0;
        int r=len-1;
        while(l<r){
            while (l<r && isalnum(s[l])==0){l++;}
            while (l<r && isalnum(s[r])==0){r--;}
            if (tolower(s[l++])!=tolower(s[r--]))return false; 
        }
        return true;
    }
};
*/
