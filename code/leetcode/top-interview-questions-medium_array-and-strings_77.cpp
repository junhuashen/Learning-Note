/* 
data-time 2019-10-11 17:50:56


题目描述:

字谜分组

给定一个字符串数组，将字母异位词组合在一起。字母异位词指字母相同，但排列不同的字符串。

示例:

输入: ["eat", "tea", "tan", "ate", "nat", "bat"],
输出:
[
  ["ate","eat","tea"],
  ["nat","tan"],
  ["bat"]
]
说明：

所有输入均为小写字母。
不考虑答案输出的顺序。

问题链接: https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/29/array-and-strings/77/

主要思路 1.暴力破解，先使用亦或位运算，判断两个字符串是否相同。然后遍历字符串数组，查找对应的相似数组，找到就将其删除。直到最后输入数组为空。
            时间复杂度O(n^2);空间复杂度O(n);然而超时了
        2.先将整个数组拷贝一份，对数组内的每个字符进行排序；然后直接比较是否相等。使用一个中间数组，记录string是否已经被遍历过
            时间复杂度O(n*k+(n*(n-1)/2));空间复杂度O(n)

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
    bool isEqual1(string &s1,string &s2){
            if(s1.size()!=s2.size()) return false;
            if(s1.size()==0){return true;}
            int result=(s1.at(0)^s2.at(0));
            //接下来进行亦或位运算
            for(int i=1;i<s1.size();++i){
                result^=s1.at(i);
                result^=s2.at(i);
            }
            if(result==0){
                return true;
            }else{
                return false;
            }
        }
    bool isEqual(string s1,string s2){
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        return (s1==s2);
    }
    vector<vector<string> > groupAnagrams1(vector<string>& strs) {
        vector<vector<string> > result;
         if(strs.size()<2){ result.push_back(strs); return result;}
        while(!strs.empty()){
            string temp=strs[0];
            vector<string> work_string_vector;
            vector<string > temp_str_vector;
            temp_str_vector.push_back(temp);
            for(int i=1;i<strs.size();++i){
                if(isEqual(temp,strs.at(i))){
                    temp_str_vector.push_back(strs.at(i));
                }else{
                    work_string_vector.push_back(strs.at(i));
                }
            }
            result.push_back(temp_str_vector);
            
            strs.clear();
            //更新strs,避免vector过多的移动
            strs=work_string_vector;

        }
        return result;

    }
    vector<vector<string> > groupAnagrams(vector<string>& strs) {
        vector<vector<string> > result;
        if(strs.size()<2){ result.push_back(strs); return result;}
        vector<string> strs_cpoy(strs.size());

        vector<bool> is_seeked(strs.size());
        for(auto temp_is:is_seeked){
            temp_is=false;
        }
        for(int i=0;i<strs.size(); i++){
            strs_cpoy[i]=strs[i];
            sort(strs_cpoy[i].begin(), strs_cpoy[i].end());
        }
        for(int i=0;i<strs_cpoy.size();++i){
            //元素没有被添加过
            if(!is_seeked[i]){
                vector<string > temp_str_vector;
                string temp=strs_cpoy[i];
                temp_str_vector.push_back(strs.at(i));
                for(int j=i+1;j<strs_cpoy.size();++j){
                    if(!is_seeked[j]){
                        if(temp==strs_cpoy[j]){
                            temp_str_vector.push_back(strs.at(j));
                            is_seeked[j]=true;
                        }
                    }
                }
                result.push_back(temp_str_vector);
                
            }
            
        }
        return result;

    }
};

int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={-1, 0, 1, 2, -1, -4};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.groupAnagrams(temp);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：将26个字母全部映射成为质数，用map来存储，其对应的质数和与index的映射
            时间复杂度O(n*m) 空间复杂度O(n*m)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int chartonum[26] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 107, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 103, 89, 97, 101};
        vector<vector<string>> res;
        //用来统计其对应的数量
        int index = -1;
        unordered_map<unsigned long long, int> str_to_group;
        for (int i = 0; i < strs.size(); ++i) {
            unsigned long key = 1;
            //计算其字符串对应的质数和
            for (int j = 0; j < strs[i].size(); ++j) {
                key *= chartonum[strs[i][j] - 'a'];
            }
            //查找到来当前的关键值
            if (str_to_group.count(key) > 0) {
                //将当前值添加到res的vector中
                res[str_to_group[key]].push_back(strs[i]);
            }
            else {
                //否则将其加入
                vector<string> tmp;
                tmp.push_back(strs[i]);
                res.push_back(tmp);
                str_to_group[key] = (++index);
            }
        }
        return res;
    }
};

//优质解答2:用无序map，将字符串和排序后的字符串做映射，然后取出对应字符串，添加上来就行了
时间复杂度O(m+n),空间复杂度O(2*m*n)
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {  
        unordered_map<string, vector<string>> um;
        for(string str : strs) {
            string temp(str);
            sort(temp.begin(), temp.end());
            um[temp].push_back(str);
        }
        
        vector<vector<string>> res;
        for(auto p : um) res.push_back(p.second);
        return res;
    }
};
*/