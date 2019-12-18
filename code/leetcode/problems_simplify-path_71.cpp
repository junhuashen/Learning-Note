/* 
data-time 2019-11-18 19:25:56

71. 简化路径

以 Unix 风格给出一个文件的绝对路径，你需要简化它。或者换句话说，将其转换为规范路径。

在 Unix 风格的文件系统中，一个点（.）表示当前目录本身；此外，两个点 （..） 表示将目录切换到上一级（指向父目录）；两者都可以是复杂相对路径的组成部分。更多信息请参阅：Linux / Unix中的绝对路径 vs 相对路径

请注意，返回的规范路径必须始终以斜杠 / 开头，并且两个目录名之间必须只有一个斜杠 /。最后一个目录名（如果存在）不能以 / 结尾。此外，规范路径必须是表示绝对路径的最短字符串。

 

示例 1：

输入："/home/"
输出："/home"
解释：注意，最后一个目录名后面没有斜杠。
示例 2：

输入："/../"
输出："/"
解释：从根目录向上一级是不可行的，因为根是你可以到达的最高级。
示例 3：

输入："/home//foo/"
输出："/home/foo"
解释：在规范路径中，多个连续斜杠需要用一个斜杠替换。
示例 4：

输入："/a/./b/../../c/"
输出："/c"
示例 5：

输入："/a/../../b/../c//.//"
输出："/c"
示例 6：

输入："/a//b////c/d//././/.."
输出："/a/b/c"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/simplify-path
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路：1. 先进行遍历。将字符串分割为字符串数组；并初步筛选：遵循规则如下：
            遇到/将第一个非.和/的添加到数组中直到遇到另外的字符。
                遇到连续的/直接跳过；
            遇到../取出前面的数组。遇到./直接跳过。
            在取出前面的数组中，如果数组为空，直接返回空字符串。(这个提有毒)
        2.  二分法查找，最接近的下边界，在二分查找其中的数字。
        时间复杂度O(log(m)+log(n)) 空间复杂度O(0)
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
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
bool isBadVersion(int version);
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function
class Solution {
public:
    string simplifyPath(string path) {
        if(path.size()<1) return "";
        string result="";
        vector<string> temp_result;
        if(path[0]!='/') return "";
        if(path.size()<1) return "";
        vector<string> st;
        //临时标志字符串
        string dir;
        for (auto c : path) {
            //检查是否为分解符
            if (c == '/') {
                //当其为上级字符串，且st不为空
                if (dir == ".." && !st.empty()) {
                    st.pop_back();
                //作为正常分界符，将字符串添加上去
                } else if (dir != ".." && dir != "." && !dir.empty()) {
                    st.push_back(dir);
                }
                //清除临时字符串
                dir.clear();
            } else {//否则继续添加
                dir += c;
            }
        }
        string res;
        //更改输出结果
        for(auto a:st){
            res+="/"+a;
        }
        if (res.empty()) res = "/";
        return res;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{1}};
    vector<int > temp_vector2={1,0,1,0};
    vector<vector <int>> temp_vector={
            {1,   3,  5,  7},
            {10, 11, 16, 20},
            {23, 30, 34, 50}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.simplifyPath("/a/../../b/../c//.//");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：将.和..压入栈中，当其不为上述情况时，将字符串压入栈中。
class Solution {
public:
    string simplifyPath(string path) {
        path += "/";
        stack<string> st;
        //临时标志字符串
        string dir;
        for (auto c : path) {
            //检查是否为分解符
            if (c == '/') {
                //当其为上级字符串，且st不为空
                if (dir == ".." && !st.empty()) {
                    st.pop();
                //作为正常分界符，将字符串添加上去
                } else if (dir != ".." && dir != "." && !dir.empty()) {
                    st.push(dir);
                }
                //清除临时字符串
                dir.clear();
            } else {//否则继续添加
                dir += c;
            }
        }
        string res;
        while (!st.empty()) {
            auto t = st.top();
            st.pop();
            res += string(t.rbegin(), t.rend()) + "/";
        }
        //逆序字符串
        reverse(res.begin(), res.end());
        if (res.empty()) res = "/";
        return res;
    }

作者：da-li-wang
链接：https://leetcode-cn.com/problems/simplify-path/solution/c-zhan-jie-fa-by-da-li-wang-4/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//优质解答2：思路相同代码更加简洁
时间复杂度O(n) 空间复杂度O(0)
class Solution {
public:
    string simplifyPath(string path) {
       vector<string> tmp;
        int i=0;
        while(i<path.size())
        {
            while(path[i]=='/') i++;
            if(i==path.size())
                 break;
            int start=i;
            while(path[i]!='/'&&i<path.size())
                ++i;
            string s=path.substr(start,i-start);
            if(s==".."){if (tmp.size()!=0) tmp.pop_back();}
            else if(s!=".") tmp.push_back(s);
            
            
        }
        if(tmp.empty())
            return "/";
        string ans;
        for(int i=0;i<tmp.size();i++)
            ans+='/'+tmp[i];
        return ans;
    }
};
//优质解答3:使用getline 函数来进行字符串的分割。
class Solution {
public:
    string simplifyPath(string path) {
        string res;
        stringstream ss(path);
        vector<string> v;
        string t;
        
        while(getline(ss, t, '/')){
            if(t == "" || t == ".") continue;
            if(t == ".." && !v.empty())   v.pop_back();
            else if(t != "..")  v.push_back(t);
        }
        
        for(string s:v){
            res += "/" + s;
        }
        
        return res.empty() ? "/" : res;
    }
};


官方题解:

https://leetcode-cn.com/problems/search-a-2d-matrix/solution/sou-suo-er-wei-ju-zhen-by-leetcode/

优质解析：
https://leetcode-cn.com/problems/search-a-2d-matrix/solution/c-er-fen-liang-chong-shi-xian-by-saltingshelby/
*/