/* 
data-time 2019-10-07 14:20:56


题目描述:

两两交换链表中的节点

给定一个链表，两两交换其中相邻的节点，并返回交换后的链表。

你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。

 

示例:

给定 1->2->3->4, 你应该返回 2->1->4->3.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/swap-nodes-in-pairs
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：这个纯粹的就是考察链表的基本操作，写一个链表节点交换函数就可以了
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
    void swapNode(ListNode* node1_pre){
        ListNode* node1=nullptr;
        ListNode* node2=nullptr;
        if(node1_pre->next==nullptr) return ;
        node1=node1_pre->next;
        if(node1->next==nullptr) return;
        node2=node1->next;
        ListNode* next=nullptr;
        node1_pre->next=node2;
        node1->next=node2->next;
        node2->next=node1;

    }
    ListNode* swapPairs(ListNode* head) {
        ListNode* pre_head;
        pre_head->next=head;
        ListNode* work_ptr=pre_head; 
        while(work_ptr!=nullptr){
            swapNode(work_ptr);
            if(work_ptr->next!=nullptr) work_ptr=work_ptr->next->next;
            else break;
        }
        return pre_head->next;
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
    auto result=my_solution.swapPairs(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *h=new ListNode(-1);
        h->next=head;
        ListNode *pre=h;

        while(pre->next!=NULL && pre->next->next!=NULL)
        {
            //获取节点1
            ListNode *node1 = pre->next;
            //获取节点2
            ListNode *node2 = node1->next;
            //获取尾部节点
            ListNode *lat = node2->next;
            //进行交换
            pre->next = node2;          
            node2->next = node1;
            node1->next = lat;  
            pre = node1;
        }
        return h->next;
        
    }
};

//优质解答2：思路一样代码更加简洁
class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        ListNode* root=new ListNode(-1);
        ListNode *pre=root,*p=head,*q;
        root->next=head;
        if(!head||!head->next)return head;
        q=p->next;
        while(q!=nullptr){
            pre->next=q;
            p->next=q->next;
            q->next=p;
            pre=p;
            if(!p->next)break;
            p=p->next;
            q=p->next;
        }
        return root->next;
    }
};

//官方题解：

//优质解答：
https://leetcode-cn.com/problems/swap-nodes-in-pairs/solution/c-jian-dan-di-gui-by-da-li-wang-5/

*/
