/* 
data-time 2019-11-08 18:47:56


题目描述:

25. K 个一组翻转链表

合并 k 个排序链表，返回合并后的排序链表。请分析和描述算法的复杂度。

给你一个链表，每 k 个节点一组进行翻转，请你返回翻转后的链表。

k 是一个正整数，它的值小于或等于链表的长度。

如果节点总数不是 k 的整数倍，那么请将最后剩余的节点保持原有顺序。

示例 :

给定这个链表：1->2->3->4->5

当 k = 2 时，应当返回: 2->1->4->3->5

当 k = 3 时，应当返回: 3->2->1->4->5

说明 :

你的算法只能使用常数的额外空间。
你不能只是单纯的改变节点内部的值，而是需要实际的进行节点交换。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-nodes-in-k-group
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 使用双指针来检测是否存在下一个k周期，每次进入其中开始检测，没有则跳出，
        存在就循环k次将k*i~k*(i+1)的链表进行转置
        时间复杂度O(n+k);空间复杂度O(0)
        2. 先统计长度，然后求余分块，进行计算
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

#define INT_MIN INT32_MIN
#define INT_MAX INT32_MAX
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
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode *work_ptr=head,*priv_ptr=head;
        ListNode *result=new ListNode(0);
        ListNode *new_head=result;
        ListNode *end_ptr=nullptr;
        int size=0;
        //统计链表总长度
        while(work_ptr!=nullptr){
            work_ptr=work_ptr->next;
            ++size;
        }
        if(size<k) return head;
        //获取整数周期
        int new_size=size-(size%k);
        int new_step=size/k;
        work_ptr=head;
        while(new_step){
            for(int i=0;i<k&&work_ptr;++i){
                ListNode* next_ptr=work_ptr->next;
                work_ptr->next=new_head->next;
                new_head->next=work_ptr;
                //记录尾部指针防止断链
                if(end_ptr==nullptr) end_ptr=work_ptr;
                work_ptr=next_ptr;
            }
            //重新更新head指针
            new_head=end_ptr;
            end_ptr=nullptr;
            --new_step;
        }
        if(work_ptr!=nullptr) new_head->next=work_ptr;
        ListNode* new_result=result->next;
        delete result;
        return new_result;
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
    vector<ListNode*> lists({node_ptr,node_ptr2});
    PrintfList(node_ptr);
    int test_int=1;
	int time_point_1=clock();
    auto result=my_solution.reverseKGroup(node_ptr,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：找到满足长度的节点，再进行逆序操作。
时间复杂度O(2*n) ;空间复杂度O(0)
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        //创建头结点
        ListNode* rh=new ListNode(0);
        rh->next=head;
        //前节点
        ListNode* pre=rh;
        //当前节点
        ListNode* cur=head;
        //尾部节点
        ListNode* tail=rh;

        rh->next = head;
        tail->next = head;
        pre->next = head;
        while(true){
            //先将尾部节点部署到新的开头
            for (int i=0;i<k&&tail;i++){
                tail = tail->next;
            }
            //如果尾部节点为空直接跳出
            if(!tail)
                break;
            //如果开始节点不是尾部节点，交换尾部指针和头指针的位置
            while(pre->next!=tail){
                //当前值
                cur = pre->next;
                //前驱直接指向后继
                pre->next = cur->next;
                //更改当前指针的后继为tail
                cur->next = tail->next;
                //更改尾部指针为当前
                tail->next = cur;
            }
            //更改前驱为head
            pre=head;
            tail=head;
            //更新head
            head=pre->next;
            
        }
        return rh->next;
        
    }
};
//优质解答2：使用递归的方式，进行
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* pre=head;
        int count=0;
        //先进行遍历，移动头指针
        while(pre!=NULL&&count<k){
            pre=pre->next;
            count++;
        }
        //如果长度符合要求
        if(count==k) {
            //递归调用，进行调整
            pre=reverseKGroup(pre,k);
            //将前面部分进行逆序交换
            while(count>0){ 
                ListNode* temp=head->next; 
                head->next=pre;
                pre=head;
                head=temp;
                count--;
            }
            //更新head；
            head=pre;
        }
        //返回调整后的链表头
        return head;
    }
};

//官方题解：
https://leetcode-cn.com/problems/merge-k-sorted-lists/solution/he-bing-kge-pai-xu-lian-biao-by-leetcode/
//优质解析：
https://leetcode-cn.com/problems/reverse-nodes-in-k-group/solution/c-liang-chong-jie-fa-bian-li-di-gui-dai-xiang-xi-z/

*/
