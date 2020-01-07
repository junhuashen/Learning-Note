/* 
data-time 2019-12-10 20:34:56


题目描述:

76. 最小覆盖子串

给你一个字符串 S、一个字符串 T，请在字符串 S 里面找出：包含 T 所有字母的最小子串。

示例：

输入: S = "ADOBECODEBANC", T = "ABC"
输出: "BANC"
说明：

如果 S 中不存这样的子串，则返回空字符串 ""。
如果 S 中存在这样的子串，我们保证它是唯一的答案。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/minimum-window-substring
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 使用左右指针分别进行比较运算。
        时间复杂度O(n^2);空间复杂度O(n); 超时了
        2. 先让一个指针右移直到找到符合要求的值
        然后右移指针，如果存在就减小最小值，否则右移左指针；创建新的变数
        时间复杂度O(m+n)
            
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
    bool isContain(string &s,string substr,const unsigned start,unsigned end)
    {
        std::map<char,int> save;
        for(auto &temp_char:substr){
            if(save.find(temp_char)!=save.end()){
                ++save[temp_char];
            }else{
                save[temp_char]=1;
            }
        }
        //遍历母串进行查找
        for(int i=start;i<=end;++i){
            char temp_char2=s[i];
            if(save.find(temp_char2)!=save.end()&&save[temp_char2]){
                --save[temp_char2];
            }
        }
        for (const auto &pair : save) {
            if(pair.second!=0){
                return false;
            }
        }
        return true;
 
    };
    string minWindow1(string s, string t) {
        if(s.empty()||t.empty()) return "";
        //记录最小长度
        int min_length=s.size();
        string result="";
        if(t.size()==1) {
        
            return s.find(t)!=std::string::npos?t:"";
        }
        int left=0,right=s.size()-1;
        if(!isContain(s,t,left,right)){
            return "0";
        }
        while(left<right&&(right-left)>=t.size()){
            //能够查找到
            
            bool is_changed=false;
            
            if(isContain(s,t,left+1,right)){
                ++left;
                is_changed=true;
            }
            if(isContain(s,t,left,right-1)){
                --right;
                is_changed=true;
            }
            if(!is_changed) break;
        }
        result=s.substr(left,right-left+1);
        return result;
    }
    string minWindow(string s, string t) {
        if(s.empty()||t.empty()) return "";
        //记录最小长度
        int min_length=t.size();
        string result="";
        if(t.size()==1) {
        
            return s.find(t)!=std::string::npos?t:"";
        }
        //统计每个字符出现的次数
        int count[256] = { 0 };
        for (auto c : t) ++count[c];

        int len = 0, minLength = s.length();
        for (int l = 0, r = 0; r < s.length(); ++r) {
            //统计当前字符
            count[s[r]]--;
            //检查是否是目标字符串字符
            if (count[s[r]] >= 0) ++len;
            //如数目等于t.length就执行一次拷贝
            while (len == t.length()) {
                //检查是否小于最小值；小于则直接进行计算拷贝
                if (r - l + 1 <= minLength) {
                    minLength = r - l + 1;
                    result = s.substr(l, r - l + 1);
                }
                //准备开始移动左指针；这里需要将count的统计值补回来
                count[s[l]]++;
                if (count[s[l]] > 0) --len;
                //移动左指针
                ++l;
            }
        }
        return result;
    }
    string minWindow0(string s, string t) {
        if(s.empty()||t.empty()) return "";
        //记录最小长度
        int min_length=t.size();
        string result="";
        if(t.size()==1) {
        
            return s.find(t)!=std::string::npos?t:"";
        }
        int left=0,right=s.size()-1;
        if(!isContain(s,t,left,right)){
            return "";
        }
    
        for(int i=min_length;i<=s.size();++i){
            for(int j=0;j+i-1<s.size();++j){
                if(isContain(s,t,j,j+i-1)){
                    result=s.substr(j,i);
                    goto my_result;
                }
            }
        }
my_result: 
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
    auto result=my_solution.minWindow("ezsevejszgvxqqggbwkxpwzoyrbaslnxmfdjmmentzllptsspeshatvbkwbcjozwwcfirjxmiixadrsvwmcyfzzpxauhptdlyivrssdadacisxdojhopgogeoalfwoswypnqiqtnqxvkubaeiptpdzvtaizywtuwjhptxkgnhdaceagppbeuabocjpahiudrdskacsqmwqocqurivxcxyqcjfcqqzwheqsfvkxhinvlfrenmcslcinoqsggtcpxtjcowbveosrwjyjvcbigmwueobmjdbgynlojmjpbbjzmhkjjosraomgepsnuvvtkghtttlwwuxjdhsovmfvctdiixxdvtyfzhbuamszipklxezsrgqtavcitzloulvwtwqvklwscgfznguenmzphdxcdlqxwotrkmnxzjrbsxdffxlslkhsohxtupsqdokqaxnzieccdfhjesdpfnktuhoqwgicussurhvalaerfmakgfznslioswerdntxfnuxurzhrfyzrajagkpywypqutjzicxqrtplkqtevtdpuoraagayeppblyavdzluscifsblowqdqeuqectdjkukxumtzogwijenbhapdquuwqmbthgcscmpyaiyorwxaambjntmfnicexfzenbyppoppyngpjdplrtugojmbtqhsvixkjxbylqqmgwbpbtdsozzcinfedpwaxvkhtnhgdxsjtwburephdojodouifqkdowmjjtpmrkwmizjzdygioryrhsznllqbhekqxbeqlcdtbougmcpavptdkuqvfiymmieljkcxnhsovpvjrmjnbcqlwiidsirgqvrcfvbuctlzigicutrxxjlvrvylerrwmkaugbqkxbkhjujdqcdplolejlpndimrtmnzoelnfvupsgukixzwlkaxysmbayuvliubogotdkkxqhhbejxsvxrtpdwsetnrb","ksrsimxsxxjegkkpj");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：记录left和right最后再进行拷贝复制
class Solution {
public:
    string minWindow(string s, string t) {
        int count[256] = {0};
        for(char c : t)
            count[c]++;
        int len = 0, l = 0;
        int min_len = INT_MAX;
        int min_l = 0;

        for(int r = 0; r < s.length(); ++r){
            char c1 = s[r];
            count[c1]--;
            if(count[c1] >= 0) // 需要字符c1
                ++len; // 匹配上一个
            
            while(len == t.length()){ // 窗口大小大于匹配上字符的个数
                char c2 = s[l];
                count[c2]++;
                if(count[c2] > 0) // 需要字符c1
                    --len;
                if(r-l+1 < min_len){
                    min_l = l;
                    min_len = r-l+1;
                }
                l++;
            }
        }
        return min_len == INT_MAX ? "" : s.substr(min_l, min_len);
    }
};
//优质解答2:使用map数据结构，减少了运算

class Solution {
public:
	string minWindow(string s, string t) {
        vector<int> map(128,0);
        for(auto c: t) map[c]++;
        int counter=t.size(), begin=0, end=0, d=INT_MAX, head=0;
        while(end<s.size()){
            if(map[s[end++]]-->0) counter--; //in t
            while(counter==0){ //valid
                if(end-begin<d)  d=end-(head=begin);
                if(map[s[begin++]]++==0) counter++;  //make it invalid
            }  
        }
        return d==INT_MAX? "":s.substr(head, d);
    }
};

//优质解析：
https://leetcode-cn.com/problems/text-justification/solution/hao-shi-0msgu-zhang-by-loli-4/
https://leetcode-cn.com/problems/text-justification/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-1-5/

*/