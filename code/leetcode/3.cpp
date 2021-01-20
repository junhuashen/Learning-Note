/* 
data-time 2019-08-28 19:49:56


题目编号：3
题目描述:
给定一个字符串，请你找出其中不含有重复字符的 最长子串 的长度。

示例 1:

输入: "abcabcbb"
输出: 3 
解释: 因为无重复字符的最长子串是 "abc"，所以其长度为 3。
示例 2:

输入: "bbbbb"
输出: 1
解释: 因为无重复字符的最长子串是 "b"，所以其长度为 1。
示例 3:

输入: "pwwkew"
输出: 3
解释: 因为无重复字符的最长子串是 "wke"，所以其长度为 3。
     请注意，你的答案必须是 子串 的长度，"pwke" 是一个子序列，不是子串。


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-substring-without-repeating-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*
主要思路：1. 暴力破解，使用字符串的连续性，从0下标开始，利用字符遍历，遍历所有可能字符子串，
当子串中存在重复字符时，证明含有这段字符的不符合要求，重新查找后面的。
为了防止前面的非重复子串长度被忘记，需要找一个值进行记录
空间复杂度O(n)
时间复杂度O(n^2)
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;


//main function
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        //设置变量
        string sub_result_str="";
        int max_length=0;
        for(int i=0;i<s.length();++i){
            //遍历子字符串，查看有无重复
            for(int j=0;j<sub_result_str.length();++j){
                // 存在重复
                if(sub_result_str[j]==s[i]){
                     // 将0到重复的字符串的段放弃
                     sub_result_str.erase(0,j+1);//将重复的字段放弃
                }
            }
            sub_result_str+=s[i];
            max_length=(max_length>sub_result_str.length()?max_length:sub_result_str.length());
        }
        return max_length;
        
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    string a="bbbbb";
    string b="pwwkew";
   
	int time_point_1=clock();
    auto result1=my_solution.lengthOfLongestSubstring(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：
//思路一样，都是基于子字符串的顺序性，但是将中间的字符串删除，直接更改为了下标；
当s中存在相同字符时，直接将sub的搜索下标更改为重复下标的下一个，并计算无重复的长度，大于max_length就更新max，否则就不更新


class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;
        int max_nl = 0;
        int i = 0;//i用来记录上一个无重复的下标
        //遍历子字符串
        for (int j = 0; j < s.size(); ++j) {
            // 从无重复的下标开始
            for (int k = i; k < j; ++k) {
                if (s[k] == s[j]) {
                    i = k + 1;//更新i值
                    break;//跳出for循环
                }
            }
            int t_nl = j - i + 1;//计算无重复字符的长度
            max_nl = (t_nl > max_nl) ? t_nl : max_nl;
        }
        return max_nl;
    }
};

优质解答2:使用左右指针减小性能损耗

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        if(s.size() == 0) return 0;
        unordered_set<char> chars;
        int right = 0;
        for(int left = 0; left < s.size(); left ++){
            // 向右进行扩展
            while(right < s.size() && !chars.count(s[right])){
                chars.insert(s[right]);
                right ++;
            }
            // 查询最大值
            maxLen = max(maxLen, right - left);
            if(right == s.size()) break;
            // 指针左滑动
            chars.erase(s[left]);
        }
        return maxLen;
    }
};

作者：yizhe-shi
链接：https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof/solution/c-san-chong-jie-fa-by-yizhe-shi-2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

优质解答3: 旦检测到重复字符，左指针可以直接跳到重复部分，这是很自然的，不重复子串肯定不会把重复部分包含进去。

而检测是否重复其实不必要使用set了，因为一共有127个字符，所以直接开辟128长度的数组即可。首先把每个字符的对应值设为 -1

每次把 m[s[i]] 设置为 i，是为了能够让左指针及时跳到重复部分。

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> m(128, -1);
        int res = 0, left = -1;
        for(int i = 0; i < s.size(); ++i) {
            // 更新左边的最小重复
            left = max(left, m[s[i]]);
            // 设置最小重复左指针为i;
            m[s[i]] = i;
            res = max(res, i - left);
        }
        return res;
        
    }
};

作者：yizhe-shi
链接：https://leetcode-cn.com/problems/zui-chang-bu-han-zhong-fu-zi-fu-de-zi-zi-fu-chuan-lcof/solution/c-san-chong-jie-fa-by-yizhe-shi-2/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/