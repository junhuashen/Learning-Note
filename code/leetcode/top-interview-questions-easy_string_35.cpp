/* 
data-time 2019-09-15 13:20:56


题目描述:
有效的字母异位词

给定两个字符串 s 和 t ，编写一个函数来判断 t 是否是 s 的字母异位词。

示例 1:

输入: s = "anagram", t = "nagaram"
输出: true
示例 2:

输入: s = "rat", t = "car"
输出: false
说明:
你可以假设字符串只包含小写字母。

进阶:
如果输入字符串包含 unicode 字符怎么办？你能否调整你的解法来应对这种情况？

 


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/5/strings/35/

/*

主要思路：分别将两个数组按照字母的先后顺序来进行排序，将排序后的两个数组进行比较。
        当出现不同的时候则，直接返回false
        算法复杂度:时间O(nlog(n));
        应该可以直接使用交换，将复杂度转变为O(0)
		
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
    bool isAnagram(string s, string t) {
        if(s.empty()||t.empty()){return false;}
        if(s.length()!=t.length()){return false;}
        //将s中的字符串进行排序
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return (s==t);
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<char> a={'h','e','l','l','o'};
    std::string strings = "anagram";
    std::string string2="nagaram"; 
	int time_point_1=clock();
    auto result=my_solution.isAnagram(strings,string2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：1.使用两个辅助数组进行字符频率的统计，然后表两个字符数组是否相同就可以了。注意字符数组的初始内存分配。可以使用malloc进行分配
static bool init = []()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    return true;
}();

class Solution {
public:
	bool compareArray(int* a, int* b, int size = 26) {
		while (--size)
			if (*(a + size) != *(b + size))
				return false;
		return true;
	}
    
    // 如果范围扩大至Unicode字符集 则使用哈希表代替固定长度的数组
	bool isAnagram(string s, string t) {
		int m = s.length();
		int n = t.length();
		if (m != n)
			return false;
		int sArray[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
		int tArray[26] = { 0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0 };
		for (char c : s)
			sArray[c - 'a']++;
		for (char c : t)
			tArray[c - 'a']++;
		return compareArray(sArray, tArray);
	}
};

//优质解答2：思路相同使用vector来进行存储。
class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int> temp_s(26,0),temp_t(26,0);
       if(s.size()!=t.size()) return false;
       for(int i=0;i<s.size();i++)
       {
           ++temp_s[s[i]-'a'];
           ++temp_t[t[i]-'a'];
       } 
       if(temp_s==temp_t) return true;
       else return false;
    }
};
*/
