/* 
data-time 2019-11-13 12:47:56


题目描述:

61 旋转链表

给定一个链表，旋转链表，将链表每个节点向右移动 k 个位置，其中 k 是非负数。

示例 1:

输入: 1->2->3->4->5->NULL, k = 2
输出: 4->5->1->2->3->NULL
解释:
向右旋转 1 步: 5->1->2->3->4->NULL
向右旋转 2 步: 4->5->1->2->3->NULL
示例 2:

输入: 0->1->2->NULL, k = 4
输出: 2->0->1->NULL
解释:
向右旋转 1 步: 2->0->1->NULL
向右旋转 2 步: 1->2->0->NULL
向右旋转 3 步: 0->1->2->NULL
向右旋转 4 步: 2->0->1->NULL

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rotate-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 先统计链表长度，然后k%length避免重复计算；然后使用双指针，保证指针之间的长度为k
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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* pre=head,*work_ptr=head;
        int length=0;
        while (work_ptr)
        {
            ++length;
            work_ptr=work_ptr->next;
        }
        k%=length;
        work_ptr=head;
        while (k)
        {
            work_ptr=work_ptr->next;
            --k;
        }
        while (work_ptr&&work_ptr->next)
        {
            pre=pre->next;
            work_ptr=work_ptr->next;
        }
        work_ptr->next=head;
        head=pre->next;
        pre->next=nullptr;
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
    vector<int> vector_temp={1,2,3,4,5};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.rotateRight(node_ptr,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：思路完全相同，不过使用了循环链表；直接找准位置断开。
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(k == 0)
            return head;
        if(head == NULL)
            return head;
        if(head->next == NULL)
            return head;
        ListNode* t = head;
        int len = 1;
        while(t->next != NULL){
            len++; 
            t = t->next;
        }
        //注意这里链接尾部形成循环链表
        t->next = head;

        t = head;
        k %= len;
        for(int i = 0; i < k; i ++){
            //直接跨国k个
            while(t->next != head){
                t = t->next;
            }
            //重新指定头部
            head = t;
        }
        //到达尾部，即head的前一个
        while(t->next != head){
            t = t->next;
        }
        //置空
        t->next = NULL;

        return head;
    }
};
//优质解答2:使用快慢指针，先遍历k个数，如果超过长度，重新设置idx
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr) return nullptr;
        int idx = k;
        ListNode *fast=head;
        while(idx){
            if(fast) fast = fast->next, --idx;
            else {
                // 如果超长了的话, 就是用这个方式取余, 重新遍历一遍
                fast = head;
                idx = k%(k-idx);
            }
        }
        if(fast==nullptr) return head; // 这个时防止出现 k等于链表长度的情况
        ListNode *slow=head;
        //fast slow同时移动
        for(;fast->next!=nullptr; fast=fast->next, slow=slow->next);
        //断链，更换指针
        fast->next=head;
        head = slow->next;
        slow->next = nullptr;
        return head;
    }
};
//优质解答3：和思路一基本相同，和我的代码一抹一样
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr)
            return head;
        // 先求长度
        int cnt = 1;
        auto p = head;
        while(p->next != nullptr)
        {
            p = p->next;
            cnt ++;
        }

        auto first = head, second = head;
        k %= cnt;
        while(k --)
            first = first->next;

        while(first->next)
        {
            first = first->next;
            second = second->next;
        }
        
        first->next = head;
        head = second->next;
        second->next = nullptr;
        return head;
    }
};
// 官方题解：
https://leetcode-cn.com/problems/rotate-list/solution/xuan-zhuan-lian-biao-by-leetcode/
//优质解析：

https://leetcode-cn.com/problems/rotate-list/solution/yi-ci-bian-li-by-joy-teng-2/
// 

*/
