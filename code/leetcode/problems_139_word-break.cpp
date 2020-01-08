/* 
data-time 2020-01-08 15:50:56


题目描述:

139. 单词拆分

给定一个非空字符串 s 和一个包含非空单词列表的字典 wordDict，判定 s 是否可以被空格拆分为一个或多个在字典中出现的单词。

说明：

拆分时可以重复使用字典中的单词。
你可以假设字典中没有重复的单词。
示例 1：

输入: s = "leetcode", wordDict = ["leet", "code"]
输出: true
解释: 返回 true 因为 "leetcode" 可以被拆分成 "leet code"。
示例 2：

输入: s = "applepenapple", wordDict = ["apple", "pen"]
输出: true
解释: 返回 true 因为 "applepenapple" 可以被拆分成 "apple pen apple"。
     注意你可以重复使用字典中的单词。
示例 3：

输入: s = "catsandog", wordDict = ["cats", "dog", "sand", "and", "cat"]
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/word-break
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：使用动态规划，dp[i]表示字符串s的前i个字符能否拆分成wordDict,对于j而言，只要查看i~j之间的字符串是否符合要求就可以了
 时间复杂度O(n^2);空间复杂度O(n)
        
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
#include <string.h>
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
    
    bool wordBreak(string s, vector<string>& wordDict) {
        int word_size=wordDict.size();
        int s_size=s.size();
        bool dp[s_size+1]={false};
        memset(&dp,(s_size+1)*sizeof(bool),false);
        //使用set进行字符串的快速查找
        unordered_set<string> m(wordDict.begin(), wordDict.end());
        //将第0个设置为true;
        dp[0] = true;
        //前i个字符串
        for(int i=1;i<=s_size;++i){
            //设置子字符串长度
            for(int j=0;j<i;++j){
                //如果有一个成立直接跳出
                if(dp[j]&&m.find(s.substr(j, i-j)) != m.end()){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[s_size];
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    string str1="leetcode"
    string str2="ab*a*c*a";
    vector<string> temp={"leet","code"};
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.wordBreak(str1,temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路基本相同，预先求出字典中的最小字符串长度，直接根据最小字符串长度进行计算
时间复杂度O(m*n);空间复杂度O(m)
//
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+1, false);
        unordered_set<string> worddict(wordDict.begin(), wordDict.end());
        dp[0] = true;
        int minlen = INT_MAX;
        for(int i=0; i<wordDict.size(); i++) {
            minlen = min(minlen, (int)wordDict[i].size());
        }
        for(int i=minlen; i<=s.size(); i++) {
            for(int j=0; j<i; j++) {
                if(dp[j] && worddict.find(s.substr(j,i-j)) != worddict.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};


//优质解答2：同时查找最小和最长的字符串长度，限制i的最小值和j的最小值
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+1, false);
        unordered_set<string> worddict(wordDict.begin(), wordDict.end());
        dp[0] = true;
        int minlen = INT_MAX, maxlen = INT_MIN;
        for(int i=0; i<wordDict.size(); i++) {
            minlen = min(minlen, (int)wordDict[i].size());
            maxlen = max(maxlen, (int)wordDict[i].size());
        }
        for(int i=minlen; i<=s.size(); i++) {
            //注意这里当i长度大于maxlen时，应该从maxlen开始进行
            for(int j=max(0,i-maxlen); j<i; j++) {
                if(dp[j] && worddict.find(s.substr(j,i-j)) != worddict.end()) {
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};
//优质解答3：直接使用
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool>dp(s.length()+1);
        dp[0]=true;
        for(int i=1;i<=s.length();i++){
            //遍历每个字符串进行检查
            for(auto word:wordDict){
                int len=word.length();
                if(i>=len){
                    //比较子字符串
                    if(dp[i-len]&&s.compare(i-len,len,word)==0){
                        dp[i]=1;
                    }
                }
            }
        }
        return dp[s.length()];
    }
};
//优质解答4：思路相同，使用倒叙查找的方式，进行工作
class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_set<string> dict;
        int maxlen = 0;
        for(auto word: wordDict){
            dict.insert(word);
            maxlen = max(maxlen, (int)word.size());
        }

        vector<bool> dp(s.size()+1, false);
        dp[0] = true;
        for(int i=1; i<=s.size();++i){
            for(int j=i-1; j>=max(0,i-maxlen);--j){
                if(dp[j]){
                    string tmp = s.substr(j, i-j);
                    if(dict.count(tmp) != 0){
                        dp[i] = true;
                        break;
                    }
                }
            }
        }
        return dp[s.size()];
    }
};

//官方解析
https://leetcode-cn.com/problems/word-break/solution/dan-ci-chai-fen-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/word-break/solution/dong-tai-gui-hua-cban-ben-by-hu-lu-wa-wa-2/
*/