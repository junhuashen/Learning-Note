/* 
data-time 2019-10-05 19:19:56


题目描述:
整数转罗马数字

罗马数字包含以下七种字符： I， V， X， L，C，D 和 M。

字符          数值
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
例如， 罗马数字 2 写做 II ，即为两个并列的 1。12 写做 XII ，即为 X + II 。 27 写做  XXVII, 即为 XX + V + II 。

通常情况下，罗马数字中小的数字在大的数字的右边。但也存在特例，例如 4 不写做 IIII，而是 IV。数字 1 在数字 5 的左边，所表示的数等于大数 5 减小数 1 得到的数值 4 。同样地，数字 9 表示为 IX。这个特殊的规则只适用于以下六种情况：

I 可以放在 V (5) 和 X (10) 的左边，来表示 4 和 9。
X 可以放在 L (50) 和 C (100) 的左边，来表示 40 和 90。 
C 可以放在 D (500) 和 M (1000) 的左边，来表示 400 和 900。
给定一个整数，将其转为罗马数字。输入确保在 1 到 3999 的范围内。

示例 1:

输入: 3
输出: "III"
示例 2:

输入: 4
输出: "IV"
示例 3:

输入: 9
输出: "IX"
示例 4:

输入: 58
输出: "LVIII"
解释: L = 50, V = 5, III = 3.
示例 5:

输入: 1994
输出: "MCMXCIV"
解释: M = 1000, CM = 900, XC = 90, IV = 4.

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/integer-to-roman
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：主要使用的是贪心算法，关键问题还是在于进制的转换。将输入数字按照值的大小进行拆解，存在一个数就进行相减。从大到小直到结束。
        时间复杂度为O(n),空间复杂度为O(1)
        https://blog.csdn.net/u013321328/article/details/53513826
        
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
#include <queue>
using namespace std;




//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
bool isBadVersion(int version);
//main function
class Solution {
public:
    void getChar(int &num,string &result,int key,string string_key){
        while(num>=key){
            num-=key;
            result+=string_key;
        }
    }
    string intToRoman(int num) {
        string result="";
        getChar(num,result,1000,"M");
        getChar(num,result,900,"CM");
        getChar(num,result,500,"D");
        getChar(num,result,400,"CD");
        getChar(num,result,100,"C");
        getChar(num,result,90,"XC");
        getChar(num,result,50,"L");
        getChar(num,result,40,"XL");
        getChar(num,result,10,"X");
        getChar(num,result,9,"IX");
        getChar(num,result,5,"V");
        getChar(num,result,4,"IV");
        getChar(num,result,1,"I");
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={7,1,5,3,6,4};
    vector<int> vector_temp2={2,5,6};
  
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.intToRoman(40);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：思路一样，不过是使用了数组作为存储结构
时间复杂度O(n),空间复杂度O(1);

class Solution {
public:
    string intToRoman(int num) {
        int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
        string reps[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        string res;
        for(int i=0; i<13; i++){
            while(num>=values[i]){
                num = num - values[i];
                res = res + reps[i];
            }
        }
        return res;
    }
};
//优质解答:和上面的思路一样，暴力判断。牛逼
class Solution {
public:
    string intToRoman(int num) {
        string out="";
        int res=num;
        
                    
        while(res!=0)
        {
            if(res<4)
            {
                res=res-1;
                out=out+"I";
            }
            else if(res>=1000)
            {
                res=res-1000;
                out=out+"M";
            }
            else if(res<1000&&res>=900)
            {
                res=res-900;
                out=out+"CM";
            }           
            else if(res>=500)
            {
                res=res-500;
                out=out+"D";
            }  
            else if(res<500&&res>=400)
            {
                res=res-400;
                out=out+"CD";
            }              
            else if(res>=100)
            {
                res=res-100;
                out=out+"C";
            } 
            else if(res<100&&res>=90)
            {
                res=res-90;
                out=out+"XC";
            }             
            else if(res>=50)
            {
                res=res-50;
                out=out+"L";
            }       
            else if(res<50&&res>=40)
            {
                res=res-40;
                out=out+"XL";
            }                 
            else if(res>=10)
            {
                res=res-10;
                out=out+"X";
            }         
            else if(res<10&&res>=9)
            {
                res=res-9;
                out=out+"IX";
            }                
            else if(res>=5)
            {
                res=res-5;
                out=out+"V";
            }   
            else if(res==4)
            {
                res=res-4;
                out=out+"IV";
            }
            
            
        }
        return out;
    }
};
*/