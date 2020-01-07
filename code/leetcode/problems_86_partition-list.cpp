/* 
data-time 2019-11-21 13:47:56


题目描述:

86. 分隔链表

给定一个链表和一个特定值 x，对链表进行分隔，使得所有小于 x 的节点都在大于或等于 x 的节点之前。

你应当保留两个分区中每个节点的初始相对位置。

示例:

输入: head = 1->4->3->2->5->2, x = 3
输出: 1->2->2->4->3->5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/partition-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1.使用一个指针作为新链表头节点，当检测到有目标小的，就将节点删除并，添加到头节点上；直到链表末尾。然后将当前的head节点直接添加在后面
        将pre指针后面的链表添加到前面
        时间复杂度O(n);空间复杂度O(2)
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
    ListNode* partition(ListNode* head, int x) {
        ListNode* low_head=new ListNode(0);
        ListNode* height_head=new ListNode(0);
        ListNode* work_ptr=head;
        ListNode* low_work_ptr=low_head;
        height_head->next=head;
        head=height_head;
        while (work_ptr)
        {
            //如果小于
            if(work_ptr&&work_ptr->val<x){
                low_work_ptr->next=work_ptr;
                low_work_ptr=low_work_ptr->next;
                height_head->next=work_ptr->next;
            }else{
                height_head=work_ptr;
            }
            work_ptr=work_ptr->next;
            low_work_ptr->next=nullptr;
        }
        low_work_ptr->next=head->next;
        height_head->next=nullptr;
        return low_head->next;
        
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,4,3,2,5,2};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.partition(node_ptr,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：思路相同,没有在堆上分配内存，而是在栈中分配内存
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        ListNode lHead(0), rHead(0);
        ListNode* lTail = &lHead;
        ListNode* rTail = &rHead;
        for (ListNode* node = head; node;) {
            if (node->val < x) {
                lTail->next = node;
                lTail = lTail->next;
                node = node->next;
                lTail->next = nullptr;
            } else {
                rTail->next = node;
                rTail = rTail->next;
                node = node->next;
                rTail->next = nullptr;
            }
        }
        lTail->next = rHead.next;
        return lHead.next;
    }
};

//优质解答2:先查找开头所有小于target的数，再进一步划分查找
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* partition(ListNode* head, int x) {
        if (!head||!head->next) return head;
        ListNode* large = new ListNode(0);
        ListNode* res = large;
        ListNode* last = large;
        large->next = head;
        while (head && head->val < x){
            head = head->next;
            large = large->next;
            last = last->next;
        }
        while (head){
            //查找大于的数
            while (head && head->val>=x) {
                head = head->next;
                last = last->next;
            }
            if (!head) return res->next;
            //正常遍历
            last->next = head->next;
            head->next = large->next;
            large->next = head;
            large = large->next;
            head = last->next;
        }
    
        return res->next;
    }
};
// 官方题解：
https://leetcode-cn.com/problems/partition-list/solution/fen-ge-lian-biao-by-leetcode/
//优质解析：

https://leetcode-cn.com/problems/partition-list/solution/c-jian-dan-ti-jie-by-da-li-wang-15/
https://leetcode-cn.com/problems/partition-list/solution/liang-chong-si-lu-zhi-zhen-yu-he-shu-ju-yu-ge-bian/
// 

*/
