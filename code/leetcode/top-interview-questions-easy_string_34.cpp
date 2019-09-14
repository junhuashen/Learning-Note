/* 
data-time 2019-09-14 14:34:56


题目描述:
字符串中的第一个唯一字符

给定一个字符串，找到它的第一个不重复的字符，并返回它的索引。如果不存在，则返回 -1。

案例:

s = "leetcode"
返回 0.

s = "loveleetcode",
返回 2.
 

注意事项：您可以假定该字符串只包含小写字母。

 


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/34/

/*

主要思路：这里没有空间复杂度要求，用空间换时间，用一个26个字符数组来进行对应字符出现的次数，因此直接使用结构体来进行数据的存储位置信息。
        算法复杂度:时间O(n+26);
        应该可以直接使用交换，将复杂度转变为O(26*3)
		
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
    struct node{
        int min_index=0x7fffffff;//最小索引
        int num=0;//出现次数
    };
public:
    int firstUniqChar(string s) {
        int result=-1;
        vector<node> my_nodes(26);//创建26个索引
        int index=s.length();
        for(int i=0;i<s.length();++i){
            int temp=s.at(i)-'a';
            ++my_nodes.at(temp).num;
            if(my_nodes.at(temp).min_index>i){
                my_nodes.at(temp).min_index=i;
            }  
        }
        for(auto temp: my_nodes){
            if(temp.num==1){
                index=(index>temp.min_index)?temp.min_index:index;
            }
        }
        return (index==s.length())?-1:index;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
    std::string strings = "loveleetcode";
	int time_point_1=clock();
    auto result=my_solution.firstUniqChar(strings);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：1.将结构体换成与s等长的数组，进行双重遍历，这样代码更加简洁
static bool init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

class Solution {
public:
    int firstUniqChar(string s) {
        int count[26] = {0};
         for(size_t i = 0; i < s.size(); ++i)
        {
            count[s[i]-'a']++;
        }
        for(size_t i = 0; i < s.size(); ++i)
        {
            if(count[s[i]-'a'] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
*/
