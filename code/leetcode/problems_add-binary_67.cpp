/* 
data-time 2019-11-20 13:20:56


题目描述:

67. 二进制求和

给定两个二进制字符串，返回他们的和（用二进制表示）。

输入为非空字符串且只包含数字 1 和 0。

示例 1:

输入: a = "11", b = "1"
输出: "100"
示例 2:

输入: a = "1010", b = "1011"
输出: "10101"


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/add-binary
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


/*

主要思路：逆序遍历，计算是否进制
        时间复杂度O(max(n,m))
*/

#include <iostream>
#include <vector>
#include <cmath>
#include <time.h>
#include <string>
#include <stack>
#include <sstream>
#include <map>
#include <unordered_map>
#include <algorithm>
#include <queue>
#include <set>
using namespace std;
#define INT_MAX INT16_MAX
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
    string addBinary(string a, string b) {
        //int result=0;
        string result="";
        int index_a=a.size()-1,index_b=b.size()-1;
        int temp_count=0;
        while ((index_a>=0)||(index_b>=0))
        {
            int temp_a=index_a>=0?a[index_a]-'0':0;
            int temp_b=index_b>=0?b[index_b]-'0':0;
            temp_count+=temp_a+temp_b;
            result=to_string(temp_count&1)+result;
            temp_count=temp_count/2;
            --index_b;
            --index_a;
        }
        if(temp_count) result=to_string(temp_count&1)+result;
        return result;
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={1,3,5,6};
    vector<int> vector_temp2={2,5,6};
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.addBinary("11","1");
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}

/*
//优质解析1：思路相同，提前分辨长短，避免了重复计算
class Solution {
public:
    string addBinary(string a, string b) {
        string res = a.size() > b.size() ? a : b;
        string adder = a.size() > b.size() ? b : a;
        
        int index=res.size() - 1; 
        //相加 暂不考虑进位
        for(int i = adder.size() - 1;i >= 0;i--) {
            res[index] += adder[i] - '0';
            index--;
        }
        //进位操作
        for(int i = res.size() - 1;i > 0;i--) {
            if(res[i] > '1') {
                res[i-1] += 1;
                res[i] = '0' + (res[i] - '0') % 2;
            }      
        }
        //判断最高位是否要进位
        if(res[0] > '1') {
            res[0] = '0' + (res[0] - '0') % 2;
            res = '1' + res;
        } 
        return res;
    }
};
//优质解答2：思路相同，使用0补足短位

class Solution {
public:
    string addBinary(string a, string b) {
        int size_a,size_b,size;
        size_a=a.size();
        size_b=b.size();
        char plus='0';
        if(size_a>size_b){
            b.insert(0,size_a-size_b,'0');
            size=size_a;
        }else if(size_a<size_b){
            a.insert(0,size_b-size_a,'0');
            size=size_b;
        }
        //遍历判断
        for(int i=size-1;i>=0;i--){
            if((a[i]=='1') && (b[i]=='1')){
                  if(plus=='1'){
                        a[i]='1';
                  }else{
                        a[i]='0';
                  }
                 if(i==0){
                     a.insert(0,1,'1');
                 }
                  plus='1';
             }else if((a[i]=='0') && (b[i]=='0')){
                 if(plus=='1'){
                        a[i]='1';
                  }else{
                        a[i]='0';
                  }                  
                  plus='0';
            }else{
                 if(plus=='1'){
                        a[i]='0';
                        plus='1';
                        if(i==0){
                           a.insert(0,1,'1');
                        }
                  }else{
                        a[i]='1';
                        plus='0';
                  } 
                
            }
                
        }
        return a;
    }
};

//优质解析：
https://leetcode-cn.com/problems/add-binary/solution/c-xiang-xi-ti-jie-bu-zou-qing-xi-by-youlookdelicio/

*/