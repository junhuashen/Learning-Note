/* 
data-time 2020-02-06 15:47:56


题目描述:

146. LRU缓存机制

运用你所掌握的数据结构，设计和实现一个  LRU (最近最少使用) 缓存机制。它应该支持以下操作： 获取数据 get 和 写入数据 put 。

获取数据 get(key) - 如果密钥 (key) 存在于缓存中，则获取密钥的值（总是正数），否则返回 -1。
写入数据 put(key, value) - 如果密钥不存在，则写入其数据值。当缓存容量达到上限时，它应该在写入新数据之前删除最近最少使用的数据值，从而为新的数据值留出空间。

进阶:

你是否可以在 O(1) 时间复杂度内完成这两种操作？

示例:

LRUCache cache = new LRUCache( 2  );// 缓存容量

cache.put(1, 1);
cache.put(2, 2);
cache.get(1);       // 返回  1
cache.put(3, 3);    // 该操作会使得密钥 2 作废
cache.get(2);       // 返回 -1 (未找到)
cache.put(4, 4);    // 该操作会使得密钥 1 作废
cache.get(1);       // 返回 -1 (未找到)
cache.get(3);       // 返回  3
cache.get(4);       // 返回  4

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/lru-cache
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/

/*

主要思路：
1.因为这里的时间要求复杂度是o(1)；因此必须是随机存储的数组。所以使用一个array进行缓存，并使用一个last指针保存最近最少使用的指针，在O(1)的时间复杂度内完成操作,需要使用unorder_map来进行值的存储。list并使用unorder_map来映射list的指针实现O(1)的时间复杂度
时间复杂度O(1);空间复杂度O(2*n)
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
class LRUCache {
public:
    int capacity_=0;
    int count_=0;
    //迭代器映射
    unordered_map<int, list<pair<int,int>>::iterator> iter_map;
    list<pair<int,int>> key_value;
    LRUCache(int capacity):capacity_(capacity){}
    
    int get(int key) {
        auto it=iter_map.find(key);
        if(it==iter_map.end()){
            return -1;
        }else{
            int val=it->second->second;
            //更新队列优先级；将其重新设置为队列尾部
            key_value.erase(it->second);
            key_value.push_front(make_pair(key, val));
            iter_map[key]=key_value.begin();
            return val;
        }

    }
    //先查找key是否存在，存在移动到首部，
    //不存在插入新节点
    //如果超容就删除最后一个节点
    void put(int key, int value) {
        auto it=iter_map.find(key);
        if(it!=iter_map.end()){
            key_value.erase(it->second);
        }
        key_value.push_front(make_pair(key,value));
        iter_map[key]=key_value.begin();
        if(key_value.size()>capacity_){
            int key=key_value.back().first;
            iter_map.erase(key);
            key_value.pop_back();
        }
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    LRUCache cache = new LRUCache( 2 /* 缓存容量 */ );

    cache.put(1, 1);
    cache.put(2, 2);
    cache.get(1);       // 返回  1
    cache.put(3, 3);    // 该操作会使得密钥 2 作废
    cache.get(2);       // 返回 -1 (未找到)
    cache.put(4, 4);    // 该操作会使得密钥 1 作废
    cache.get(1);       // 返回 -1 (未找到)
    cache.get(3);       // 返回  3
    cache.get(4);       // 返回  4

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
