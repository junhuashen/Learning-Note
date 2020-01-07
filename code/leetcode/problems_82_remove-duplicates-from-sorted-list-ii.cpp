/* 
data-time 2019-11-20 13:47:56


题目描述:

82. 删除排序链表中的重复元素 II

给定一个排序链表，删除所有含有重复数字的节点，只保留原始链表中 没有重复出现 的数字。

示例 1:

输入: 1->2->3->3->4->4->5
输出: 1->2->5
示例 2:

输入: 1->1->1->2->3
输出: 2->3

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1.还是使用双指针法，work指针先查看下一个指针是否重复，如果不是直接将当前指针指向最后，
        如果重复，跳过所有重复元素，将work和next指向下一个；
        将pre指针后面的链表添加到前面
        时间复杂度O(2*n);空间复杂度O(0)
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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *work_ptr=head;
        ListNode *pre_ptr=new ListNode(0);
        pre_ptr->next=head;
        head=pre_ptr;
        while (work_ptr)
        {
            if(work_ptr&&((work_ptr->next&&work_ptr->val!=work_ptr->next->val)||work_ptr->next==nullptr)){
                pre_ptr->next=work_ptr;
                pre_ptr=pre_ptr->next;
                work_ptr=work_ptr->next;
            }else{
                int temp=work_ptr->val;
                work_ptr=work_ptr->next;
                while (work_ptr&&work_ptr->val==temp)
                {
                    work_ptr=work_ptr->next;
                }
            }
        }
        pre_ptr->next=nullptr;
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
    vector<int> vector_temp={1,2,3,3,4,4,5};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.deleteDuplicates(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：思路相同使用快慢指针进行操作
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* dummy=new ListNode(-1);
        dummy->next = head;
        ListNode* slow = dummy;
        ListNode* fast = dummy->next;
        while(fast!=nullptr)
        {
            //这段是查找重复的元素，当while的条件为false时，此时的fast是重复元素的最后一个元素
            while(fast->next!=nullptr && fast->val==fast->next->val) fast=fast->next;
            //slow和fast之间无重复元素
            if(slow->next == fast) slow =slow->next;
            else slow->next = fast->next;
            fast=fast->next;
        }
        return dummy->next;
    }
};
//优质解答2:使用快慢指针，思路相同
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* p=new ListNode(0);
        p->next=head;
        head=p;
        ListNode *left,*right;
        while(p->next)
        {
            left=p->next;
            right=left;
            while(right->next && right->next->val==left->val)
                right=right->next;
            if(left == right) p=p->next;
            else p->next=right->next;
        }
        return head->next;
    }
};
// 官方题解：

//优质解析：

https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/solution/da-zhi-ruo-yu-cyu-yan-zhi-xu-ni-tou-jie-dian-fa-by/
https://leetcode-cn.com/problems/remove-duplicates-from-sorted-list-ii/solution/cyu-yan-jian-jian-dan-dan-de-ji-xing-dai-ma-jie-30/
// 

*/
