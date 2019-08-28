/* 
data-time 2019-08-28 10:49:56
题目描述:
题目编号：9

判断一个整数是否是回文数。回文数是指正序（从左向右）和倒序（从右向左）读都是一样的整数。

示例 1:

输入: 121
输出: true
示例 2:

输入: -121
输出: false
解释: 从左向右读, 为 -121 。 从右向左读, 为 121- 。因此它不是一个回文数。
示例 3:

输入: 10
输出: false
解释: 从右向左读, 为 01 。因此它不是一个回文数。


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/palindrome-number
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/*
主要思路：1. 同时进行求余数和求约商，两者比较，不同则break
        2. 将数字转化为，字符串数组，从中间进行比较，完全结束无错误则返回true
		
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;


//main function
class Solution {
public:
    bool isPalindrome(int x) {
        bool result=true;
        stringstream ss;
        std::string temp;
        ss<<x;
        ss>>temp;
        int str_length=temp.length();
        for(int i=0;i<str_length/2;++i){
            if(temp.at(i)==temp.at(str_length-i-1)){
                continue;
            }else{
                result=false;
                break;
            }
        }
        return result;
    }
    bool isPalindrome2(int x){
        bool result=true;
        int i=0;
        int temp=x,x2=0;
        if(x<0){return false;}
        if(x<10){return true;}
        //求当前的位数，同时获取转置的数
        
        while(temp!=0){
            ++i;
            temp/=10;
        }
        printf("\n i: %d \n ",i);
        //将数转置
        temp=x;
        for(int j=0;j<i/2;++j){
            x2*=10;
            x2+=temp%10;
            temp/=10;
        };
        if(i%2==1){temp/=10;}
        if(temp==x2){
            return true;
        }else{
            return false;
        }
        
    }
};


int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    int a=1221;
    int b=-121;
   
	int time_point_1=clock();
    auto result1=my_solution.isPalindrome2(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
	int time_point_3=clock();
    auto result2=my_solution.isPalindrome2(b);
    int time_point_4=clock();
	printf("\n \t Time :%d ms \n",time_point_4-time_point_3);
	int time_point_5=clock();
    auto result3=my_solution.isPalindrome2(a);
    int time_point_6=clock();
	printf("\n \t Time :%d ms \n",time_point_6-time_point_5);
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
//思路一样，代码更加简洁，主要是只用了2个工作指针，所以速度变了，内存增大了

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){return false;}
        if(x<10){return true;}
        int i,temp=x;
        for(i=0;temp!=0;i++){
            temp/=10;
        }
        int half=i/2;
        temp=x;
        int low=0,high=0, times=1;
        for(int i=0;i<half;i++){
            low*=10;
            low+=temp%10;
            temp/=10;
        }
        if(i%2==1){temp/=10;}
        high=temp;
        if(high==low){return true;}
        else{return false;}
    }
};

*/