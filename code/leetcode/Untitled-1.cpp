#include <iostream>
#include <vector>

using namespace std;
struct ListNode{
    ListNode(int a):val(a){};
    int val;
    ListNode *next;
};
class Solution
{
 public:
    ListNode * RevseList(ListNode* head){
        ListNode re_head(0);
        ListNode* re_end=&re_head;
        ListNode* work_ptr=head;
        while(work_ptr){
            ListNode* temp_next=re_end->next;
            re_end->next=work_ptr;
            ListNode* re_next=work_ptr->next;
            re_end->next->next=temp_next;
            work_ptr=re_next;
        }
        return re_head.next;
    }
    void PrintListnode(ListNode* work_ptr){
        
        while(work_ptr){
            //ListNode* temp=work_ptr;
            std::cout<<work_ptr->val<<std::endl;
            work_ptr=work_ptr->next;
            //delete temp;
            //temp=nullptr;
        }
    }
    ListNode * FromArrayToList(vector<int >& temp_vector){
        ListNode *head=nullptr;
        ListNode *end=head;
        for(int i=0;i<temp_vector.size();++i){
            ListNode* temp_node=new ListNode(temp_vector[i]);
            if(end!=nullptr){
                end->next=temp_node;
                if(end->next){
                    end=end->next;
                }
            }else{
                head=temp_node;
                end=head;
            }
        }
        return head;
   }
};
int main() {
    Solution a;
    /*  数组转化为链表*/
    vector<int> temp_vector={1,2,3,4,5,6};
    auto head=a.FromArrayToList(temp_vector);
    //auto res=a.RevseList(head);
    a.PrintListnode(head);
    return 0;
}
