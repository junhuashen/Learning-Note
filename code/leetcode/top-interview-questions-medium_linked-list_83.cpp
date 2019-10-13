/* 
data-time 2019-10-13 12:20:56


题目描述:

奇偶链表

给给定一个单链表，把所有的奇数节点和偶数节点分别排在一起。请注意，这里的奇数节点和偶数节点指的是节点编号的奇偶性，而不是节点的值的奇偶性。

请尝试使用原地算法完成。你的算法的空间复杂度应为 O(1)，时间复杂度应为 O(nodes)，nodes 为节点总数。

示例 1:

输入: 1->2->3->4->5->NULL
输出: 1->3->5->2->4->NULL
示例 2:

输入: 2->1->3->5->6->4->7->NULL 
输出: 2->3->6->7->1->5->4->NULL
说明:

应当保持奇数节点和偶数节点的相对顺序。
链表的第一个节点视为奇数节点，第二个节点视为偶数节点，以此类推。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/31/linked-list/83/

/*

主要思路：使用一个index统计当前指针的奇偶位数，然后分别获取两个链表的头指针。根据index奇偶性将节点添加到对应链表尾部，最后将奇数链表追加到偶数链表之后
        时间复杂度O(n);空间复杂度O(1)
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
    ListNode* oddEvenList(ListNode* head) {
         if(head==nullptr||head->next==nullptr) return head;
        ListNode *even_head=head;
        ListNode *old_head=head->next;
        ListNode *even_end=even_head;
        ListNode *old_end=old_head;
        ListNode *work_ptr=old_head->next;
        for(int i=3;work_ptr!=nullptr;++i){
            if(i%2==0){
                old_end->next=work_ptr;
                old_end=old_end->next;
            }else{
                even_end->next=work_ptr;
                even_end=even_end->next;
            }
            work_ptr=work_ptr->next;
        }
        old_end->next=nullptr;
        even_end->next=old_head;
        return even_head;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,2,3,4,5};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.oddEvenList(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答：直接使用双指针，两步进行迭代，用old和even的交叉特性，避免了对于下标的再次判断
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if(!head)   return nullptr;
        ListNode* even = head -> next;
        ListNode* oddtemp = head;
        ListNode* eventemp = even;
        while(oddtemp && eventemp && eventemp -> next){
            oddtemp -> next = eventemp -> next;
            oddtemp = oddtemp -> next;
            eventemp -> next = oddtemp -> next;
            eventemp = eventemp -> next;
        }
        if(!eventemp){
            oddtemp -> next = even;
        }
        else{
            eventemp -> next = nullptr;
            oddtemp -> next = even;
        }
        return head;
    }
};



*/
