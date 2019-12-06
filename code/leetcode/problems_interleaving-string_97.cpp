/* 
data-time 2019-12-06 12:50:56


题目描述:

97. 交错字符串

给定三个字符串 s1, s2, s3, 验证 s3 是否是由 s1 和 s2 交错组成的。

示例 1:

输入: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbcbcac"
输出: true
示例 2:

输入: s1 = "aabcc", s2 = "dbbca", s3 = "aadbbbaccc"
输出: false

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/interleaving-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1.使用动态规划的方法，假设s3的前k个字符串，是由s1的前i个和s2的前(k-i)个组成。
           当k为length时返回true；
           当k=0时，s1=0；或者s2=0;比较其和开头是否相同
        时间复杂度O(n！)；空间复杂度O(0);估计会超时，需要改装成for循环的
        2. 使用一个m,n的二维数组arr，记录s1的前i个和s2的前j个是否能组成s3的前i+j个
        对于arr[i][j]有arr[i][j]=arr[i-1][j]&&(s1[i]==s3[i+j])||arr[i][j-1]&&(s2[j]==s3[i+j]);
        
        时间复杂度O(n^2)；空间复杂度O(n*m)
        
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
    bool isInterleave1(string s1, string s2, string s3) {
        //先统计其中的字符串是否相同
        unsigned int s1_length=s1.size();
        unsigned int s2_length=s2.size();
        unsigned int s3_length=s3.size();
        if(!(s3_length||s1_length||s2_length)) return true;
        if((!s3_length)||!(s1_length||s2_length)){
            return false;
        }
        if((s1_length+s2_length)!=s3_length){
            return false;
        }
        if(s3_length==1){
            return (s3==s1||s3==s2);
        }
        unsigned int al_count[26]={0};
        //memset(&al_count,0,26*sizeof(al_count));
        for(int i=0;i<s3_length;++i){
            ++al_count[s3[i]-'a'];
            if(i<s2_length) --al_count[s2[i]-'a'];
            if(i<s1_length) --al_count[s1[i]-'a'];
        }
        for(int k=0;k<26;++k){
            if(al_count[k]!=0) return false;
        }
        if(s3[0]==s1[0]&&s2[0]==s3[0]){
            return isInterleave1(s1.substr(1),s2,s3.substr(1))||isInterleave1(s1,s2.substr(1),s3.substr(1));
        }else if(s3[0]==s1[0])
        {
            return isInterleave1(s1.substr(1),s2,s3.substr(1));
        }else if(s3[0]==s2[0]){
            return isInterleave1(s1,s2.substr(1),s3.substr(1));
        }else{
            return false;
        }
    }
    bool isInterleave(string s1, string s2, string s3) {
         //先统计其中的字符串是否相同
        unsigned int m=s1.size();
        unsigned int n=s2.size();
        unsigned int s3_length=s3.size();
        if(!(s3_length||m||n)) return true;
        if((!s3_length)||!(m||n)){
            return false;
        }
        if((n+m)!=s3_length){
            return false;
        }
        if(s3_length==1){
            return (s3==s1||s3==s2);
        }
        if(!m) return s3==s2;
        if(!n) return s3==s1;
        bool check_arr[m+1][n+1];
        memset(&check_arr,false,(m+1)*(n+1)*sizeof(bool));
        if(s3[0]!=s1[0]&&s3[0]!=s2[0]) return false;
        if(s3[0]==s1[0]){
            check_arr[1][0]=true;
        }
        if(s3[0]==s2[0]){
            check_arr[0][1]=true;
        }
        
        for(int i=0;i<=m;++i){
            for(int j=0;j<=n;++j){
                if(i>0){
                    check_arr[i][j]=(check_arr[i-1][j]&&(s1[i-1]==s3[i+j-1]))||check_arr[i][j];
                }
                if(j>0){
                    check_arr[i][j]=check_arr[i][j]||(check_arr[i][j-1]&&(s2[j-1]==s3[i+j-1]));
                }
            }
        }
        return check_arr[m][n];
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
    auto result=my_solution.isInterleave("","abc","abc");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路基本相同，动态规划 一维滚动;使用一个一维数组来记录s2对应值是否可以实现匹配
时间复杂度O(m*n);空间复杂度O(m)
//
class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
       if (s3.length() != s1.length() + s2.length()) {
           return false;
       }
       bool* dp = new bool[s2.length() + 1]();  //初始化为0
       for (int i = 0; i <= s1.length(); i++) {
           for (int j = 0; j <= s2.length(); j++) {
               if (i == 0 && j == 0) {
                   dp[j] = true;
               } else if (i == 0) {
                   dp[j] = dp[j - 1] && s2.at(j - 1) == s3.at(i + j - 1);
               } else if (j == 0) {
                   dp[j] = dp[j] && s1.at(i - 1) == s3.at(i + j - 1);
               } else {
                   dp[j] = (dp[j] && s1.at(i - 1) == s3.at(i + j - 1)) || (dp[j - 1] && s2.at(j - 1) == s3.at(i + j - 1));
               }
           }
       }
       return dp[s2.length()];
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



//官方解析
https://leetcode-cn.com/problems/interleaving-string/solution/jiao-cuo-zi-fu-chuan-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/interleaving-string/solution/c-dong-tai-gui-hua-by-da-li-wang-32/
https://leetcode-cn.com/problems/interleaving-string/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-2-9/
*/