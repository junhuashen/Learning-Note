/* 
data-time 2019-10-13 14:20:56


题目描述:

相交链表

编写一个程序，找到两个单链表相交的起始节点。

如下面的两个链表：

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/14/160_statement.png)

在节点 c1 开始相交。

 

示例 1：

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/14/160_example_1.png)

输入：intersectVal = 8, listA = [4,1,8,4,5], listB = [5,0,1,8,4,5], skipA = 2, skipB = 3
输出：Reference of the node with value = 8
输入解释：相交节点的值为 8 （注意，如果两个列表相交则不能为 0）。从各自的表头开始算起，链表 A 为 [4,1,8,4,5]，链表 B 为 [5,0,1,8,4,5]。在 A 中，相交节点前有 2 个节点；在 B 中，相交节点前有 3 个节点。
 

示例 2：

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/14/160_example_2.png)

输入：intersectVal = 2, listA = [0,9,1,2,4], listB = [3,2,4], skipA = 3, skipB = 1
输出：Reference of the node with value = 2
输入解释：相交节点的值为 2 （注意，如果两个列表相交则不能为 0）。从各自的表头开始算起，链表 A 为 [0,9,1,2,4]，链表 B 为 [3,2,4]。在 A 中，相交节点前有 3 个节点；在 B 中，相交节点前有 1 个节点。

示例 3：

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/14/160_example_3.png)

输入：intersectVal = 0, listA = [2,6,4], listB = [1,5], skipA = 3, skipB = 2
输出：null
输入解释：从各自的表头开始算起，链表 A 为 [2,6,4]，链表 B 为 [1,5]。由于这两个链表不相交，所以 intersectVal 必须为 0，而 skipA 和 skipB 可以是任意值。
解释：这两个链表不相交，因此返回 null。
 

注意：

如果两个链表没有交点，返回 null.
在返回结果后，两个链表仍须保持原有的结构。
可假定整个链表结构中没有循环。
程序尽量满足 O(n) 时间复杂度，且仅用 O(1) 内存。

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/31/linked-list/84/

/*

主要思路：因为两个都是单链表，因此先遍历两个链表，进行统计两个链表的长度。获取长度差(m-n)，让长的先走(m-n)个节点，然后用两个指针同时遍历，如果两个指针next指向的节点相同则返回next节点。
        时间复杂度O(2*m+2*n);空间复杂度O(1)
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int a=0,b=0;
        ListNode *a_work_ptr=headA;
        ListNode *b_work_ptr=headB;
        while(a_work_ptr){
            ++a;
            a_work_ptr= a_work_ptr->next;
        }
        while(b_work_ptr){
            ++b;
            b_work_ptr= b_work_ptr->next;
        }
        a_work_ptr=headA;
        b_work_ptr=headB;
        //提前遍历
        if(a>b){
            while(a-b){
                a_work_ptr= a_work_ptr->next;
                --a;
            }
        }else{
            while(b-a){
                b_work_ptr=b_work_ptr->next;
                --b;
            }
        }
        while(a_work_ptr&&b_work_ptr){
            if(a_work_ptr==b_work_ptr){
                return a_work_ptr;
            }
            a_work_ptr= a_work_ptr->next;
            b_work_ptr=b_work_ptr->next;
        }
        return nullptr;

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
    auto result=my_solution.getIntersectionNode(node_ptr,node_ptr2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：直接反复循环遍历直到找到相同点，当其到达末尾时，交换a,b指针.这是因为由于差异性，总会有一个先到达尾部。
    假设A比B多3个节点，交换之后，a要比b多走3个节点，刚好弥补三个节点的差。一次交换后两个节点的差不存在。
    相当于把两个链表合成一个循环链表，再进行查找和遍历
    就是a + all +b = b + all + a

    也可以理解为先计算两个链表的长度，将长度较长的那个链表的临时指针向后滑动，
    直到临时指针到最后一个节点的长度等于最短链表的长度，
    然后将两个链表临时头指针每滑动一次比较一次，如果相等，该节点即为相交的节点，滑动到链表最后都不存在相同的节点，则说明链表不想交
//https://leetcode-cn.com/problems/intersection-of-two-linked-lists/solution/xiang-jiao-lian-biao-by-leetcode/
//https://leetcode-cn.com/problems/intersection-of-two-linked-lists/solution/tu-jie-xiang-jiao-lian-biao-by-user7208t/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode*a=headA,*b = headB;
        if(a==nullptr || b==nullptr)
            return nullptr;
        while((a!=nullptr && b!=nullptr) && a!=b){
            if(a)
                a = a->next;
            if(b)
                b = b->next;
            if(a == b)
                return a;
            if(a == nullptr)
                a = headB;
            if(b == nullptr)
                b = headA;
          
        }
        return a;
    }
};


//优质解答2：思路一样代码更加简洁，注意品味
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if ((!headA && !headB) || (!headA || !headB)) return nullptr;
        ListNode* pA = headA, *pB = headB;
        
        int lA = 1, lB = 1;
        
        while (pA && pA->next) {
            ++lA;
            pA = pA->next;
        }
        
        while (pB && pB->next) {
            ++lB;
            pB = pB->next;
        }
        
        if (pA != pB) return nullptr;
        
        int diff = abs(lA - lB);
        ListNode* pFast = (lA > lB) ? headA : headB;
        ListNode* pSlow = (lA > lB) ? headB : headA;
        for (int i = 0; i < diff; ++i) pFast = pFast->next;
        
        while (pFast && pSlow) {
            if (pFast == pSlow) return pFast;
            pFast = pFast->next;
            pSlow = pSlow->next;
        }
        
        return nullptr;
    }
};



*/
