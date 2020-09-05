/* 
data-time 2019-11-08 13:10:56


题目描述:

合并K个排序链表

合并 k 个排序链表，返回合并后的排序链表。请分析和描述算法的复杂度。

示例:

输入:
[
  1->4->5,
  1->3->4,
  2->6
]
输出: 1->1->2->3->4->4->5->6


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/merge-k-sorted-lists
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1. 使用一个ListNode* 用来保存对应的每个链表的工作指针，使用一个头节点来指向当前的工作节点。
        每次找寻所有工作指针中的最小值进行插入，直到所有链表都为空;相当于冒泡排序
        时间复杂度O(n*k);空间复杂度O(k)
        2. 使用归并排序，对两个队列进行排序，直到完成
        时间复杂度O(n*log(n));空间复杂度O(0)
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        ListNode* head=new ListNode(0);
        int length=lists.size();
        if(lists.empty()) return head->next;
        if(length<2) return lists[0];
        //创建所有的指针
        ListNode* work_ptr=head;
        while(!lists.empty()){
            //每次遍历查找最小值指向的指针
            int temp_min=INT_MAX;
            int temp_min_index=0;
            for(int i=0;i<lists.size(); ++i){
                ListNode* temp_node=lists[i];
                if(temp_node==nullptr){
                    lists.erase(lists.begin()+i);
                    continue;
                }
                if(temp_min>=temp_node->val){
                    temp_min=temp_node->val;
                    temp_min_index=i;
                }
            }
            if(lists.empty()){
                break;
            }
            work_ptr->next=lists[temp_min_index];
            work_ptr=lists[temp_min_index];
            lists[temp_min_index]=lists[temp_min_index]->next;
            //断链
            work_ptr->next=nullptr;
        }
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
    auto result=my_solution.mergeKLists(lists);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：进行分治解析，
时间复杂度O(Nlog(k));空间复杂度O(1)

class Solution {
public:
    //将两个链表进行合并
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* node0 = new ListNode(0);
        ListNode* ret_list_pre = node0;
        ListNode* left_list ;
        node0->next = l1;
        while(l2!=NULL)
        {
            if(node0->next == NULL)
            {
                node0->next = l2;
                l2 = NULL;
            }else if(node0->next->val > l2->val){//下一个节点的值大于l2节点的值，将l2接到这个节点上
                left_list = node0->next;
                node0->next = l2;
                l2 = left_list;
                node0 = node0->next;
            }else{
                node0 = node0->next;
            }
        }
        return ret_list_pre->next;
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size() == 0)
        {
            return NULL;
        }else if(lists.size() == 1){
            return lists[0];
        }
        int lists_len = lists.size();
        int new_len = lists_len / 2;
        vector<ListNode*> lists_new;
        int i = 0;
        while(i<new_len)
        {
            //将链表进行两两归并
            lists_new.push_back(mergeTwoLists(lists[i*2],lists[i*2+1]));
            i++;
        }
        //将最后一个进行添加
        if(2*i < lists_len)
        {
            lists_new.push_back(lists[i*2]);
        }
        //进行归并排序
        return mergeKLists(lists_new);
    }
};

//官方题解：
https://leetcode-cn.com/problems/merge-k-sorted-lists/solution/he-bing-kge-pai-xu-lian-biao-by-leetcode/
//优质解析：

*/
