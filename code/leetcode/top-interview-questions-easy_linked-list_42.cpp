/* 
data-time 2019-09-22 09:52:56


题目描述:
删除链表的倒数第N个节点

给定一个链表，删除链表的倒数第 n 个节点，并且返回链表的头结点。

示例：

给定一个链表: 1->2->3->4->5, 和 n = 2.

当删除了倒数第二个节点后，链表变为 1->2->3->5.
说明：

给定的 n 保证是有效的。

进阶：

你能尝试使用一趟扫描实现吗？


链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/6/linked-list/42/

/*

主要思路：1.没什么好说的，使用双指针共同移动，当第一个指针移动了n位时，第二个指针才开始移动，直到结尾获得第n个指针的位置。然后删除走一波。注意这里要找到指定指针的前一个指针
        时间复杂度O(n)
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){return head;}
        if(head->next==NULL){
            if(n>0){
                head=NULL;
                return head;
            }
        }
        ListNode* work_ptr=head;
        ListNode* head_ptr=head;
        int i=0;
        //这里循环进行遍历
        while (head_ptr!=NULL)
        {
            
            head_ptr=head_ptr->next;
            if(i>n){
                work_ptr=work_ptr->next;
            }
            ++i;
        }
        if(i==n){return head->next;}
        ListNode* temp_ptr=work_ptr->next;
        work_ptr->next=work_ptr->next->next;
        delete(temp_ptr);
        temp_ptr=NULL;
        return head;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,2};
    ListNode* node_ptr=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.removeNthFromEnd(node_ptr,test_int);
    PrintfList(result);
    DeleteList(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：先创建一个空的头结点，方便之后的遍历操作,这里将一个指针分离开，避免了循环中的判断，因此运行更加快速。
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        //这里为了方便节点遍历，新建了一个空的头结点
        ListNode* dummy=new ListNode(0);
        dummy->next=head;
        ListNode* first=dummy;
        ListNode* second=dummy;
        for(int i=1;i<=n;i++)
            first=first->next;
        while(first->next!=nullptr){
            first=first->next;
            second=second->next;
        }
        second->next=second->next->next;
        return dummy->next;
    }
};
//优质解答2：和上述思路一样，不过代码更加简洁
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* q = head;
        while(n--)q = q->next;
        ListNode* p = head;
        ListNode* h = new ListNode(0);
        h->next = head;
        ListNode* pre = h;
        
        while(q){
            q = q->next;
            p = p->next;
            pre = pre->next;
        }
        pre->next = p->next;
        if(p == head)head=p->next;
        delete p,h;
        return head;
    }
};
//对于多种情况进行了快速的return.
class Solution {
public:
  ListNode* removeNthFromEnd(ListNode* head, int n) {
    if (head == nullptr) {
      return head;
    }
    ListNode *pre, *ptr, *front;
    pre = NULL;
    ptr = front = head;
    for (int i = 1; i < n; ++i) {
      front = front->next;
    }
    while (front->next != 0) {
      pre = ptr;
      front = front->next;
      ptr = ptr->next;
    }
    // delete
    if (pre != NULL) {
      pre->next = ptr->next;
      delete ptr;
    }
    else {
      head = ptr->next;
      delete ptr;
    }
    return head;
  }
};
*/
