/* 
data-time 2020-03-17 21:22:56


题目描述:

1160 拼写单词

给你一份『词汇表』（字符串数组） words 和一张『字母表』（字符串） chars。

假如你可以用 chars 中的『字母』（字符）拼写出 words 中的某个『单词』（字符串），那么我们就认为你掌握了这个单词。

注意：每次拼写时，chars 中的每个字母都只能用一次。

返回词汇表 words 中你掌握的所有单词的 长度之和。

 

示例 1：

输入：words = ["cat","bt","hat","tree"], chars = "atach"
输出：6
解释： 
可以形成字符串 "cat" 和 "hat"，所以答案是 3 + 3 = 6。
示例 2：

输入：words = ["hello","world","leetcode"], chars = "welldonehoneyr"
输出：10
解释：
可以形成字符串 "hello" 和 "world"，所以答案是 5 + 5 = 10。
 

提示：

1 <= words.length <= 1000
1 <= words[i].length, chars.length <= 100
所有字符串中都仅包含小写英文字母

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：
 使用unordered_map来进行存储字典序
时间复杂度O(n);空间复杂度O(m);
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
    int isSame(string & word,unordered_map<char,int> char_count)
    {
        int result=0;
        for(int i=0;i<word.size();++i)
        {
            if(char_count[word[i]]>0){
                ++result;
                --char_count[word[i]];
            }else{
                break;
            }
        }
        return result==word.size()?result:0;
    }
    int countCharacters(vector<string>& words, string chars) {
        if(words.empty()||chars.empty()) return 0;
        int res=0;
        for(int i=0;i<chars.size();++i){
            ++char_count_1[chars[i]];
        }
        for(int i=0;i<words.size();++i){
            res+=isSame(words[i],char_count_1);
        }
        return res;
    }
    unordered_map<char,int> char_count_1;
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
    auto result=my_solution.countCharacters(vector_temp,str1);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：使用copy字符数组进行优化

class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int charList[26]={0};
        int res=0;
        for (char ch : chars)
        {
            charList[ch-'a']++;
        }
        for (vector<string>::iterator it = words.begin(); it != words.end(); it++)
        {
            std::ios::sync_with_stdio(false);
            int tmpCharList[26];
            copy(charList,charList+26,tmpCharList);
            int tar;
            for (tar=0;tar<(*it).size();tar++)
            {
                tmpCharList[(*it)[tar]-'a']--;
                if(tmpCharList[(*it)[tar]-'a']<0){
                    break;
                }
            }
            if(tar==(*it).size()){
                res+=(*it).size();
            }
        }
        return res;
    }
};
//官方题解:
https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters/solution/pin-xie-dan-ci-by-leetcode-solution/
//优质解析:

https://leetcode-cn.com/problems/find-words-that-can-be-formed-by-characters/solution/tong-ji-zi-mu-chu-xian-de-ci-shu-shu-zu-ji-qiao-cj/
*/