/* 
data-time 2019-10-07 19:03:56


题目描述:

10. 正则表达式匹配

给你一个字符串 s 和一个字符规律 p，请你来实现一个支持 '.' 和 '*' 的正则表达式匹配。

'.' 匹配任意单个字符
'*' 匹配零个或多个前面的那一个元素
所谓匹配，是要涵盖 整个 字符串 s的，而不是部分字符串。

说明:

s 可能为空，且只包含从 a-z 的小写字母。
p 可能为空，且只包含从 a-z 的小写字母，以及字符 . 和 *。
示例 1:

输入:
s = "aa"
p = "a"
输出: false
解释: "a" 无法匹配 "aa" 整个字符串。
示例 2:

输入:
s = "aa"
p = "a*"
输出: true
解释: 因为 '*' 代表可以匹配零个或多个前面的那一个元素, 在这里前面的元素就是 'a'。因此，字符串 "aa" 可被视为 'a' 重复了一次。
示例 3:

输入:
s = "ab"
p = ".*"
输出: true
解释: ".*" 表示可匹配零个或多个（'*'）任意字符（'.'）。
示例 4:

输入:
s = "aab"
p = "c*a*b"
输出: true
解释: 因为 '*' 表示零个或多个，这里 'c' 为 0 个, 'a' 被重复一次。因此可以匹配字符串 "aab"。
示例 5:

输入:
s = "mississippi"
p = "mis*is*p*."
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/regular-expression-matching
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：
        假设我们有：
        s = "abadddffghi"
        p = "a.ad*.*gh."

        我们去分析s,p是否match时，会从左往右依次比较，对于当前比较的两个char来说，p中的字符是我们需要重点关注的，因为特殊字符只会出现在p中； 
        [1]p中如果是普通字符（或 .），直接比较是否与s对应的相等，不相等直接返回false，判断结束；
        [2]p如果遇到*，处理起来就比较麻烦了。比较好的一种方法是利用递归。
            1,将当0处理，则直接从将p的当前位置向后移动一位与s当前位置进行比较；
            2,将当任意非零数字处理，则需要判断该符号前的元素重复需要的次数后是否能与s对应匹配，这里如果用逻辑判断或比较麻烦，应该用递归的方法去做。举例如下：

        作者：edward_wang
        链接：https://leetcode-cn.com/problems/regular-expression-matching/solution/di-gui-fa-jie-zheng-ze-biao-da-shi-pi-pei-by-edwar/
        来源：力扣（LeetCode）
        著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
        官方题解链接：
            https://leetcode-cn.com/problems/regular-expression-matching/solution/zheng-ze-biao-da-shi-pi-pei-by-leetcode/
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
    bool IsSameChar(char & char1,char &char2){
        if(char2=='.'){
            return true;
        }else{
            return (char1==char2);
        }
    }
    //存在测试用例未通过
    bool isMatch1(string s, string p) {
        int i,j;
        char work_ptr1,work_ptr2;
        int p_len=p.size();
        i=j=0;
        while(i<s.size()){
            //已经越界
            if(j>=p_len){
                return false;
            }
            work_ptr1=s.at(i);
            work_ptr2=p.at(j);
            //先判断是否是*
            if(work_ptr2=='*'){
                //如果是*并且和其前一个相同，直接指向下一次
                if(j<p_len&&j>0){
                    while(IsSameChar(s.at(i),p.at(j-1))){
                        //这里提前预测一下，只会被执行一次
                        if(i+1<s.size()&&!IsSameChar(s.at(i+1),p.at(j-1))){
                            ++j;//执行跳过
                        }
                        ++i;
                        if(i>=s.size()){break;}
                    }
                }
                
            }
            if(i>=s.size()){break;}
            //先判断是否相等
            if(i<s.size()&&j<p_len&&IsSameChar(s.at(i),p.at(j))){
                ++j;
                //查看下一位是否是'*'
            }else if(i<s.size()&&j+1<p_len&&p.at(j+1)=='*'){
                //如果是跳过这两个数，并假装这两个数不存在
                j+=2;
                continue;
            }else{//不同，也没有保命符，就死定了
                return false;;
            }
            ++i;
        }
         if(j<=p_len-1&&s.size()<p.size()){
            return false;
        }
        return true;
    }
    //真正题解
    bool isMatch(string s, string p) {
        if (p.empty()) return s.empty();    //判断是否为空

        bool first_match = !s.empty() && (s[0] == p[0] || p[0] == '.'); //比较s,p当前指向s[0],p[0];
        //如果第二个是"*"的特殊情况
        if (p.length() >= 2 && p[1] == '*') {   //特殊情况下的处理，这个是关键
            //对应特殊情况下的两个选择
            //return isMatch(s,p.substr(2))表示跳过*去匹配
            //return first_match && isMatch(s.substr(1),p)表示p借助*去匹配s中的重复元素
            //采用将s首元素不断右移的方法，递归处理
            //用||连接，起到很巧妙的作用
            return isMatch(s, p.substr(2)) || (first_match && isMatch(s.substr(1), p)); //调用次数问题
            //如果first_match已经为false，那么  &&后面的isMatch还会被继续调用么？
        } else {
            return first_match && isMatch(s.substr(1), p.substr(1));
        }
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,7,9,3,1};
    vector<int> vector_temp2={2,5,6};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.isMatch(str1,str2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：如果没有‘*’号直接进行比较，如果模式串中有‘*’，它会出现在第二个位置即pattern[1];
class Solution {
     bool isMatch(string text, string pattern) {
         //二者同时为empty时，直接返回true

        if (pattern.empty()) return text.empty();
        //判断前面第一个字符是否相同
        boolean first_match = (!text.empty() &&
                               (pattern.charAt(0) == text.charAt(0) || pattern.charAt(0) == '.'));

        if (pattern.length() >= 2 && pattern.charAt(1) == '*'){
            return (isMatch(text, pattern.substring(2)) ||
                    (first_match && isMatch(text.substring(1), pattern)));
        } else {
            return first_match && isMatch(text.substring(1), pattern.substring(1));
        }
    }
}

作者：LeetCode
链接：https://leetcode-cn.com/problems/regular-expression-matching/solution/zheng-ze-biao-da-shi-pi-pei-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//优质解答：利用max_money_pre指向之前的最大的指针，max_money_current指向当前的最大值进行更新，这里主要是使用了一个快慢指针进行指向迭代
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    bool isMatch(string s, string p) {
        int slen = s.size();
        int plen = p.size();
        //if(slen == 0 && plen == 0) return true;
        //if(plen == 0) return false;
        vector<vector<bool>> b(slen + 1, vector<bool>(plen + 1, false));
        for(int i = 0; i <= slen; i++) {
            for(int j = 0; j <= plen; j++) {
                //第一个肯定是true
                if(i == 0 && j == 0) {
                    b[i][j] = true;
                    continue;
                }
                if(j == 0) {
                    b[i][j] = false;
                    continue;
                }
                if(p[j - 1] != '*') {
                    if(i > 0 && (p[j - 1] == '.' || p[j - 1] == s[i - 1]))
                        b[i][j] = b[i - 1][j - 1];
                }
                else {
                    if(j >= 2) {
                        b[i][j] = b[i][j] || b[i][j - 2];
                        if(i >= 1 && (p[j - 2] == '.' || p[j - 2] == s[i - 1])) {
                            b[i][j] = b[i][j] || b[i - 1][j];
                        }
                    }
                    
                }
            }
        }
        return b[slen][plen];
    }
};

//优质解答:借助辅助空间进行计算，只不过借助了两个数组空间，避免了对前面最大值的查找。
class Solution {
public:
    bool isMatch(string s, string p) {
        int sLen = s.size(), pLen = p.size();
        //创建辅助的存储数组
		bool memory[sLen+1][pLen+1] = {0};
		//将原始值设置为true
        memory[0][0] = true;
		//遍历两个子串
        for(int i = 0; i <= sLen; i++) {
			for(int j = 1; j <= pLen; j++) {
				//如果前一个值是'*'
                if(p[j-1] == '*') {//注意这里主要是为了检测
                    //对应存贮的值：之前是否成立|| ((当前值等于s的前一个值|| p[j-2]=='.') &&  memory[i-1][j]);
					memory[i][j] = memory[i][j-2] || (i > 0 && (s[i-1] == p[j-2] || p[j-2] == '.') && memory[i-1][j]);
				}else {
                    //否则直接进行正常比较

					memory[i][j] = i > 0 && (s[i-1] == p[j-1] || p[j-1] == '.')
									&& memory[i-1][j-1];
				}
			}
		}
		return memory[sLen][pLen];
    }
};
因为题目拥有最优子结构 ，一个自然的想法是将中间结果保存起来。
我们通过用 dp(i,j)表示 text[i:]和 pattern[j:]是否能匹配。我们可以用更短的字符串匹配问题来表示原本的问题。

算法

我们用 [方法 1] 中同样的回溯方法，除此之外，因为函数 match(text[i:], pattern[j:]) 只会被调用一次，我们用dp(i, j)来应对剩余相同参数的函数调用，这帮助我们节省了字符串建立操作所需要的时间，也让我们可以将中间结果进行保存。

作者：LeetCode
链接：https://leetcode-cn.com/problems/regular-expression-matching/solution/zheng-ze-biao-da-shi-pi-pei-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
*/