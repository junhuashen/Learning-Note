/* 题目描述:
题目编号：2

https://leetcode-cn.com/problems/remove-outermost-parentheses/

给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

如果，我们将这两个数相加起来，则会返回一个新的链表来表示它们的和。

您可以假设除了数字 0 之外，这两个数都不会以 0 开头。

示例：

输入：(2 -> 4 -> 3) + (5 -> 6 -> 4)
输出：7 -> 0 -> 8
原因：342 + 465 = 807

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-two-numbers
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
/*
主要思路：
	a .按照链表的长短进行遍历，按照位数相乘再相加，最后反向求余数进行链表插入存储。
	b. 直接计算两组数的值，进行相加之后再使用头插法求余数。
		解决思路;
		1.遍历看到“(”;need+1,记录start;
		2.看到“)”,need-1;
		3.need=0,记录end;
		4.添加start与end之间的字符
		
*/

#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void print_vector(std::vector<int> v){
	for(auto i : v) {		
		std::cout<<i<<std::endl;
	}
};

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
struct ListNode 
{
	int val;
	ListNode *next;
	ListNode(int x):val(x),next(NULL){}
};
//main function
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    	long result_1=0,result_2=0;
    	ListNode* result_node=new ListNode(0);
    	ListNode* l1_last=l1;
    	ListNode* l2_last=l2;
    	int i=0,j=0;//用来对i,j位数进行统计
    	//先进行便利，获得链表的最佳值
    	// while(l1_last!=NULL&&l2_last!=NULL){
    	// 	++i;
    	// 	++j;
    	// 	int temp=l1->val+l2->val;
    	// 	result+=temp*pow(10,i);
    	// 	l1_last=l1_last->next;
    	// 	l2_last=l2_last->next;
    	// };
        while(l1_last!=NULL) {
        	++i;
        	int temp=l1->val;
        	result_1+=temp*pow(10,i);
        	l1_last=l1_last->next;
        }
        while(l2_last!=NULL) {
        	++j;
        	int temp=l2->val;
        	result_2+=temp*pow(10,j);
        	l2_last=l2_last->next;
        }
        result_node->val=result_1+result_2;
        return result_node;
    }
    string defangIPaddr2(string& address){
    	int len=address.size();
    	char result[len+8];
    	for(int i=0,j=0;i<len;++i)
    	{
    		if(address[i]=='.'){
    			result[j]='[';
    			result[j+1]='.';
    			result[j+2]=']';
    			j+=3;
    		}else{
    			result[j]=address[i];
    			++j;
    		}
    	}
    	return string(result);
    }
};

void printf_node_list(ListNode* head){
	if(head==NULL){
		std::cout<<"this node list is empty"<<std::endl;
		return ;
	}

	std::cout<<"====== printf start ====== \n";
	while(head!=NULL) {
		std::cout<<head->val<<"\t";
		head=head->next;
	}
	std::cout<<";\n====== printf endl ====== \n"<<std::endl;
}
void free_list_node(ListNode* head){
	ListNode* header=head;
	if(head==NULL){
		std::cout<<"this node list is empty"<<std::endl;
		return ;
	}
	while(head!=NULL) {
		ListNode* temp=head;
		head=head->next;
		delete temp; 
		temp=NULL;
	}
	header=NULL;
}
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    int a[3]={2,4,3};
    int b[3]={5,6,4};
    ListNode* a_node_list=NULL;
    ListNode* b_node_list=NULL;
    ListNode* last_node_ptr=NULL;
    for (int temp_a :a){
    	if(a_node_list==NULL){
    		a_node_list=new ListNode(temp_a);
    		last_node_ptr=a_node_list;
    	}else{
    		ListNode* temp_node=new ListNode(temp_a);
    		last_node_ptr->next=temp_node;
    		last_node_ptr=last_node_ptr->next;
    	}
    }
    last_node_ptr=NULL;
    for(int temp_b : b) {
    	if(b_node_list==NULL){
    		b_node_list=new ListNode(temp_b);
    		last_node_ptr=b_node_list;	
    	}else{
    		ListNode* temp_node=new ListNode(temp_b);
    		last_node_ptr->next=temp_node;
    		last_node_ptr=last_node_ptr->next;
    	}
     } 
     printf_node_list(a_node_list);
     //printf_node_list(a_node_list);

     auto result=my_solution.addTwoNumbers(a_node_list,b_node_list);
     std::cout<<"\n result:"<<result<<std::endl;
    //output string
    // std::string output1="";
    // //my result number
    // string my_result1=my_solution.defangIPaddr2(input_string1);
    // string my_result2=my_solution.defangIPaddr2(input_string2);
    // //print_vector(my_result);
    // std::cout<<"result1: "<<my_result1<<"\n"<<"resutl2:"<<my_result2<<std::endl;

    //print_vector(my_result);
    return 0;
}
/*
//优质解答：
//思路一样，分开统计

  string res;
		int leftCount = 0, rightCount = 0;
		int startIndex = 0;
		for (size_t i = 0; i < S.length(); i++)
		{
			if (S[i] == '(')
			{
				if (rightCount == 0)
					startIndex = i;
				rightCount++;
			}
			else if (S[i] == ')')
			{
				leftCount++;
				if (leftCount == rightCount)
				{
					res += S.substr(startIndex + 1, i - startIndex - 1);
					leftCount = 0;
					rightCount = 0;
				}
			}
		}
		return res;
    }
*/