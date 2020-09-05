/* 
data-time 2020-08-05 22:47:56


题目描述:

127. 单词接龙

给定两个单词（beginWord 和 endWord）和一个字典，找到从 beginWord 到 endWord 的最短转换序列的长度。转换需遵循如下规则：

每次转换只能改变一个字母。
转换过程中的中间单词必须是字典中的单词。
说明:

如果不存在这样的转换序列，返回 0。
所有单词具有相同的长度。
所有单词只由小写字母组成。
字典中不存在重复的单词。
你可以假设 beginWord 和 endWord 是非空的，且二者不相同。
示例 1:

输入:
beginWord = "hit",
endWord = "cog",
wordList = ["hot","dot","dog","lot","log","cog"]

输出: 5

解释: 一个最短转换序列是 "hit" -> "hot" -> "dot" -> "dog" -> "cog",
     返回它的长度 5。
示例 2:

输入:
beginWord = "hit"
endWord = "cog"
wordList = ["hot","dot","dog","lot","log"]

输出: 0

解释: endWord "cog" 不在字典中，所以无法进行转换。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/word-ladder
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/*

主要思路：
主要思路:
使用双端搜索
每次变化一个位置上的字符，
并将其作为新的开始端进行搜索
知道在结束端中包含为止

时间复杂度O(n*m)
空间复杂度O(n)
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
#include <unordered_set>
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
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(wordList.begin(),wordList.end());
        if(words.find(endWord)==words.end()) {
            return 0;
        }
        unordered_set<string> begin_sets{beginWord};
        unordered_set<string> end_sets{endWord};
        // 深度递归节
        return BFS(begin_sets,end_sets,words,2);        
    }
    int BFS(unordered_set<string> begin_sets,unordered_set<string> end_sets,unordered_set<string> words,int l) {
        if(begin_sets.size()==0) return 0;
        if(begin_sets.size()>end_sets.size()) {
            return BFS(end_sets,begin_sets,words,l);
        }
        for(auto s :begin_sets) {
            words.erase(s);
        }
        unordered_set<string> next;
        for(auto s:begin_sets) {

            for(int i=0;i<s.size();++i) {
                char temp_cahr = s[i];
                string str =s ;
                // 构造变化
                for(char c='a';c<='z';++c) {
                    if(temp_cahr==c) continue;
                    str[i]=c;
                    if(words.find(str)!=words.end()) {
                        if(end_sets.find(str)!=end_sets.end()) {
                            return l;
                        }else {
                            next.insert(str);
                        }
                    }
                }
                str[i]=temp_cahr;
            
            }
            
        }
        return BFS(next,end_sets,words,l+1);

    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"hot","dot","dog","lot","log","cog"};
    vector<int> vector_temp2={2,5,6};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.ladderLength("hit","cog",vector_temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    cout<<result<<endl;
    return 0;
}
/*
//优质解答：思路相同，没有使用递归
class Solution {
public: //头部开始搜索，枚举队列头部单词替换字母的位置，然后枚举替换字母，新的单词在wordlist中存在时，先压入队列，以后进行下一步数的搜索。
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if (beginWord == endWord) {
            return 1;
        }

        int n = beginWord.size();
        if (n < 1 || n != endWord.size()) {
            return 0;
        }

        unordered_set<string> dict(wordList.begin(), wordList.end());
        dict.erase(beginWord); //删除dict中的起点单词（若存在的话）
        if (dict.find(endWord) == dict.end()) {
            return 0;
        }
        
        queue<string> q;
        q.push(beginWord); 
        int len = 2;
        
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                string word = q.front();
                q.pop();
                for (int i = 0; i < n; i++) {
                    char oldChar = word[i];
                    for (char c = 'a'; c <= 'z'; c++) { //枚举替换的字母
                        if (c == oldChar) continue; 
                        word[i] = c;                    //得到本节点能变换到达的单词
                        if (dict.find(word) != dict.end()) { //判断可到的下一个单词是否在dict中
                            if (word == endWord) {          //判断能否到达终点，若到达返回路径长度
                                return len;
                            }
                            q.push(word);
                            dict.erase(word);
                        }
                    }
                    word[i] = oldChar;
                }
            }
            len++; //当遍历完当前队列的所有节点，那么所有情况下的点都已经走到了下一步，路径长度+1
        }

        return 0;
    }
};
// 优质解答2：思路相同代码更加简洁
class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> worddic(wordList.begin(),wordList.end());
        unordered_set<string> beginset={beginWord};
        unordered_set<string> endset={endWord};
        if(worddic.count(endWord)==0)
            return 0;
        int res=1;
        for(;!beginset.empty();){
            res++;
            unordered_set<string> tmpset;
            for(auto s:beginset)
                worddic.erase(s);
            for(string s:beginset){
                for(int i=s.size()-1;i>=0;i--){
                    string str=s;
                    for(char c='a';c<='z';c++){
                        str[i]=c;
                        if(worddic.count(str)==0)
                            continue;
                        if(endset.count(str)==1)
                            return res;
                        tmpset.insert(str);
                    }
                }
            }
            if(tmpset.size()<endset.size())
                beginset=tmpset;
            else{
                beginset=endset;
                endset=tmpset;
            }
        }
        return 0;
    }
};

//官方题解:
https://leetcode-cn.com/problems/word-ladder/solution/dan-ci-jie-long-by-leetcode/
//优质解析:
https://leetcode-cn.com/problems/word-ladder/solution/gou-tu-bfs-by-acw_wangdh15/
*/