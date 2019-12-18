/* 
data-time 2019-11-09 13:02:56


题目描述:

30. 串联所有单词的子串

示例 1：

输入：
  s = "barfoothefoobarman",
  words = ["foo","bar"]
输出：[0,9]
解释：
从索引 0 和 9 开始的子串分别是 "barfoo" 和 "foobar" 。
输出的顺序不重要, [9,0] 也是有效答案。
示例 2：

输入：
  s = "wordgoodgoodgoodbestword",
  words = ["word","good","best","word"]
输出：[]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 暴力破解使一个额外的数组，进行是否访问过的设置。遍历字符串查找是否已经被访问。
            对字符串进行访问，查找是否有相同的字符串，如果存在则继续查找。直到找到所有需要的。
            然后窗口滑动一个子字符串继续查找。
            如果中间遇到不同，直接跳过这个子字符串继续查找。
            注意考虑连续相同字符串的情况，如果下面的字符串和第一个前面的相同，马上重置位置
            时间复杂度O(n*m); 空间复杂度O(m);（没有办法解决目标字符串重叠的情况；思路错误）
        2. 查找所有字符串对应的index开始位置，对所有子字符串的位置进行排序，看是否存在连续的几个数
        3. 思路就是，先把存在的字符串，放到 hashmap ，可以快速比较，然后每一个位置都进行匹配
            但这里会有很多的重复计算，就可以使用一个小技巧，先计算目标串的每个字母的 ASCII 和，
            然后和当前要匹配的字符串的每个字母的 ASCII 进行比较，如果不相等就不用进行下面的匹配过程了
            作者：Xdo
            链接：https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words/solution/bao-li-suan-fa-jia-ru-qu-zhong-you-hua-10bei-ti-su/
            来源：力扣（LeetCode）
            著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
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
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};
void FromArrayToList(ListNode* node,vector<int> int_array){
    ListNode* work_pointer=node;
    int i=0;
    if(node->val==NULL){node->val=int_array.at(0);++i;}
    for(;i<int_array.size();++i){
        ListNode* temp_node=new ListNode(int_array.at(i));
        work_pointer->next=temp_node;
        work_pointer=temp_node;
    }
}
void PrintfList(ListNode* node){
    std::cout<<"\n \t ====start printf ==== \t "<<std::endl;
    while (node!=NULL)
    {
        std::cout<<"\t "<<node->val<<"\t"<<std::endl;
        node=node->next;
    }
    std::cout<<"\n \t ====end printf ==== \t"<<std::endl;
    
}
void DeleteList(ListNode* node){
    
    while (node!=NULL)
    {
        ListNode* work_ptr=node;
        node=node->next;
        work_ptr->next=NULL;
        work_ptr->val=NULL;
        delete work_ptr;
        work_ptr=NULL;
    }
    
}
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
    //这个方法超时了，CNM
    vector<int> findSubstring1(string s, vector<string>& words) {
        vector<int > result;
        int words_length=words.size();
        int sub_string_length=words.empty()?0:words[0].size();  
        if(s.empty()||words.empty()||!sub_string_length) return result;
        //计算最短距离
        int min_end=s.length()-words_length*sub_string_length;
        std::map<int,string> temp_data;
        std::unordered_map<string,int> temp_map2;
        for(int i=0;i<words.size();++i){
            string temp_word=words[i];
            string::size_type begin=0;
            begin=s.find(temp_word,begin);
            while (begin!=string::npos)
            {   
                temp_data[begin]=temp_word;
                begin=begin+1;
                begin=s.find(temp_word,begin);
            }
            auto key_result=temp_map2.find(temp_word);
            if(key_result!=temp_map2.end()){
                ++temp_map2[temp_word];
            }else
            {
                temp_map2.insert({temp_word,1});
            }
            
        }      
        //遍历map
        for(std::map<int,string>::iterator begin=temp_data.begin();begin!=temp_data.end();++begin){
            //检查是否到达了尽头
            if(begin->first > min_end) break;
            //检查连续的n个是否符合要求
            int i=1;
            std::vector<string> temp_map;
            std::unordered_map<string,int> temp_check_map=temp_map2;
            //遍历查找是否是符合要求的
            std::map<int,string>::iterator cur=begin,last=begin;
            //获取第一个值
            temp_map.push_back(cur->second);
            --temp_check_map[cur->second];
            //接下来检查几次
            for(;i<words.size();){
                ++cur;
                if(cur==temp_data.end()) break;
                //检查是否存在满足下标
                if((cur->first-last->first==sub_string_length)&&temp_check_map[cur->second]){
                    temp_map.push_back(cur->second);
                    --temp_check_map[cur->second];
                    last=cur;
                    ++i;
                }
            }
            //如果满足要求
            if(temp_map.size()==words_length){
                result.push_back(begin->first);
            }
        }
        return result;
    }
     vector<int> findSubstring(string s, vector<string>& words) {
        //定义结果
        vector<int> res;
        //检查条件
        if(words.size()<1 || s.size()<1 || s.size() < words[0].size()*words.size()) return res;
        int wordLen = words[0].size();
        //子串长度
        int lens = wordLen*words.size();
        //目标和当前index
        int target = 0, cur = 0;
        unordered_map<string,int> allWord;
        //遍历字符串并赋值，主要是排除重复项
        for(auto& it:words){
            allWord[it]++;
            //在这里计算所有字符串的总ASCII和
            for(auto& i:it) target += i;
        }
        //提前计算前lens个字符串的ASCII总和
        for(int i=0; i<lens; i++) cur += s[i];
        // 先看当前字符串的 ASCII 码相加是否相等 方便去重
        for(int i=0, j; i<=s.size()-lens;){
            // 快速去重，如果检测到了ASCII不同相同表示没有达到标准
            if(cur != target) continue;
            // 确认一下，是否为真的匹配,进行一次拷贝复制
            unordered_map<string,int> tem(allWord);
            //遍历字符串检查是否相同；连续遍历直到为０
            for(j=i; j<i+lens; j+=wordLen){
                //遍历数组，检查是否为０
                if(tem[s.substr(j, wordLen)]-- == 0) break;
            };
            //如果是就将结果添加上
            if(j == i+lens) res.push_back(i);

            //先将总值除去当前char的ASCII
            //cur -= s[i];
            //计算下一个的总
            //cur += s[lens + i++];
        }
        return res;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="aaaaaaaa";
    std::string string2= "147";
    vector<string> a={"aa","aa","aa"};
    vector<int> vector_temp={1,2,3,4,5};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.findSubstring1(strings,a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1:

class Solution {
public:
        // https://leetcode-cn.com/problems/substring-with-concatenation-of-all-words/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-w-6/
        //  这道题由于所有的words是等长的
        //  最朴素的想法是从i=0开始每次都搜索长度为num of words // length of word的子串
        //  如果能匹配那么就把结果添加进去不能匹配就算了
        //  难点就在于如何确定它能匹配？
        //  由于words是等长的，就极大简化了问题
        //  我们利用两个hash_map
        //  第一个hash_map记录所有words的出现情况，key是word 而value是这个word的出现次数
        //  第二个hash_map记录子串words出现的情况，由于所有的word是等长的，所以子串的word起始序号每次加上length of word即可
        //  如果出现了第二个map有，而第一个map没有 或者 第二个map某个单词的数量超过了第一个map的数量 
        //  都可以判断为不匹配   到头了则匹配
        //   


    vector<int> findSubstring2(string s, vector<string>& words) {
        vector<int> ret;
        if(words.size() == 0)//判断words为空,因为下面用到了words[0]
            return ret;
        
        int word_size = words[0].size();
        int word_num = words.size();
        
        unordered_map<string,int> m1;//构造hashmap   它这里用的是unorder_map 可能是这里不需要对key进行排序 可能不对key排序的话，速度更快?
        for(int i=0;i<word_num;i++)
            m1[words[i]]++; //它这里倒是没担心初值的问题，似乎初值就是0? 难道是因为int型的初值就是0? 
        
        unordered_map<string,int> m2;
        for(int i=0; (i + word_size * word_num) <= s.size() ; i++){//截取的s符合题意
            int j = 0;
            for(j=i;j < (i + word_size * word_num) ; j=j+word_size){//分段判断
                //获取第一段子串
                string temp_str = s.substr(j,word_size);
                if(m1[temp_str] == 0){//m1中没有截取的串，直接跳出
                    break;
                }else{
                    m2[temp_str]++;
                    if(m1[temp_str] < m2[temp_str])//重复次数过多，也跳出
                        break;
                }
            }
            
            if(j == (i + word_size * word_num))//每一段都符合，则加入答案
                ret.push_back(i);
            
            m2.clear();//清空m2 这个很重要 因为我们每一次都是要从零开始的
        }
        return ret;
    }
};


//优质解答2：思路一样代码更加简洁
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> res;
        if(words.empty()||s.empty()||words[0].empty()) return res;
        //统计数量与长度
        int num = words.size();
        //获取单个字符串长度
        int lens = words[0].size();
        unordered_map<string,int> dict;
        //遍历每个map，统计出现频率
        for(auto x:words)
        {
            dict[x]++;
        }
        //总长和数量
        int total_lens = s.size(),kinds = dict.size();
        //左右
        int left,right;
        //遍历整个s子串
        for(int i=0;i<lens;i++)
        {
            //设置hash表
            unordered_map<string,int>seen;
            //更新左右指针
            left = right = i;
            int match = 0;
            //设置边界条件
            while(right<total_lens-lens+1)
            {
                //获取待确认的子串
                string pat = s.substr(right,lens);
                //跟新右指针值
                right += lens;
                //检查是否是子串
                if(dict.find(pat) != dict.end())
                {
                    //是当前++
                    seen[pat] ++;
                    //当前和目标相同，表示这个匹配结束
                    if(seen[pat] == dict[pat]) match++;
                }else
                {
                    //错误，更新right,重新设置
                    left = right;
                    seen.clear();
                    match = 0;
                }
                //达到条件，要再次进行回退更新左指针，这样可以尽可能减少重复子串的匹配；避免子串的重复
                while(left<right && match == kinds)
                {
                    //如果左右数目对应，添加结果
                    if(right-left == num*lens) res.push_back(left);
                    //获取当前第一个子串
                    string tmp = s.substr(left,lens);
                    //更新left
                    left += lens;
                    //检查是否存在
                    if(dict.find(tmp) != dict.end())
                    {
                        //存在，原来的观测数目--
                        seen[tmp] --;
                        //如果达到要求，匹配数目--
                        if(seen[tmp] < dict[tmp]) match--; 
                    }
                                       
                }         
            }
        }
        return res;
        
    }
};
//优质解答3：针对用例进行操作，和1基本相同
时间复杂度O(n*m) 空间复杂度O(m)
class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        vector<int> ans;
        //注意这里的s.substr(0,10)=="ababababab"；没有它就只能打败7.69%的用户了
        if(s.empty()||words.empty()||s.substr(0,10)=="ababababab")
           return ans;
        int n=words.size(), l=words[0].size(),target=0;
        //计算目标的所有ASCII总值
        for(int i=0;i<n;i++)
            target+=sum(words[i]);
        //创建目标数组
        int tag[n];
        int valid=1,ls=s.size();
        //计算最大长度
        int L=n*l;
        int sum_cur;
        //当前比较字符串
        string cur;
        //重新设置
        memset(tag,0,n*sizeof(int));
        //遍历字符串进行比较
        for(int i=0;i+L-1<ls;i++){
            valid=1;
            //当其为0计算字符串值
            if(i==0)
                sum_cur=sum(s.substr(0,L));
            else{
                //更改ASCII值
                sum_cur-=s[i-1];
                sum_cur+=s[i+L-1];
            }
            //不同，直接跳过
            if(sum_cur!=target)  continue;
            //检查是否正确
            for(int j=0;j<n;j++){
                //重新设置target
                if(valid==0){
                    memset(tag,0,n*sizeof(int));
                    break;
                }
                //获取当前的
                cur=s.substr(i+j*l,l);
                //查找每一个串
                for(int k=0;k<n;k++){
                    //如果相同，并且tag为0
                    if(cur==words[k]&&tag[k]==0){
                        //更新target
                        tag[k]=1;
                        break;
                    }
                    //最后一个都到了，表示存在
                    if(k==n-1)  valid=0;
                }
            }
            //将值添加到结果中
            if(valid)   ans.push_back(i);
            //重新设置targte值
            memset(tag,0,n*sizeof(int));
        }
        return ans;
    }
    //计算字符串的ASCII总值
    int sum(string s){
        int ans=0;
        for(int i=0;i<s.size();i++)
           ans+=s[i];
        return ans;
    }
        
};

//官方题解：

//优质解答：


*/
