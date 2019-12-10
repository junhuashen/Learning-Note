/* 
data-time 2019-12-8 12:34:56


题目描述:

68. 文本左右对齐

给定一个单词数组和一个长度 maxWidth，重新排版单词，使其成为每行恰好有 maxWidth 个字符，且左右两端对齐的文本。

你应该使用“贪心算法”来放置给定的单词；也就是说，尽可能多地往每行中放置单词。必要时可用空格 ' ' 填充，使得每行恰好有 maxWidth 个字符。

要求尽可能均匀分配单词间的空格数量。如果某一行单词间的空格不能均匀分配，则左侧放置的空格数要多于右侧的空格数。

文本的最后一行应为左对齐，且单词之间不插入额外的空格。

说明:

单词是指由非空格字符组成的字符序列。
每个单词的长度大于 0，小于等于 maxWidth。
输入单词数组 words 至少包含一个单词。
示例:

输入:
words = ["This", "is", "an", "example", "of", "text", "justification."]
maxWidth = 16
输出:
[
   "This    is    an",
   "example  of text",
   "justification.  "
]
示例 2:

输入:
words = ["What","must","be","acknowledgment","shall","be"]
maxWidth = 16
输出:
[
  "What   must   be",
  "acknowledgment  ",
  "shall be        "
]
解释: 注意最后一行的格式应为 "shall be    " 而不是 "shall     be",
     因为最后一行应为左对齐，而不是左右两端对齐。       
     第二行同样为左对齐，这是因为这行只包含一个单词。
示例 3:

输入:
words = ["Science","is","what","we","understand","well","enough","to","explain",
         "to","a","computer.","Art","is","everything","else","we","do"]
maxWidth = 20
输出:
[
  "Science  is  what we",
  "understand      well",
  "enough to explain to",
  "a  computer.  Art is",
  "everything  else  we",
  "do                  "
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/text-justification
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：1. 直接遍历字符串，使用贪心的方法，计算第k和字符串和前面的总长度应该小于总长度+k-1；如果大于或者等于，
            就将其组成字符串添加到结果中；直到遇到末尾
        时间复杂度O(n);空间复杂度O(n+n/k); 
            
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
#include <cstdlib>
#include <set>
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
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> result;
        int start=0,max_index=words.size()-1;
        if(max_index<0) return result;
        if(max_index==0){
            result.push_back(words[0]+string(maxWidth-words[0].size(),' '));
            return result;
        }
        while (start<=max_index)
        {
            int temp_length=0;
            int i=start;
            string temp_result="";
            for(;i<=max_index;++i){
               if(temp_length+words.at(i).size()+(i-start)<=maxWidth){
                   temp_length+=words.at(i).size();
               }else{
                   break;
               }
            }
            int empty_length=(maxWidth-temp_length);
            int empty_count=i-start-1;
            int frist=0,next=0,frist_count=0,next_count=0;
            if(empty_count<1){
                frist=empty_length;
                frist_count=1;
            }else if(empty_length%empty_count==0){
                frist=empty_length/(empty_count);
                frist_count=empty_count;
            }else{
                next=empty_length/empty_count;
                frist_count=empty_length%empty_count;
                frist=next+1;
            }
                
            //判断是否为最后一行
            if(i>max_index){
                next=frist=1;
                frist_count=i;
            }
            //进行第一个字符串
            for(int k=start;k<i&&k<=max_index;++k){
                temp_result+=words[k];
                int next_length=(k-start<frist_count)?frist:next;
                if(temp_result.length()+next_length<maxWidth){
                    temp_result+=string(next_length,' ');
                }
            }
            if(temp_result.length()<maxWidth) temp_result+=string(maxWidth-temp_result.length(),' ');
            result.push_back(temp_result);
            start=i;
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"a"};
	int time_point_1=clock();
    auto result=my_solution.fullJustify(temp,1);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路基本相同，代码更加简洁
class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        vector<string> ret;
        string str;
        vector<int> index; // 记录每行空格的位置
        for (int i = 0; i < words.size(); i++) {
            if (str.length() + words[i].length() < maxWidth) {
                str += words[i];
                index.push_back(str.length());
                str += ' ';
            } else if (str.length() + words[i].length() == maxWidth) {
                str += words[i];
                ret.push_back(str);
                str.clear();
                index.clear();
            } else {
                int gap = maxWidth - str.length();
                if (index.size() > 1) {
                    str.erase(index.back(), 1);
                    index.pop_back();
                    gap++;
                }
                int x = 0, y = 0;
                if (!index.empty()) {
                    x = gap / index.size();
                    y = gap % index.size();
                }
                for (int j = index.size()-1; j >= 0; j--) {
                    str.insert(index[j], string(x + (j < y ? 1 : 0), ' ')); // 从后往前补齐需要的空格
                }
                ret.push_back(str);
                str = words[i];
                index.clear();
                if (str.length() < maxWidth) {
                    index.push_back(str.length());
                    str += ' ';
                }
            }
        }
        if (!str.empty()) {
            if (str.length() < maxWidth)
                str += string(maxWidth - str.length(), ' ');
            ret.push_back(str);
        }
        return ret;
    }
};


//优质解析：
https://leetcode-cn.com/problems/text-justification/solution/hao-shi-0msgu-zhang-by-loli-4/
https://leetcode-cn.com/problems/text-justification/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-1-5/

*/