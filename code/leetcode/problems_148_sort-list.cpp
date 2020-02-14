/* 
data-time 2020-02-14 13:10:56


题目描述:

148. 排序链表

在 O(n log n) 时间复杂度和常数级空间复杂度下，对链表进行排序。

示例 1:

输入: 4->2->1->3
输出: 1->2->3->4

示例 2:

输入: -1->5->3->4->0
输出: -1->0->3->4->5

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/sort-list
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：主要思路：
 1. 先使用快慢指针；将链表分成两块;然后将其分成两个指针，不断进行分割，对其进行递归排序
 时间复杂度O(n*log(n))
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
    ListNode* mergSort(ListNode* head){
        if(!head||!head->next) return head;
        ListNode *slow=head,*fast=head;
        ListNode *next=nullptr;
        while(fast&&fast->next){
            fast=fast->next->next;
            next=slow;
            slow=slow->next;
        }
        next->next=nullptr;
        ListNode *r=mergSort(slow);
        ListNode *l=mergSort(head);
        
        return merg(l,r);
    }
    ListNode* merg(ListNode *l,ListNode* r)
    {
        if(!l) return r;
        if(!r) return l;
        if(l->val<r->val){
            l->next=merg(l->next,r);
            return l;
        }else{
            r->next=merg(r->next,l);
            return r;
        }
    }
    ListNode* sortList(ListNode* head) {
        if(!head||!head->next) return head;
        return mergSort(head);
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
    auto result=my_solution.mergSort(node_ptr);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：直接拷贝到vector中使用sort
时间复杂度O(n+Nlog(k));空间复杂度O(n)

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int> nums;
        int i = 0;
        for (auto *p = head; p; p = p->next) 
            nums.push_back(p->val);
        sort(nums.begin(), nums.end());
        for (auto *p = head; p; p = p->next)
            p->val = nums[i++];
        return head;
    }
};

//优质解答2：使用循环代替递归

class Solution {
public:
    ListNode* sortList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)return head;
        ListNode *fast = head, *slow = head;
        while(fast->next != nullptr && fast->next->next != nullptr){
            fast = fast->next->next;
            slow = slow->next;
        }
        fast = slow;
        slow = slow->next;
        fast->next = nullptr;

        ListNode *l1 = sortList(head);
        ListNode *l2 = sortList(slow);
        return mergeTwoLists(l1, l2);
    }
    ListNode* mergeTwoLists(ListNode *l1, ListNode *l2){
         ListNode dummyHead(0);
        auto p = &dummyHead;
        while (l1 && l2) {
            if (l1->val < l2->val) {
                p->next = l1;
                p = l1;
                l1 = l1->next;       
            } else {
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }
        }
        p->next = l1 ? l1 : l2;
        return dummyHead.next;
    }
//优质解答3：使用快速排序进行操作
ListNode *partion(ListNode *pBegin,ListNode *pEnd){ 
    if(pBegin==pEnd||pBegin->next==pEnd) 
    return pBegin; 
    int key=pBegin->val; 
    //选择pBegin作为基准元素
    ListNode *p=pBegin,*q=pBegin; 
    while(q!=pEnd){ 
        //从pBegin开始向后进行一次遍历 
        if(q->val<key){ 
            p=p->next; 
            swap(&p->val,&q->val); 
        } 
            q=q->next; 
    } 
    swap(&p->val,&pBegin->val); 
    return p; 
} 
void quick_sort(ListNode *pBegin,ListNode *pEnd){ 
    if(pBegin==pEnd||pBegin->next==pEnd) return;
    ListNode *mid=partion(pBegin,pEnd);
    quick_sort(pBegin,mid);
    quick_sort(mid->next,pEnd); 
    }
ListNode* sortList(ListNode* head) { 
    if( head == NULL || head->next == NULL ) return head;
    if(head==NULL||head->next==NULL) return head; 
    quick_sort(head,NULL); 
    return head;
}

作者：cocowy
链接：https://leetcode-cn.com/problems/sort-list/solution/shi-shang-zui-yi-dong-de-gui-bing-cyu-yan-dai-ma-b/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。
//官方题解：

//优质解析：
https://leetcode-cn.com/problems/sort-list/solution/sort-list-gui-bing-pai-xu-lian-biao-by-jyd/
*/
