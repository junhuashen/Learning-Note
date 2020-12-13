/*
 * @lc app=leetcode.cn id=30 lang=cpp
 *
 * [30] 串联所有单词的子串
 *
 * https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words/description/
 *
 * algorithms
 * Hard (27.58%)
 * Likes:    168
 * Dislikes: 0
 * Total Accepted:    16.3K
 * Total Submissions: 59.2K
 * Testcase Example:  '"barfoothefoobarman"\n["foo","bar"]'
 *
 * 给定一个字符串 s 和一些长度相同的单词 words。找出 s 中恰好可以由 words 中所有单词串联形成的子串的起始位置。
 * 
 * 注意子串要与 words 中的单词完全匹配，中间不能有其他字符，但不需要考虑 words 中单词串联的顺序。
 * 
 * 
 * 
 * 示例 1：
 * 
 * 输入：
 * ⁠ s = "barfoothefoobarman",
 * ⁠ words = ["foo","bar"]
 * 输出：[0,9]
 * 解释：
 * 从索引 0 和 9 开始的子串分别是 "barfoo" 和 "foobar" 。
 * 输出的顺序不重要, [9,0] 也是有效答案。
 * 
 * 
 * 示例 2：
 * 
 * 输入：
 * ⁠ s = "wordgoodgoodgoodbestword",
 * ⁠ words = ["word","good","best","word"]
 * 输出：[]
 * 
 * 
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

// @lc code=start
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
         vector<int > result;
        int words_length=words.size();
        int sub_string_length=words.empty()?0:words[0].size();
        if(s.empty()||words.empty()||!sub_string_length) return result;
        std::map<int,string> temp_data;
        std::unordered_map<string,int> temp_map2;
        for(int i=0;i<words.size();++i){
            string temp_word=words[i];
            string::size_type begin=0;
            begin=s.find(temp_word,begin);
            while (begin!=string::npos)
            {   
                temp_data[begin]=temp_word;
                begin=begin+temp_word.size();
                begin=s.find(temp_word,begin);
            }
            auto key_result=temp_map2.find(temp_word);
            if(key_result!=temp_map2.end()){
                ++temp_map2[temp_word];
            }else
            {
                temp_map2.insert({temp_word,1});
            }
            
        }      
        //遍历map
        for(std::map<int,string>::iterator begin=temp_data.begin();begin!=temp_data.end();++begin){
            //检查连续的n个是否符合要求
            int i=1;
            std::vector<string> temp_map;
            std::unordered_map<string,int> temp_check_map=temp_map2;
            //遍历查找是否是符合要求的
            std::map<int,string>::iterator cur=begin,last=begin;
            //获取第一个值
            temp_map.push_back(cur->second);
            --temp_check_map[cur->second];
            //接下来检查几次
            for(;i<words.size();){
                ++cur;
                if(cur==temp_data.end()) break;
                //检查下表是否满足要求
                if((cur->first-last->first)==sub_string_length&&temp_check_map[cur->second]){
                    temp_map.push_back(cur->second);
                    --temp_check_map[cur->second];
                    ++last;
                }else{
                    break;
                }
                ++i;
            }
            //如果满足要求
            if(temp_map.size()==words_length){
                result.push_back(begin->first);
            }
        }
        return result;
    }
};
// @lc code=end

