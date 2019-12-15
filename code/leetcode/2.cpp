/* 题目描述:
题目编号：2

https://leetcode-cn.com/problems/remove-outermost-parentheses/


给出两个 非空 的链表用来表示两个非负的整数。其中，它们各自的位数是按
照 逆序 的方式存储的，并且它们的每个节点只能存储 一位 数字。

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
	a. 直接计算两组数的值，进行相加之后再使用头插法求余数。复杂度为O(n+m)
	b. 按照链表的长短进行遍历，按照位数相乘再相加，最后反向求余数进行链表插入存储。复杂度为O(max(n,m))
	c. 直接按照位进行加减运算，每进行一次运算，将结果存在链表中，当大于10时，进一位。下一次运算时加上。
		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
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
    	long result_1=0,result_2=0,result=0;
    	ListNode* result_node=NULL;
    	ListNode* l1_last=l1;
    	ListNode* l2_last=l2;
    	int i=0,j=0;//用来对i,j位数进行统计
    	//先进行便利，获得链表的最佳值
    	// while(l1_last!=NULL&&l2_last!=NULL){
    	// 	int temp=l1->val+l2->val;
    	// 	result+=temp*pow(10,i);
    	// 	l1_last=l1_last->next;
    	// 	l2_last=l2_last->next;
		// 	++i;
    	// 	++j;
    	// };
        while(l1_last!=NULL) {
        	int temp=l1_last->val;
        	result_1+=temp*pow(10,i);
        	l1_last=l1_last->next;
			++i;
        }
        while(l2_last!=NULL) {
        	int temp=l2_last->val;
        	result_2+=temp*pow(10,j);
        	l2_last=l2_last->next;
			++j;
        }
        result=result_1+result_2;
        //求余数遍历颠倒
		ListNode* work_ptr=NULL;
		while (result!=0)
		{
			if(result_node==NULL){
				result_node=new ListNode(result%10);
				work_ptr=result_node;
			}else{
				ListNode* temp_node=new ListNode(result%10);
				work_ptr->next=temp_node;
				work_ptr=work_ptr->next;
			}
			result/=10;
			
		}
		return result_node;
		
    }
    ListNode* addTwoNumbers2(ListNode* l1, ListNode* l2) {
    	long result_1=0,result_2=0,result=0;
    	ListNode* result_node=NULL;
    	ListNode* l1_last=l1;
    	ListNode* l2_last=l2;
    	int i=0,j=0;//用来对i,j位数进行统计
    	//先进行便利，获得链表的最佳值
    	while(l1_last!=NULL&&l2_last!=NULL){
    		int temp1=l1_last->val;
			int temp2=l2_last->val;
			result_1+=temp1*pow(10,j);
    		result_2+=temp2*pow(10,j);
    		l1_last=l1_last->next;
    		l2_last=l2_last->next;
			++i;
    		++j;
    	};
        while(l1_last!=NULL) {
        	int temp=l1_last->val;
        	result_1+=temp*pow(10,i);
        	l1_last=l1_last->next;
			++i;
        }
        while(l2_last!=NULL) {
        	int temp=l2_last->val;
        	result_2+=temp*pow(10,j);
        	l2_last=l2_last->next;
			++j;
        }
        result=result_1+result_2;
        //求余数遍历颠倒
		ListNode* work_ptr=NULL;
		while (result!=0)
		{
			if(result_node==NULL){
				result_node=new ListNode(result%10);
				work_ptr=result_node;
			}else{
				ListNode* temp_node=new ListNode(result%10);
				work_ptr->next=temp_node;
				work_ptr=work_ptr->next;
			}
			result/=10;
			
		}
		return result_node;
		
    }
	  ListNode* addTwoNumbers3(ListNode* l1, ListNode* l2) {
    	ListNode* result_node=NULL;
    	ListNode* l1_last=l1;
    	ListNode* l2_last=l2;
    	//先进行遍历，获得链表的最佳值
		int excess_results=0;
		ListNode* work_ptr=NULL;
    	while(l1_last!=NULL&&l2_last!=NULL){
    		int temp=l1_last->val+l2_last->val+excess_results;
			excess_results=temp/10;
			temp%=10;
			if(result_node==NULL){
				result_node=new ListNode(temp);
				work_ptr=result_node;
			}else{
				ListNode* temp_node=new ListNode(temp);
				work_ptr->next=temp_node;
				work_ptr=work_ptr->next;
			}
			l1_last=l1_last->next;
    		l2_last=l2_last->next;
    	};
        while(l1_last!=NULL) {
			int temp=l1_last->val+excess_results;
			excess_results=temp/10;
			temp%=10;
        	if(result_node==NULL){
				result_node=new ListNode(temp);
				work_ptr=result_node;
			}else{
				ListNode* temp_node=new ListNode(temp);
				work_ptr->next=temp_node;
				work_ptr=work_ptr->next;
			}
			l1_last=l1_last->next;
        }
        while(l2_last!=NULL) {
        	int temp=l2_last->val+excess_results;
			excess_results=temp/10;
			temp%=10;
			
        	if(result_node==NULL){
				result_node=new ListNode(temp);
				work_ptr=result_node;
			}else{
				ListNode* temp_node=new ListNode(temp);
				work_ptr->next=temp_node;
				work_ptr=work_ptr->next;
			}
        	l2_last=l2_last->next;
        }
		if(excess_results!=0){
				ListNode* temp_node=new ListNode(1);
				work_ptr->next=temp_node;
				work_ptr=work_ptr->next;
		}
		
		return result_node;
		
    }
	ListNode* addTwoNumbers4(ListNode* l1, ListNode* l2) {
    	ListNode* result_node=NULL;
    	ListNode* l1_last=l1;
    	ListNode* l2_last=l2;
    	//先进行便利，获得链表的最佳值
		int excess_results=0;
		ListNode* work_ptr=NULL;
    	while(l1_last!=NULL&&l2_last!=NULL){
    		int temp=l1_last->val+l2_last->val+excess_results;
			excess_results=temp/10;
			temp%=10;
			if(result_node==NULL){
				result_node=new ListNode(temp);
				work_ptr=result_node;
			}else{
				ListNode* temp_node=new ListNode(temp);
				work_ptr->next=temp_node;
				work_ptr=work_ptr->next;
			}
			l1_last=l1_last->next;
    		l2_last=l2_last->next;
    	};
        while(l1_last!=NULL) {
			int temp=l1_last->val+excess_results;
			excess_results=temp/10;
			temp%=10;
			ListNode* temp_node=new ListNode(temp);
			work_ptr->next=temp_node;
			work_ptr=work_ptr->next;
			l1_last=l1_last->next;
        }
        while(l2_last!=NULL) {
        	int temp=l2_last->val+excess_results;
			excess_results=temp/10;
			temp%=10;

			ListNode* temp_node=new ListNode(temp);
			work_ptr->next=temp_node;
			work_ptr=work_ptr->next;
        	l2_last=l2_last->next;
        }
		if(excess_results!=0){
			work_ptr->next=new ListNode(1);
		}
		
		return result_node;
		
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
    int a[]={5};
    int b[]={5};
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
	int time_point_1=clock();
    auto result1=my_solution.addTwoNumbers(a_node_list,b_node_list);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
	printf_node_list(result1);
	int time_point_3=clock();
    auto result2=my_solution.addTwoNumbers2(a_node_list,b_node_list);
    int time_point_4=clock();
	printf("\n \t Time :%d ms \n",time_point_4-time_point_3);
	printf_node_list(result2);
	int time_point_5=clock();
    auto result3=my_solution.addTwoNumbers3(a_node_list,b_node_list);
    int time_point_6=clock();
	printf("\n \t Time :%d ms \n",time_point_6-time_point_5);
	printf_node_list(result3);
    //output string
    // std::string output1="";
    // //my result number
    // string my_result1=my_solution.defangIPaddr2(input_string1);
    // string my_result2=my_solution.defangIPaddr2(input_string2);
    // //print_vector(my_result);
    // std::cout<<"result1: "<<my_result1<<"\n"<<"resutl2:"<<my_result2<<std::endl;

    //print_vector(my_result);
	free_list_node(a_node_list);
	free_list_node(b_node_list);
	free_list_node(result1);
	free_list_node(result2);
	free_list_node(result3);
    return 0;
}
/*
//优质解答：
//思路一样，代码更加简洁，主要是只用了2个工作指针，所以速度变了，内存增大了

 class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head1 = l1;
        ListNode* head2 = l2;
        ListNode* result = NULL;
        ListNode* toadd = NULL;
        
        bool start = true;
        result = toadd;
        int tonext = 0;
        int cur = 0;
        while(head1 != NULL || head2 != NULL)
        {
            if(head1 != NULL && head2 != NULL)
            {
                cout<<head1->val<<" "<<head2->val<<"\n";
                cur = (head1->val + head2->val + tonext)%10;
                tonext = (head1->val + head2->val + tonext)/10 ;
                cout<<"cur: "<<cur<<" tonext: "<<tonext<<"\n";
                if(toadd == NULL)
                {
                    toadd = new ListNode(cur);
                    result = toadd;
                }
                else
                {
                    ListNode* ones = new ListNode(cur);
                    toadd->next = ones;
                    toadd = ones;
                }
                head1 = head1->next;
                head2 = head2->next;
            }
            if(head1 == NULL && head2 != NULL)
            {
                cur = (head2->val  + tonext)%10;
                tonext = (head2->val  + tonext)/10;
                ListNode* ones = new ListNode(cur);
                toadd->next = ones;
                toadd = ones;
                head2 = head2->next;
            }
           if(head1 != NULL && head2 == NULL)
            {
                cur = (head1->val  + tonext)%10;
                tonext = (head1->val  + tonext)/10;
                ListNode* ones = new ListNode(cur);
                toadd->next = ones;
                toadd = ones;
                head1 = head1->next;
            }
        }
        if(tonext > 0)
        {
            if(toadd != NULL)
                toadd->next  = new ListNode(tonext);
        }
        return result;
    }
};
方法二：
本题可以不用再创建一个新的链表，可以直接在链表表l1和l2上进行操作。
首先创建一个newList指针指向l1链表，把每一位相加的结果保存在l1的val中。
若11比l2短，接着让l1的尾指针指向l2比l1长的那部分。然后让l2中的每一位分别与flag进位标志相加即可。

注意点：要考虑一种特殊的情况，当l1长度和l2的长度一致且进位标志为1时，说明它们相加的结果要多一位。
(如 555+620=1175)此时要申请一个新的空间，用来保存结果的最高位，其值为1。

 ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
		ListNode *newList = l1, *pre ;  //newList指向返回的链表，pre记录保存链表的当前指针的的前一个位置。
		int flag = 0;  //进位标志
		while (l1||l2)
		{
			int value;  //两个链表的每一位相加的和
			(l1) ? (pre = l1,l1 = l1->next, value = pre->val + flag) : (pre->next=l2, pre = l2, value= flag);
			(l2) ? (value += l2->val, l2 = l2->next) : (pre->next=l1);
			pre->val = value % 10;
			(value > 9) ? (flag = 1) : (flag = 0);
		}
		if (l1 == NULL && l2 == NULL && flag == 1)
			pre->next = new ListNode(1);
		return newList;
        
    }

作者：p12bbb
链接：https://leetcode-cn.com/problems/add-two-numbers/solution/czhong-sheng-kong-jian-de-jie-fa-by-uycuqaawr5/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

*/