/* 
data-time 2019-09-23 14:20:56


题目描述:
请判断一个链表是否为回文链表。

示例 1:

输入: 1->2
输出: false
示例 2:

输入: 1->2->2->1
输出: true
进阶：
你能否用 O(n) 时间复杂度和 O(1) 空间复杂度解决此题？

链接:https://leetcode-cn.com/explore/interview/card/top-interview-questions-easy/6/linked-list/45/

/*

主要思路：1. 借助辅助数组，将链表进行反转，然后对每个节点进行比较，不同则直接返回；时间复杂度O(2n);空间复杂度O(n);
        2. 
            a.先遍历链表，找到尾部节点。同时统计链表长度，
            b.接下来找到链表中间点，并将前半部分的链表进行翻转，两个工作指针位置
            c.两个工作指针同时开始工作，比较数字是否相等。出现异常直接跳出。
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
    bool isPalindrome(ListNode* head) {
        if(head==nullptr||head->next==nullptr){return true;}
        ListNode* secend_work_ptr=nullptr;
        long int length=0;
        ListNode* work_ptr=head; 
        while (work_ptr!=nullptr)
        {
            work_ptr=work_ptr->next;
            ++length;
        }
        bool is_res=length%2;//判断长度是否为偶数
        //将前半段链表反转
        ListNode* res = nullptr;
        ListNode* cur = head;
        ListNode* tmp;
        for(int i=0;i<length/2;++i){
            tmp = cur->next;
            cur->next=res;
            res = cur;
            cur = tmp;
        }
        if(is_res){
            secend_work_ptr=cur->next;
        }else{
            secend_work_ptr=cur;
        }
        //接下来对两个指针进行遍历
        while(res!=nullptr&&secend_work_ptr!=nullptr){
            if(res->val!=secend_work_ptr->val){
                return false;
            }
            res=res->next;
            secend_work_ptr=secend_work_ptr->next;
        }
        return true;
        
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
    auto result=my_solution.isPalindrome(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答：思路一样，不过少了一次遍历，指直接查找中间节点并翻转，时间复杂度为O(n)
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(NULL == head || NULL == head->next){
            return true;
        }
        ListNode * pfast = head;
        ListNode * pslow = head;
        ListNode * prev = NULL; // 保存慢指针的上一个节点
        ListNode * pprev = NULL;// 保存慢指针上一个节点的指向
        // 找到中间节点，并且翻转链表的前半部分
        while(pfast && pfast->next){
            //记录慢指针的前一个值
            prev = pslow;
            pslow = pslow->next;
            //这里快指针一次跨越两个点，因此运行比较块
            pfast = pfast->next->next;
            //这里是翻转链表
            prev->next = pprev;
            //保留prev节点方便下一次使用
            pprev = prev;
        }
        ListNode * last_head = pslow;
        // 如果快指针的位置不为空，则说明链表的个数是奇数个，向后走一步
        if(pfast){
            last_head = last_head->next;
        }
        // 中间节点的上一个指针保存的前半段链表的头部即prev
        ListNode * first_head = prev;
        while(first_head && last_head){
            if(first_head->val != last_head->val){
                return false;
            }
            first_head = first_head->next;
            last_head = last_head->next;
        }
        return true;
    }
};

//优质解答2：先使用快慢指针找到中间值，再将后半段进行翻转，最后比较，时间复杂度为O(1.5*n);
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(!head||!head->next) return true;
        ListNode *fast = head, *slow = head;
        while(fast->next&&fast->next->next){
            fast = fast->next->next;
            slow = slow->next;
        }
        slow = slow->next;
        ListNode *phead  = reverse(slow);
        while(phead){
            if(phead->val!=head->val) return false;
            phead = phead->next;
            head = head->next;
        }
        return true;
    }
    
    ListNode* reverse(ListNode *phead){
        if(!phead||!phead->next)return phead;
        ListNode *p = phead, *q = phead->next,*s;
        while(q){
            s = q->next;
            q->next = p;
            p = q;
            q = s;
        }
        phead->next = NULL;
        phead = p;
        return phead;  
    }
    
};
*/
