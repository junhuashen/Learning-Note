/* 
data-time 2020-02-16 16:23:56


题目描述:

567. 字符串的排列

给定两个字符串 s1 和 s2，写一个函数来判断 s2 是否包含 s1 的排列。

换句话说，第一个字符串的排列之一是第二个字符串的子串。

示例1:

输入: s1 = "ab" s2 = "eidbaooo"
输出: True
解释: s2 包含 s1 的排列之一 ("ba").

 

示例2:

输入: s1= "ab" s2 = "eidboaoo"
输出: False

 

注意：

    输入的字符串只包含小写字母
    两个字符串的长度都在 [1, 10,000] 之间

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/permutation-in-string
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
 

主要思路：使用一个数组进行统计，然后使用暴力破解的方式。进行匹配比较

*/
#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <stack>
#include <sstream>
#include <map>
#include <cstring>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <set>
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
    int char_count[26];
    bool checkInclusion(string s1, string s2) {
        if(s1.empty()) return true;
        if(s2.empty()||s1.size()>s2.size()) return false;
        memset(&char_count,0,26*sizeof(int));
        for(auto c:s1){
            ++char_count[c-'a'];
        }
        int temp_count[26];
        
        for(int i=0;i<s2.size()-s1.size()+1;++i){
            memcpy(&temp_count,&char_count,26*sizeof(int));
            int j=i;
            //检查是否合适
            for(;j<s1.size()+i;++j){
                if(temp_count[s2[j]-'a']<1){
                    break;
                }else{
                    --temp_count[s2[j]-'a'];
                }
            }   
            if((j-i)==s1.size()){
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
    int test_int=1; 
    uint32_t test_3=1;
	int time_point_1=clock();
    auto result=my_solution.checkInclusion("ab","eidbaooo");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
优质解答:1.使用map进行操作；更加简单
时间复杂度O(m*n);空间复杂度O(2*m)
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int len1 = s1.length();
        int len2 = s2.length();
        if (len1>len2) return false;

        map<char, int> map1, map2;
        for (auto s: s1) map1[s]++;
        for (int i = 0; i<len1-1; i++) map2[s2[i]]++;

        for (int i = len1-1; i<len2; i++)
        {
            map2[s2[i]]++;
            if (map1==map2) return true;
            char delc = s2[i-len1+1];
            if (!--map2[delc]) map2.erase(delc);
        }
        
        return false;
    }
};

//优质解答2：使用滑动窗口，每次只计算变化值
时间复杂度O(m+n)

class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int length1 = s1.size();
        int length2 = s2.size();


        if (length1 > length2) {
            return false;
        }
        
        vector<int> m1(26, 0);
        vector<int> m2(26, 0);
        for (int i = 0; i < length1; ++i) {
            ++m1[s1[i] - 'a'];
            ++m2[s2[i] - 'a'];
        }

        if (m1 == m2) {
            return true;
        }

        for (int j = length1; j < length2; ++j) {
            ++m2[s2[j] - 'a'];
            --m2[s2[j - length1] - 'a'];

            if (m1 == m2) {
                return true;
            }
        }

        return false;
    }
};

优质解答3：与上面基本相同
int __x__ = []() ->int {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	return 1010;
}();

class Solution {
    public:
    bool checkInclusion(string s1, string s2) {
        int count[256] = {0};
        for(char c : s1)
            count[c]++;
        int match = 0, l = 0;
        for(int r = 0; r < s2.size(); r++){
            char c1 = s2[r];
            count[c1]--;
            if(count[c1] >= 0)
                match++;
            while(match == s1.size()){
                char c2 = s2[l];
                count[c2]++;
                if(count[c2] > 0)
                    match--;
                if(r-l+1 == s1.size())
                    return true;
                l++;
            }
        }
        return false;
    }
};

官方题解：

https://leetcode-cn.com/problems/permutation-in-string/solution/zi-fu-chuan-de-pai-lie-by-leetcode/
优质解析：
https://leetcode-cn.com/problems/permutation-in-string/solution/c-by-neverdown-28/
*/