/* 
data-time 2020-04-17 20:22:56


题目描述:
445. 两数相加II

给定一个字符串，逐个翻转字符串中的每个单词。

 
给你两个 非空 链表来代表两个非负整数。数字最高位位于链表开始位置。它们的每个节点只存储一位数字。将这两数相加会返回一个新的链表。

你可以假设除了数字 0 之外，这两个数字都不会以零开头。

 

进阶：

如果输入链表不能修改该如何处理？换句话说，你不能对列表中的节点进行翻转。

 

示例：

输入：(7 -> 2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 8 -> 0 -> 7

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-two-numbers-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*
 主要思路:先遍历统计两个链表的长度。
 创建一个长度为最长值的stack;
 依次遍历，装入对应的数值
 然后，取出栈，并创建节点，使用头插法插入节点
 */

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
#include <stack>
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
//main function
class Solution {
public:
    int getLen(ListNode* l1){
        int res=0;
        if(!l1) return 0;
        while(l1){
            l1=l1->next;
            ++res;
        }
        return res;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
            if(!l1) return l2;
            else if(!l2) return l1;

            ListNode* work_ptr1=l1;
            ListNode* work_ptr2=l2;
            ListNode* new_head=new ListNode(0);
            ListNode* end=new_head;
            stack<pair<int,int>> sum_data;
            //统计长度
            int len1=getLen(l1);
            int len2=getLen(l2);
            if(len1>len2){
                int dif=len1-len2;
                while(dif){
                    sum_data.push({work_ptr1->val,0});
                    work_ptr1=work_ptr1->next;
                    dif--;
                }
            }else{
                int dif=len2-len1;
                while(dif){
                    sum_data.push({work_ptr2->val,0});
                    work_ptr2=work_ptr2->next;
                    dif--;
                }
            }
            //将剩余的数据压入
            while(work_ptr1&&work_ptr2){
                sum_data.push({work_ptr1->val,work_ptr2->val});
                work_ptr1=work_ptr1->next;
                work_ptr2=work_ptr2->next;
            }
            int set=0;
            //处理栈中的数据

            while(!sum_data.empty()){
                auto temp=sum_data.top();
                //cout<<" a"<<temp.first<<"b"<<temp.second<<endl;
                int res=temp.first+temp.second+set;
                if(res>9){
                    set=1;
                    res=res%10;
                }else{
                    set=0;
                }
                ListNode* temp_node=new ListNode(res);
                temp_node->next=new_head->next;
                new_head->next=temp_node;
                sum_data.pop();
            }
            if(set!=0){
                ListNode* temp_node=new ListNode(set);
                temp_node->next=new_head->next;
                new_head->next=temp_node;
            }
            return new_head->next;
    }
};


struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(nullptr) {}
 };

ListNode* vectortolist(vector<int> &v){
    ListNode *head = new ListNode(v[0]);
    ListNode *root=head;
    for(int i=1; i<v.size(); ++i){
        ListNode *t = new ListNode(v[i]);
        root->next = t;
        root = t;
    }
    return head;
}
void showlist(ListNode* head){
    while(head){
        cout << head->val << "   ";
        head = head->next;
    }
    cout << endl;
}

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<char>> temp_char=
    {
        {'.','.','.','.','.','.','.','.'},
        {'.','p','p','p','p','p','.','.'},
        {'.','p','p','B','p','p','.','.'},
        {'.','p','B','R','B','p','.','.'},
        {'.','p','p','B','p','p','.','.'},
        {'.','p','p','p','p','p','.','.'},
        {'.','.','.','.','.','.','.','.'},
        {'.','.','.','.','.','.','.','.'}

    };
    vector<int> vector_temp2={7,2,4,3};
    vector<int> vector_temp1={5,6,4};
    ListNode* l1=vectortolist(vector_temp2);
    ListNode* l2=vectortolist(vector_temp1);
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
    int time_point_1=clock();
    auto result=my_solution.addTwoNumbers(l1,l2);
    int time_point_2=clock();
    printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:先转置链表再操作
时间复杂度O(2*(n+m))；空间复杂度O(1)；
class Solution {
public:
    ListNode *reverse(ListNode *head){
        ListNode *pre=NULL,*cur=head,*temp;
        while(cur){
            temp=cur->next;
            cur->next=pre;
            pre=cur;
            cur=temp;
        }
        return pre;
    }
    ListNode* addTwo(ListNode* l1, ListNode* l2) {
	    ListNode preHead(0), *p = &preHead;
        int extra = 0;
        while (l1 || l2 || extra) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + extra;
            extra = sum / 10;
            p->next = new ListNode(sum % 10);
            p = p->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        return preHead.next;
	}
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        l1=reverse(l1);
        l2=reverse(l2);
        l1=addTwo(l1,l2);
        return(reverse(l1));
    }
};
//优质解析2：使用栈；代码相同；思路更加简洁
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> s1, s2;
        while (l1) {
            s1.push(l1 -> val);
            l1 = l1 -> next;
        }
        while (l2) {
            s2.push(l2 -> val);
            l2 = l2 -> next;
        }
        int carry = 0;
        ListNode* ans = nullptr;
        while (!s1.empty() or !s2.empty() or carry != 0) {
            int a = s1.empty() ? 0 : s1.top();
            int b = s2.empty() ? 0 : s2.top();
            if (!s1.empty()) s1.pop();
            if (!s2.empty()) s2.pop();
            int cur = a + b + carry;
            carry = cur / 10;
            cur %= 10;
            auto curnode = new ListNode(cur);
            curnode -> next = ans;
            ans = curnode;
        }
        return ans;
    }
};

作者：LeetCode-Solution
链接：https://leetcode-cn.com/problems/add-two-numbers-ii/solution/liang-shu-xiang-jia-ii-by-leetcode-solution/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解:
https://leetcode-cn.com/problems/add-two-numbers-ii/solution/liang-shu-xiang-jia-ii-by-leetcode-solution/
//优质解析:
https://leetcode-cn.com/problems/add-two-numbers-ii/solution/c-bu-yong-di-gui-bu-yong-zhan-yuan-di-ji-suan-by-a/

*/
