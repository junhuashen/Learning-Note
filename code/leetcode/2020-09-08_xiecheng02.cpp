 /*
订单系统工作流路径解析
时间限制： 1000MS
内存限制： 65536KB
题目描述：
1. 背景: 订单系统的业务逻辑处理，通过采用工作流的方式进行处理，基于面向配置编程以利于后续扩展与维护.

2. 要求: 当前需要根据工作流的配置解析和找出所有工作流路径, 可能存在循环依赖路径. 

3. 说明: 空格隔开的字符串每一个字母都代表一个节点. 比如a bc e, 表示a的下一个节点为b或者c， 输出为:abe, ace.

4. 举例: 有3个分支，

            输入,

                 a bc df gh

            输出如下， 结果输出根据单个字符的下标index排序:  Comparator.naturalOrder().  

                 abdg

                 abdh

                 abfg

                 abfh

                 acdg

                 acdh

                 acfg

                 acfh




输入描述
输入工作流程配置(可能存在循环依赖路径)

输出描述
找出所有的路径, 正常路径与循环依赖路径,  并且必须标识出循环依赖路径(后缀为--circular dependency),  当前实例题仅为2个分支场景. 3个或3个以上分支请见上面举例


样例输入
a bc d eag f
样例输出
abdef
abdaf--circular dependency
abdgf
acdef
acdaf--circular dependency
acdgf

提示
约束: 1个字母代表下一个节点.
abae: 由于a最终会流转回a, 证明这个是错误的配置即循环依赖路径， 输出带后缀说明: abae--circular dependency

根据单个字符的下标index排序， 结果的排序:  Comparator.naturalOrder()
规则
请尽量在全场考试结束10分钟前调试程序，否则由于密集排队提交，可能查询不到编译结果
点击“调试”亦可保存代码
编程题可以使用本地编译器，此页面不记录跳出次数

*/
#include <cmath>
#include <climits>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <list>
#include <stack>
#include <numeric>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include  <time.h>   
#define f(i,x,y) for(int i=x; i<y; i++)
using namespace std;

class Solution{
    public:
    int len;
    string str;
    vector<string> ret;
    void solve(vector<string> &vs){
        len = vs.size();
        str.reserve(len);
        helper(vs, 0);
        // sort(ret.begin(), ret.end());
        for(auto s:ret){
            cout << s;
            int len1 = s.size();
            sort(s.begin(), s.end());
            auto tEnd = unique(s.begin(), s.end());
            int len2 = tEnd - s.begin();
            if(len2 != len1) cout << "--circular dependency";
            cout << endl;
        }
        return;
    };
    /*
    abdef
    abdaf--circular dependency
    abdgf
    acdef
    acdaf--circular dependency
    acdgf
    */
    void helper(vector<string> &vs, int idx_level_1){
        if(str.size() == len) ret.push_back(str);
        if(idx_level_1 >= len) return;
        for(auto &c:vs[idx_level_1]){
            str.push_back(c);
            helper(vs, idx_level_1+1);
            str.pop_back();
        }
    }
};
int main(){
    Solution a;
    vector<string> vs;
    string str;
    // a bc d eag f
    getline(cin, str);
    int len = str.size();
    int left = 0, right = 1;
    while(left < len && str[left]==' ') left++;
    right = left+1;
    while(left < right && right < len){
        if(str[right] == ' ') {
            string str1 = str.substr(left, right-left);
            str1.erase(0,str1.find_first_not_of(" "));
            str1.erase(str1.find_last_not_of(" ") + 1);
            if(!str1.empty()) vs.push_back(str1);
            left = right + 1;
            right = right + 2;
        }else right++;
    }
    string str1 = str.substr(left, right-left);
    str1.erase(0,str1.find_first_not_of(" "));
    str1.erase(str1.find_last_not_of(" ") + 1);
    if(!str1.empty()) vs.push_back(str1);
    // vs.push_back(str.substr(left, right-left));
    // for(auto &k:vs) cout << k << endl;
    a.solve(vs);
}


