/* 
data-time 2019-09-13 19:12:56

题目编号：6

Z 字形变换

题目描述:
将一个给定字符串根据给定的行数，以从上往下、从左到右进行 Z 字形排列。

比如输入字符串为 "LEETCODEISHIRING" 行数为 3 时，排列如下：

L   C   I   R
E T O E S I I G
E   D   H   N
之后，你的输出需要从左往右逐行读取，产生出一个新的字符串，比如："LCIRETOESIIGEDHN"。

请你实现这个将字符串进行指定行数变换的函数：

string convert(string s, int numRows);
示例 1:

输入: s = "LEETCODEISHIRING", numRows = 3
输出: "LCIRETOESIIGEDHN"
示例 2:

输入: s = "LEETCODEISHIRING", numRows = 4
输出: "LDREOEIIECIHNTSG"
解释:

L     D     R
E   O E   I I
E C   I H   N
T     S     G


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/zigzag-conversion
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
/*

主要思路:这个题主要还是考察数组的遍历，关键是之后符合z的字符矩阵。可以先按照规则遍历原来的数组，遍历边进行复制，没有的就按照就给于字符。
        然后删除其中的0字符就行了。
        1. 根据s大小和 函数确定矩阵大小，temp_size=s.length()/(2*numRows-2)+1;
        2. 分配char矩阵。char char_mat[temp_size]={'0'};
        3. 计算其对应的x和y值
        时间复杂度为o(n+m2),空间复杂度为O(m^2)


参考链接： https://blog.csdn.net/xiaomucgwlmx/article/details/87879306
		
*/

#include <iostream>
#include <stdio.h>
#include <memory.h>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <sstream>
using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
//main
class Solution {
public:
    string convert(string s, int numRows) {
        if(s.length()<=1){return "";}
        if(numRows<2){return s;}
        string result(s);
        int mat_rows=(s.length()/2)+numRows-1;
        int cycle_length=2*(numRows-1);
        //初始化中间矩阵。
        char char_array[numRows][mat_rows];
        memset(char_array,0,sizeof(char_array));//玛德c++这里初始化有问题，不能初始化为'\0'
        for(int i=0;i<s.length();++i){//按照元素个数进行计算
            //判断当前所处的周期
            int cycle_index=i/cycle_length;
            //判断周期内的index
            int cycle_index_in=i%cycle_length;
            int col=-1;
            int row=-1;
            //计算行列坐标。
            if(cycle_index_in<numRows){
                col=cycle_index*(numRows-1);
                row=cycle_index_in;
            }else{
                row=2*numRows-cycle_index_in-2;
                col=cycle_index_in-numRows+(cycle_index)*(numRows-1)+1;
            }
            char_array[row][col]=s.at(i);
        }
        //遍历进行拷贝
        for(int i=0,k=0;i<numRows;++i){
            for(int j=0;j<mat_rows;++j){
                if(char_array[i][j]!='\0'){
                    result.at(k)=char_array[i][j];
                    ++k;
                }
            }
        }
        free(char_array);
        return result;
        
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    string a="PAYPALISHIRING";
    int numRow=3;
	int time_point_1=clock();
    auto result1=my_solution.convert(a,numRow);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：利用z的周期性(周期为((numRows - 1) * 2))，来直接按行进行数据的计算对应的步长索引一次更新两个值，
//注意这里的周期性，周期索引就应该是周期+2*i(第一个索引就是i)或者下一个周期-i,
//时间复杂度O(n^2)
//基本优质解答都在上面了，
class Solution {
public:
    string convert(string s, int numRows) {
        string res;
        //计算步长
        int start, stride = (numRows - 1) * 2;
        
        if(numRows == 1)
            return s;
        //按照行进行遍历
        for(int i = 0; i < numRows; i++){
            for(int j = i; j < s.size(); ){
                if(i == 0 || i == numRows - 1){//是否是第一行或者最后一行
                    res += s[j];
                    j += stride;//步长为一个周期
                }else{
                    res += s[j];
                    j += stride - i * 2;//步长为周期-2*i => 2(numRows-1-i); 
                    if(j < s.size()){//再次进行计算
                        res += s[j];
                        j += i*2;//这次将周期补足，刚好下一个周期
                    }
                }
            }
        }
        
        return res;
    }
};
//解法二：与1的思路相同不过使用了进行了中间代码的精简。
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)
            return s;
        
        
    string result="";
    int flag=0;
    for(int i=0;i<numRows;i++)
    {
        int j=i;
        flag=2*numRows-3;
        int flag2=flag-2*i;
        int flag3=flag-1;
        int flag4=flag3-flag2;
        while(j<s.length())
        {
            result+=s[j];
            if(i==0||i==numRows-1)
                j+=flag+1;
            else
            {
                if(flag!=flag2)//不相同
                    flag=flag2;//更新flag
                else
                    flag=flag4;

                j+=flag+1;//下一个数据

            }
        }
    }

    return result;
    }
};
*/
