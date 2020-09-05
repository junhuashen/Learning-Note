/* 
data-time 2019-11-20 13:20:56


题目描述:

58. 最后一个单词的长度

给定一个仅包含大小写字母和空格 ' ' 的字符串，返回其最后一个单词的长度。

如果不存在最后一个单词，请返回 0 。

说明：一个单词是指由字母组成，但不包含任何空格的字符串。

示例:

输入: "Hello World"
输出: 5


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/length-of-last-word
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：使用逆序遍历，找到第一个字母，再找到第一个非字母，两者相减
        时间复杂度O(n)
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
    int lengthOfLastWord(string s) {
        int result=0;
        int max_index=s.length()-1;
        for(max_index;max_index>=0;--max_index){
            if(isalpha(s[max_index])){
            while (isalpha(s[max_index]))
            {
                ++result;
                --max_index;
            }
            if(result) break;
            
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
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.lengthOfLastWord("Hello World");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：直接使用判断，查找空字符，提高了速度
class Solution {
public:
	int lengthOfLastWord(string s) {
		int count = 0;
		for (int i = s.size() - 1; i >= 0; i--) {
			if (s[i] == ' ' && count > 0)
				return count;
			if (s[i] == ' '&&count==0)
				continue;
			count++;
		}
		return count;
	}
};
//优质解答2：思路相同

class Solution {
public:
    int lengthOfLastWord(string s) {
        if(s.length() == 0)
            return 0;
        int res=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            if(s[i]==' '){
                if(res)break;
            }else{
                res++;
            }
        }
        return res;
    }
};

//优质解析：
https://leetcode-cn.com/problems/length-of-last-word/solution/hua-jie-suan-fa-58-zui-hou-yi-ge-dan-ci-de-chang-d/

*/