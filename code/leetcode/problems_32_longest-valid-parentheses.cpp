/* 
data-time 2019-11-26 12:35:56


题目描述:

32. 最长有效括号

示例 1：

给定一个只包含 '(' 和 ')' 的字符串，找出最长的包含有效括号的子串的长度。

示例 1:

输入: "(()"
输出: 2
解释: 最长有效括号子串为 "()"
示例 2:

输入: ")()())"
输出: 4
解释: 最长有效括号子串为 "()()"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/longest-valid-parentheses
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 使用动态规划，使用一个等长的数组arr保存前i个字符串中的最长有效子串长度，和抵消之后的剩余子字符串。对于i+1来说
            如果能和剩余子字符串形成配对，就在此基础上+1;否则将其传入剩余的字符串中，并保持上一个值。
            有效的字符串必定以“)”结尾，对于前一个是“("时，dp[i]=dp[i-2]+2
            如果dp[i]-1=")"则i-dp[i-1]-1必定为"("。
        时间复杂度O(n);空间复杂度O(n);
        2. 使用暴力破解，遍历所有的字符串，检查是否为有效字符串，时比较其大小。注意长度只能为偶数,然而还是超时了
        3. 使用数组进行保存当前。
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <stack>
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
    bool isEmptyString(string s){
        unsigned int s_length=s.size();
        if(s_length<2) return 0;
        std::stack<char> res;
        for(int i=0;i<s_length;++i){//设置当前有效字符串长度
            if(s[i]=='('){
                res.push('(');
            }else if(!res.empty()&&s[i]==')'){
                res.pop();
            }else{
                return false;
            }
        }
        return res.empty();
    }
    int longestValidParentheses1(string s) {
        unsigned int s_length=s.size();
        unsigned int result=0;
        int last_index=0;//记录上一个有效子串的最后一个下标，用来判断是否连续
        for(int i=2;i<=s_length;i=i+2){//子串长度
            for(int j=0;j<s_length-i;++j){//起始坐标位置
                if(isEmptyString(s.substr(j,i))){
                    result=result>i?result:i;
                    i=result;
                }
            }
        }
        return result;
    }
    int longestValidParentheses(string s){
        
        unsigned int s_length=s.size();
        vector<unsigned int > temp_vector(s_length,0);
        if(s.size()<2||s[0]==')') return 0;
        unsigned int max_result=0;
        for(int i=1;i<s_length;++i){
            //检查
            if(s[i]==')'){
                if(s[i-1]=='('){
                    temp_vector[i]=(i>1?temp_vector[i-2]:0)+2;
                }else
                {
                    //计算前一个的index起始值；即有效字符串的前一个字符
                    int k= i-temp_vector[i-1]-1;
                    //注意这里的k-1相当于多算了一下k值
                    if(k>=0&&s[k]=='(') temp_vector[i]=temp_vector[i-1]+(k>0?temp_vector[k-1]:0)+2;
                }
                //更新最长结果
                if(max_result<temp_vector[i]) max_result=temp_vector[i];
            }
        }
        return max_result;
        
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
    auto result=my_solution.longestValidParentheses("())()()(())((()(()()(((()))((((())((()(())()())(()((((()))()(()))(())()(())(()(((((())((((((()())())(()(()((())()))(()))))))()(()))((((())()()()))()()()(((()(()())(()()(()(()()(((()))))))()()))())())((()()))))))((()))(((()((())()(()()))((())))()()())))))))()))))(()))))()))()))()((())))((()))(()))))))(((()))))))))()(()()()(())((())()))()()(())))()()))(()())()))(((()())()))((())((((()))(()(()(()()()(((())()(((((()))((()(((((())(()()))((((((((()(()(()(()(())))(())(()())())(()((((()(())((()(())))(())))()(((((()(()()(())))))))())(())(())(()()(((())))((()))(((((()))))())))()((()))()))))())))))((())(((((()()))((((())))(((()(()(())())(((()(()(()()()())))())()))((()((())())()()()(((())(((((()((((((()((()())))((((())((()(((((((()(()((()()()(()(()())(()(()()((((())))()(((()())))(()()))()(()()()()(((((())(()))))((()))())))()((((((()))())))()(()))(())))((((()())(((((()()())(((((())(()())(()))))()(()()))()))))))())))(((())(()(()()))(()))()(((())))())((((()(((()))))))()(()(()))()()(()()))))))))((()))))))(())((()((()))()))((((((()())))))(()((())((((()))))(()(()()()()(()))()()(()(()))(()()(((((((()())(())(()())((())())()(()())((())()())())(()())))())))(())())())(())((()())(((()()))()))()()))()(()(())((((((((())))()((())((()((((((((((()))))(()(((((())(()(()())())))((())())))))()))(()((()()))((()((())()()()((()(())())((())())(()()(((())))))())()()(()))()())(()(()((())))((((()()(())))())(())(()(()(())())())(()()())()(())())))(()()(((())))((()()(((())()()(()())((((()()(()())(()((((()(()()(()(()(((()((()())(()()))(()((((()(((((()))))()()))(((()((((((()(()()()()())()))(()(())))))((()(((()())())))(((()()))(()(()(((((((()()))(()(())))())()(())())(())(()))(())(()))()()(()()())))))()))()((())(((()((((((((())()()))())))((()())(");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1:使用统计字符串中的最大对应的子串长度，还需要计算反向的长度

class Solution {
private:
    int result = 0;
    
public:
    void helper(string& s, vector<char> par) {
        int stack = 0;
        int lastValidPos = -1;
        //遍历字符串查看是否为
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == par[0]) stack++;
            if(s[i] == par[1]) stack--;
            //如果非対称，重置lastpos
            if(stack < 0) {
                stack = 0;
                lastValidPos = i;
            }
            //如果为0；计算最大长度
            if(stack == 0) {
                result = max(result, i - lastValidPos);
            }
        }
    }
    int longestValidParentheses(string s) {
        helper(s, {'(', ')'});
        //将其转置
        reverse(s.begin(), s.end());
        helper(s, {')', '('});
        reverse(s.begin(), s.end());
        
        return result;
    }
};


//优质解答2：思路一样代码更加简洁
class Solution {
public:
    int longestValidParentheses(string s) {
        int maxLen = 0;
        int last = -1;

        stack<int> lefts;
        //遍历数组
        for (auto i = 0; i < s.size(); ++i) {
            if (s[i] == '(') {
                lefts.push(i);
            } else {
                //如果栈空，将最后一个设置为i
                if (lefts.empty()) {
                    last = i;
                } else {//否则取出

                    lefts.pop();
                    //取出之后栈空，更新最大长度
                    if (lefts.empty()) {
                        maxLen = max(maxLen, i - last);
                    } else {//否则最大长度为当前到最后非正常字符串的长度。表示当前的最长距离
                        maxLen = max(maxLen, i - lefts.top());
                    }
                }
            }
        }

        return maxLen;
    }
};
//优质解答3：思路相同，使用了辅助的访问数组

class Solution {
public:
    int longestValidParentheses(string s) {
        if (s.empty()) {
            return 0;
        }
        vector<bool> left;
        stack<size_t> p;
        for (auto c : s) {
            if (c == '(') {
                left.push_back(false);
                p.push(left.size() - 1);
            }
            if (c == ')') {
                if (p.empty()) {
                    left.push_back(false);
                }
                else {
                    left.push_back(true);
                    left[p.top()] = true;
                    p.pop();
                }
            }
        }
        int max = 0;
        int temp = 0;
        for (auto b : left) {
            if (b) {
                ++temp;
            }
            else {
                max = max > temp ? max : temp;
                temp = 0;
            }
        }
        max = max > temp ? max : temp;
        return max;
    }
};

//官方题解：
https://leetcode-cn.com/problems/longest-valid-parentheses/solution/zui-chang-you-xiao-gua-hao-by-leetcode/
//优质解答：
https://leetcode-cn.com/problems/longest-valid-parentheses/solution/zui-chang-you-xiao-gua-hao-c-shi-xian-by-davidly/
https://leetcode-cn.com/problems/longest-valid-parentheses/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-w-7/
*/
