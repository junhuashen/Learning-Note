/* 
data-time 2019-12-05 13:25:56


题目描述:

44. 通配符匹配

给定一个字符串 (s) 和一个字符模式 (p) ，实现一个支持 '?' 和 '*' 的通配符匹配。

'?' 可以匹配任何单个字符。
'*' 可以匹配任意字符串（包括空字符串）。
两个字符串完全匹配才算匹配成功。

说明:

s 可能为空，且只包含从 a-z 的小写字母。
p 可能为空，且只包含从 a-z 的小写字母，以及字符 ? 和 *。
示例 1:

输入:
s = "aa"
p = "a"
输出: false
解释: "a" 无法匹配 "aa" 整个字符串。
示例 2:

输入:
s = "aa"
p = "*"
输出: true
解释: '*' 可以匹配任意字符串。
示例 3:

输入:
s = "cb"
p = "?a"
输出: false
解释: '?' 可以匹配 'c', 但第二个 'a' 无法匹配 'b'。
示例 4:

输入:
s = "adceb"
p = "*a*b"
输出: true
解释: 第一个 '*' 可以匹配空字符串, 第二个 '*' 可以匹配字符串 "dce".
示例 5:

输入:
s = "acdcb"
p = "a*c?b"
输入: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/wildcard-matching
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 这个题和原来的10题，非常相似，不过是判断条件发生了变化，由原来的匹配n个连续相同字符，转变为了匹配*;
        对于之前的要求降低了。
        使用动态规划的方法，
        如果当前值是*.就先统计连续的‘*’为k；然后返回s.subr(1)和p.subr(k-1)的是否匹配。或者s和p.subr(k)
        如果不是*;则直接判断，错误就直接返回
        时间复杂度O(m*n*n*m);空间复杂度O(0);//然而超时了
        2. 对递归的方法，进行优化，更改将中间值存储在二维数组b[s.length+1][p.length+1]中；
        b[i][j]表示s的前i个字符串是否和p的前j个字符串匹配，返回b[s.length][p.length]
        矩阵默认值为false;
        对i=0&&j=0时应该为true;
        从j=1,i=0开始遍历，j-1和i-1为真正的index
        当p[j-1]不为'*'时，正常进行比较,相等或者为‘？’ b[i][j]=b[i-1]b[j-1]
        当p[j-1]为'*'时，b[i][j]=b[i][j-1]||b[i-1][j];
        注意当i=0时，会出现问题。因此要注意设置条件。
        时间复杂度O(m*n)；空间复杂度O(m*n);
        
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
    /* 这个方法超时了 */
    bool isMatch1(string s, string p) {
        //cout<<"cnt "<<cnt<<endl;
        //cout<<"s:"<<s[0]<<" p:"<<p[0]<<endl;
        if (p.empty()) return s.empty();    //判断是否为空
        if(p=="*") return true;
        bool first_match =(!s.empty())&&(s[0] == p[0]||p[0] =='?'||p[0] =='*'); //比较s,p当前指向s[0],p[0];
        if (p.length() >= 1 && p[0]=='*') {   //特殊情况下的处理，这个是关键
            //这里处理连续的***
            int k=1;
            while(p[k]=='*'){
                ++k;
            }
            //对应特殊情况下的两个选择
            //return isMatch(s,p.substr(2))表示跳过*去匹配
            //return first_match && isMatch(s.substr(1),p)表示p借助*去匹配s中的重复元素
            //采用将s首元素不断右移的方法，递归处理
            //用||连接，起到很巧妙的作用
            return  (first_match && isMatch(s.substr(1), p.substr(k-1)))||isMatch(s, p.substr(k)); //调用次数问题
            //如果first_match已经为false，那么  &&后面的isMatch还会被继续调用么？
        } else {
            return first_match && isMatch(s.substr(1), p.substr(1));
        }      
    }
    bool isMatch(string s, string p) {
        int slen = s.size();
        int plen = p.size();
        bool b[slen + 1][plen + 1]={0};
        memset(&b,false,(slen+1)*(plen+1)*sizeof(bool));
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
                    if(i > 0 && (p[j - 1] == '?' || p[j - 1] == s[i - 1])){
                        b[i][j] = b[i - 1][j - 1];
                    }
                }else{ //p[j-1]=='*'
                    if(j >= 1) {
                        b[i][j] = b[i][j] || b[i][j - 1];
                        if(i >= 1) {
                            b[i][j] = b[i][j] || b[i - 1][j];
                        }
                    }
                }
            }
        }
        return b[slen][plen];int slen = s.size();
        int plen = p.size();
        bool b[slen + 1][plen + 1];
        memset(&b,false,(slen+1)*(plen+1)*sizeof(bool));
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
                    if(i > 0 && (p[j - 1] == '?' || p[j - 1] == s[i - 1])){
                        b[i][j] = b[i - 1][j - 1];
                    }
                }else{ //p[j-1]=='*'
                    if(j >= 1) {
                        b[i][j] = b[i][j] || b[i][j - 1];
                        if(i >= 1) {
                            b[i][j] = b[i][j] || b[i - 1][j];
                        }
                    }
                }
            }
        }
        return b[slen][plen];
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
    auto result=my_solution.isMatch("adceb","*a*b");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：以s为中心使用start和end分别记录p和s的上次索引位置。遇到错误，就进行回溯，看能否纠正。直到匹配s的所有字符，
            最后查看p是否还有剩余--刚好匹配
时间复杂度O(m+n);空间复杂度O(0)
class Solution {
public:
    bool isMatch(string s, string p) {
        //使用i,j进行index的标志,i表示s的index
        int j = 0, i = 0;
        //使用star和end来显示
        for (int star = 0, last = 0; i < s.length();) {
            // 先比较开头
            if (j < p.length() && (s[i] == p[j] || p[j] == '?')) {
                i++;
                j++;
            }else if (j < p.length() && p[j] == '*') {//比较p[j]为'*'；设置star为下一个节点，last为前i；表示直接跳过前面的--前面的都正确
                star = ++j;
                last = i;
            }else if (star != 0) {//否则，再从star开始比较--进行回退
                j = star;
                i = ++last;
            }else{
                return false;//相当于开始就不同，直接返回false
            }
        }
        //处理j末尾的*
        while (j < p.length() && p[j] == '*')
            j++;
        //返回是否为末尾
        return j == p.length();
    }
};


//优质解答2：和上面思路相同；添加了多个‘*’的跳过。
class Solution {
public:
bool isMatch(string s, string p) {
	int I = 0, J = 0；//使用I,J来记录上一次匹配成功的地方
	int i = 0, j = 0;//用i，j代表当前s，p的索引
    //以i为节点
	while (i < s.length()) {
		if (s[i] == p[j] || p[j] == '?') {//如果匹配就继续判断
			i++;
			j++;
			continue;
		}
        //如果遇到p[j]为*
		if (p[j] == '*')
		{
			while (j < p.length()-1) {//首先把后面连续的星号去除
				if (p[j+1] != '*')
					break;
     			j++;
			}
			I = i;//记下当前成功匹配的一段的索引，以后回溯用，这时星号不占字符
			J = ++j; 
			continue;
		}
        //如果记录的p上一次匹配的地方不为0；继续开始匹配；这里
		if(J!=0){
			i = I + 1;//不匹配的时候，星号多占一个字符，j回溯到J，I往后移一位
			I++;
			j = J;
			continue;
	    }
        return false;
	}
	 while (j < p.length() && p[j] == '*') ++j;//把结尾的*，也去了
  
    return j == p.length();
}
};

//不懂
//优质解析：
https://leetcode-cn.com/problems/wildcard-matching/solution/dong-tai-gui-hua-si-yao-su-by-a380922457-4/
https://leetcode-cn.com/problems/wildcard-matching/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-w-9/
*/