/* 
data-time 2019-09-22 09:52:56


题目描述:
反转链表

反转一个单链表。

示例:

输入: 1->2->3->4->5->NULL
输出: 5->4->3->2->1->NULL
进阶:
你可以迭代或递归地反转链表。你能否用两种方法解决这道题？


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/6/linked-list/43/

/*

主要思路：直接使用指针翻转，将首尾指针相连，接着将下一个和上一个指针的指向相反。直到遇到最后一个尾部指针。
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL){return head;}
        ListNode* work_ptr=head;
        if(head->next==NULL){return head;}
        ListNode* work_ptr_next=head->next;
        ListNode* temp=nullptr;
        while (work_ptr!=NULL&&work_ptr_next!=NULL)
        {
            temp=work_ptr_next->next;
            work_ptr_next->next=work_ptr;
            work_ptr=work_ptr_next;
            work_ptr_next=temp;
        }
        head->next=NULL;
        return work_ptr;
        
        
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,2,3,4};
    ListNode* node_ptr=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.reverseList(node_ptr);
    PrintfList(result);
    DeleteList(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路一样，只是开始的res指针为空，避免了指针的循环引用
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* res = nullptr;
        ListNode* cur = head;
        ListNode* tmp;
        while(cur != nullptr){
            tmp = cur->next;
            cur->next = res;
            res = cur;
            cur = tmp;
        }
        return res;
    }
};
//优质解答2：和上述思路一样，头一个节点为空节点，因此可以直接遍历，不用考虑循环链表问题
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==0||head->next==0) return head;
        ListNode* t1=0;
        ListNode* t2=head;
        ListNode* t3=t2->next;
        while (t3!=0)
        {
            t2->next=t1;
            t1=t2;
            t2=t3;
            t3=t3->next;
        }
        t2->next=t1;
        return t2;
    }
};
*/
