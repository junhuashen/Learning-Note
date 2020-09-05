/* 
data-time 2019-11-22 13:47:56


题目描述:

92. 反转链表 II

反转从位置 m 到 n 的链表。请使用一趟扫描完成反转。

说明:
1 ≤ m ≤ n ≤ 链表长度。

示例:

输入: 1->2->3->4->5->NULL, m = 2, n = 4
输出: 1->4->3->2->5->NULL

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/reverse-linked-list-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：1.题目中注明了使用一趟扫描完成反转；因此需要使用一个指针进行遍历，
         当达到反转范围时，使用头插法，否则使用尾插法。
         时间复杂度O(n),空间复杂度O(0)
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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
         ListNode *result_head=new ListNode(0);
        ListNode *work_ptr=head,*res_end_ptr=result_head,*pre_ptr=result_head;
        int count=1;
        while (work_ptr)
        {
            ListNode *temp_next=work_ptr->next;
            //执行头插法
            if(count>=m&&count<=n){
                work_ptr->next=pre_ptr->next;
                pre_ptr->next=work_ptr;
                if(pre_ptr==res_end_ptr) res_end_ptr=work_ptr;
            }else{//执行尾插法
                res_end_ptr->next=work_ptr;
                res_end_ptr=res_end_ptr->next;
                pre_ptr=res_end_ptr;
                pre_ptr->next=nullptr;
            }
            //遍历指针
            work_ptr=temp_next;
            res_end_ptr->next=nullptr;
            ++count;
        }
        return result_head->next;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string`
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,2,3};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.reverseBetween(node_ptr,2,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：思路相同,在最后一个节点处，做了处理，只能处理一段的，不能处理多段的
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        ListNode *p = head;
        ListNode *last = NULL;
        ListNode *pBeg = NULL;
        ListNode *pBegLast = NULL;
        ListNode *pEnd = NULL;
        ListNode *pEndNext = NULL;
        int pos = 1;
        while(p!=NULL)
        {
            ListNode *tmp = p->next;

            if(pos ==n )
            {
                pEnd = p;
                pEndNext = p->next;
            }

            if(pos>m && pos<=n)
            {
                p->next = last;  
            }

            if(pos == m )
            {
                pBeg = p;
                pBegLast = last;
            }

            
          
            last = p;
            p =tmp;

            if(pos==n)
               break;

            pos ++;
        }

        if(pBegLast!=NULL)
        {
            pBegLast->next = pEnd;
        }

        pBeg->next = pEndNext;

        if(pBegLast==NULL)
           return pEnd;
        else
           return  head;
        
    }
};

//优质解答2:思路相同，先使用将指针指向开始，再进行交换工作
时间复杂度O(n);空间复杂度O(0)
class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        int change_len = n - m + 1;
        //逆置前的头节点的前驱
        ListNode *preHead = NULL;
        //逆置后的尾部节点后继
        ListNode *lastTail = NULL;
        //逆置后尾节点
        ListNode *Tail = NULL;
        ListNode *result = head;

        ListNode *new_head = NULL;
        while(head && --m)
        {
            preHead = head;
            head = head->next;
        }
        //逆置后的尾节点与逆置前的头节点相同
        Tail = head;
        while(head && change_len){
            ListNode *next = head->next;
            head->next = new_head;
            new_head = head;
            head = next;
            change_len -= 1;
        }
        Tail->next = head;
        if(preHead)
        {
            preHead->next = new_head;
        }
        else
        {
            result = new_head;
        }
        return result;
    }
};
// 官方题解：
https://leetcode-cn.com/problems/reverse-linked-list-ii/solution/fan-zhuan-lian-biao-ii-by-leetcode/
//优质解析：

https://leetcode-cn.com/problems/reverse-linked-list-ii/solution/c-jian-dan-bian-li-by-da-li-wang-2/
// 

*/
