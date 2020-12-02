/* 
data-time 2020-02-06 15:47:56


题目描述:

142. 环形链表 II

给定一个链表，返回链表开始入环的第一个节点。 如果链表无环，则返回 null。

为了表示给定链表中的环，我们使用整数 pos 来表示链表尾连接到链表中的位置（索引从 0 开始）。 如果 pos 是 -1，则在该链表中没有环。

说明：不允许修改给定的链表。

 

示例 1：

输入：head = [3,2,0,-4], pos = 1
输出：tail connects to node index 1
解释：链表中有一个环，其尾部连接到第二个节点。

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist.png)

示例 2：

输入：head = [1,2], pos = 0
输出：tail connects to node index 0
解释：链表中有一个环，其尾部连接到第一个节点。

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist_test2.png)

示例 3：

![](https://assets.leetcode-cn.com/aliyun-lc-upload/uploads/2018/12/07/circularlinkedlist_test3.png)

输入：head = [1], pos = -1
输出：no cycle
解释：链表中没有环。


 

进阶：
你是否可以不用额外空间解决此题？

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/linked-list-cycle-ii
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：
1. 先使用快慢指针确定是否有环，并确定环中交界的位置。假设前面部分为a，环内部分为b环的总体长度为a+b(2*a+2*b=a+b+c)(c为环的长度)，因此对慢指针走a就可以到达想交位置。以此定位
时间复杂度O(2*n) 空间复杂度O(0)
2. 直接使用内存地址进行判断，存在逆序就直接返回
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
    ListNode *detectCycle(ListNode *head) {
        if(!head||!head->next) return nullptr;
        //查找环内节点
        ListNode *fast_ptr=head,*slow_ptr=head;
        bool hasCycle=false;
        //遍历
        while(fast_ptr&&fast_ptr->next){
            fast_ptr=fast_ptr->next->next;
            slow_ptr=slow_ptr->next;
            if(slow_ptr==fast_ptr){
                hasCycle=true;
                break;
            }
        }
        //检查交点
        if(hasCycle){
            ListNode *q=head;
            while(slow_ptr!=q){
                q=q->next;
                slow_ptr=slow_ptr->next;
            }
            return q;
        }else{
            return nullptr;
        }
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string`
   	//创建第一组数据
    std::string strings ="2147483648";
    std::string string2= "147";
    vector<string> a={"c","c"};
    vector<int> vector_temp={1,2,3,4};
    vector<int> vector_temp2={1,2,4};
    ListNode* node_ptr=new ListNode(NULL);
    ListNode* node_ptr2=new ListNode(NULL);
    FromArrayToList(node_ptr,vector_temp);
    FromArrayToList(node_ptr2,vector_temp2);
    PrintfList(node_ptr);
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.detectCycle(node_ptr,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    DeleteList(node_ptr);
    DeleteList(node_ptr2);
    return 0;
}
/*
//优质解答1：o(n)算法，应该是最快的。 堆的地址从低到高，LeetCode的链表内存是顺序申请的，如果有环，head->next一定小于或等于head，哈哈哈哈哈
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        while(head) {
            if(!less<ListNode *>()(head, head->next)) {
                return head->next;
            }
            head = head->next;
        }
        return nullptr;
    }
};

// 官方题解：
https://leetcode-cn.com/problems/linked-list-cycle-ii/solution/huan-xing-lian-biao-ii-by-leetcode/
//优质解析：

https://leetcode-cn.com/problems/linked-list-cycle-ii/solution/shuang-zhi-zhen-qing-xi-ti-jie-zhen-zheng-cong-shu/
// 

*/
