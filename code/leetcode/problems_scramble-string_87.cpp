/* 
data-time 2019-12-06 12:25:56


题目描述:

87. 扰乱字符串

给定一个字符串 s1，我们可以把它递归地分割成两个非空子字符串，从而将其表示为二叉树。

下图是字符串 s1 = "great" 的一种可能的表示形式。

    great
   /    \
  gr    eat
 / \    /  \
g   r  e   at
           / \
          a   t
在扰乱这个字符串的过程中，我们可以挑选任何一个非叶节点，然后交换它的两个子节点。

例如，如果我们挑选非叶节点 "gr" ，交换它的两个子节点，将会产生扰乱字符串 "rgeat" 。

    rgeat
   /    \
  rg    eat
 / \    /  \
r   g  e   at
           / \
          a   t
我们将 "rgeat” 称作 "great" 的一个扰乱字符串。

同样地，如果我们继续交换节点 "eat" 和 "at" 的子节点，将会产生另一个新的扰乱字符串 "rgtae" 。

    rgtae
   /    \
  rg    tae
 / \    /  \
r   g  ta  e
       / \
      t   a
我们将 "rgtae” 称作 "great" 的一个扰乱字符串。

给出两个长度相等的字符串 s1 和 s2，判断 s2 是否是 s1 的扰乱字符串。

示例 1:

输入: s1 = "great", s2 = "rgeat"
输出: true
示例 2:

输入: s1 = "abcde", s2 = "caebd"
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/scramble-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 先统计字符串中的字符数目，看能否对应，不能直接返回，然后依次以s为中心，
        对string进行分割比较，对于两个字符来说，要么头部匹配，要么，尾部匹配；
        进行迭代；
        时间复杂度O(n^2)；空间复杂度O(0);
        
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
    bool isScramble(string s1, string s2) {
        if (s1 == s2) 
            return true;
        int n = s1.size();
        int memo[26];
        memset(&memo,0,26*sizeof(int));
        for (int i = 0; i < n; ++i) {
           ++memo[s1[i] - 'a'];
           --memo[s2[i] - 'a'];
        }
        for (int i = 0; i < 26; ++i) {
           if (memo[i] != 0) 
               return false;
        }
        for (int i = 1; i < n; ++i) {
            //在这里检查，左右字符串是否相等，或者是交换后的相同
           if ((isScramble(s1.substr(0, i), s2.substr(0, i)) && isScramble(s1.substr(i), s2.substr(i))) || (isScramble(s1.substr(0, i), s2.substr(n - i)) && isScramble(s1.substr(i), s2.substr(0, n - i)))) {
               return true;
           }
        }
        return false;
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
    auto result=my_solution.isScramble("adceb","*adceb");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路相同；使用引用传递，从start和end进行比较，避免了很多拷贝复制
时间复杂度O(m+n);空间复杂度O(0)
class Solution {
public:
	bool isScramble(string s1, string s2) {
		return isScramble(s1, s2, 0, 0, s1.size() - 1, s2.size() - 1);
	}

	bool isScramble(string& s1, string& s2, int start1, int start2, int end1, int end2) {
		bool equal = true;
		for (int i = start1; i <= end1; ++i) {
			if (s1[i] != s2[start2 + i - start1]) {
				equal = false;
				break;
			}
		}
		if (equal)
			return true;
		vector<int> c(26, 0);
		for (int i = start1; i <= end1; ++i) {
			c[s1[i] - 'a']++;
		}
		for (int i = start2; i <= end2; ++i) {
			c[s2[i] - 'a']--;
		}
		for (int i = 0; i < 26; ++i)
			if (c[i] != 0)
				return false;
		for (int i = 1; i <= end1 - start1; ++i) {
			if (isScramble(s1, s2, start1, start2, start1 + i - 1, start2 + i - 1) && isScramble(s1, s2, start1 + i, start2 + i, end1, end2))
				return true;
			if (isScramble(s1, s2, start1, end2 - i + 1, start1 + i - 1, end2) && isScramble(s1, s2, start1 + i, start2, end1, end2 - i))
				return true;
		}
		return false;
	}
};


//优质解答2：使用sort进行排序后比较；这个具有乱序的通用性。毕竟字符串多时，不好比较
class Solution {
public:
    bool isScramble(const string& s1, const string& s2) {
        return isScramble(s1.begin(), s1.end(), s2.begin(), s2.end());
    }
    template<typename RandomIt>
    bool isScramble(RandomIt f1, RandomIt l1, RandomIt f2, RandomIt l2) {
        auto p = mismatch(f1, l1, f2, l2);
        if (p.first == l1 && p.second == l2) return true;
        string cp1(f1, l1); sort(cp1.begin(), cp1.end());
        string cp2(f2, l2); sort(cp2.begin(), cp2.end());
        if (cp1 != cp2) return false;
        for (int i = 1; i < distance(f1, l1); ++i) {
            auto m1 = next(f1, i);
            auto m2 = next(f2, i);
            auto n2 = prev(l2, i);
            if (isScramble(f1, m1, f2, m2) && isScramble(m1, l1, m2, l2))
                return true;
            if (isScramble(f1, m1, n2, l2) && isScramble(m1, l1, f2, n2))
                return true;
        }
        return false;
    }
};

作者：hareyukai
链接：https://leetcode-cn.com/problems/scramble-string/solution/-rao-luan-zi-fu-chuan-by-hareyukai/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//不懂
//优质解析：
https://leetcode-cn.com/problems/scramble-string/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-1-2/
https://leetcode-cn.com/problems/scramble-string/solution/gen-ju-powcaida-lao-gai-xie-de-cban-ben-gong-yan-d/
*/