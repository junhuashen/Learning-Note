/* 
data-time 2019-09-23 13:52:56


题目描述:
合并两个有序链表

反转一个单链表。

将两个有序链表合并为一个新的有序链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 

示例：

输入：1->2->4, 1->3->4
输出：1->1->2->3->4->4

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/6/linked-list/44/

/*

主要思路：直接双指针，分别进行工作，比较大小，小于，将当前元素加入最终节点，移动指针，大于移动另外一个指针，
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL){return l2;}
        if(l2==NULL){return l1;}
        ListNode* head=new ListNode(0);
        ListNode* work_ptr=head;
        while (l1!=NULL&&l2!=NULL)
        {
            if(l1->val<=l2->val){
                work_ptr->next=l1;
                l1=l1->next;
            }else
            {
                work_ptr->next=l2;
                l2=l2->next;
            }
            work_ptr=work_ptr->next;
            
        }
        if(l1!=NULL)
        {
            work_ptr->next=l1;
        }
        if(l2!=NULL)
        {
            work_ptr->next=l2;
        }
        return head->next;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,3,4};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.mergeTwoLists(node_ptr,node_ptr2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    PrintfList(result);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答：思路一样，当两者相同时，直接添加节点，避免了多的一次遍历
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1 == NULL) return l2;
        if(l2 == NULL) return l1;
        ListNode* ret = new ListNode(0);
        ListNode* cur = ret;
        while(l1 != NULL && l2 != NULL){
            if(l1->val == l2->val){
                cur->next = new ListNode(l1->val);
                cur = cur->next;
                cur->next = new ListNode(l2->val);
                l1 = l1->next;
                l2 = l2->next;
            }else if(l1->val > l2->val){
                cur->next = new ListNode(l2->val);
                l2 = l2->next;
            }else{
                cur->next = new ListNode(l1->val);
                l1 = l1->next;
            }
            cur = cur->next;
        }
        while(l1 != NULL){
            cur->next = new ListNode(l1->val);
            cur = cur->next;
            l1 = l1->next;
        }
        while(l2 != NULL){
            cur->next = new ListNode(l2->val);
            cur = cur->next;
            l2 = l2->next;
        }
        return ret->next;
    }
};

//优质解答2：和上述思路一样，将其转变为或运算，避免了剩下的两个while循环，提高了运行效率
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        
        ListNode ans0(0);
        ListNode* ans = &ans0;
        while(l1||l2)
        {          
            if(!l2)
            {
                ans->next = l1;
                l1 = l1->next;
            }
            else if(!l1)
            {
                ans->next = l2;
                l2 = l2->next;
            }
            else if(l1->val <= l2->val)
            {
                ans->next = l1;
                l1 = l1->next;
            }
            else
            {
                ans->next = l2;
                l2 = l2->next;
            }
            ans = ans->next;
        }
        return ans0.next;
        
    }
};
*/
