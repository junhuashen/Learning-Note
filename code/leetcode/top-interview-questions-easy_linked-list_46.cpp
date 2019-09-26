/* 
data-time 2019-09-26 14:20:56


题目描述:
环形链表

给定一个链表，判断链表中是否有环。

为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 -1，则在该链表中没有环。

 

示例 1：

输入：head = [3,2,0,-4], pos = 1
输出：true
解释：链表中有一个环，其尾部连接到第二个节点。
![显示图片](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist.png)

示例 2：

输入：head = [1,2], pos = 0
输出：true
解释：链表中有一个环，其尾部连接到第一个节点。
![显示图片](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist_test2.png)

示例 3：

输入：head = [1], pos = -1
输出：false
解释：链表中没有环。
![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist_test3.png)

 

进阶：

你能用 O(1)（即，常量）内存解决此问题吗？

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/6/linked-list/46/

/*

主要思路：使用快慢指针来进行操作，快指针每次走两步，当两个指针相遇时，必定存在环，慢指针每次走一步。快指针一定先进入环，slow每次向前走一步，fast向前追了两步，因此每一步操作后fast到slow的距离缩短了1步，这样继续下去就会使得
两者之间的距离逐渐缩小：...、5、4、3、2、1、0 -> 相遇。又因为在同一个环中fast和slow之间的距离不会大于换的长度，因此到二者相遇的时候slow一定还没有走完一周（或者正好走完以后，这种情况出现在开始的时候fast和slow都在环的入口处）。
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
    bool hasCycle(ListNode *head) {
        ListNode *slow_ptr=head;
        ListNode *fast_ptr=head;
       while (slow_ptr !=nullptr&&fast_ptr!=nullptr&&fast_ptr->next !=nullptr)  
        {  
            slow_ptr = slow_ptr->next;
            fast_ptr = fast_ptr->next->next ;  
            if (slow_ptr == fast_ptr)  
                return true ;
        }  
        return false ;      
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,2,3,2,1};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.hasCycle(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答：思路一样,只不过多了提前返回的操作，时间复杂度为O(n)
class Solution {
public:
    bool hasCycle(ListNode *head) { 
        if (!head || !head->next) return false;
        
        auto *pPre = head;
        auto *pForward = head;
        
        while (pForward && pForward->next)
        {
            pPre = pPre->next;
            pForward = pForward->next->next;
            if (pPre == pForward)
            {
                return true;
            }
        }
        
        return false;
    }
};

*/
