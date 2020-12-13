/*
360公司 2021校招 技术综合A卷在线考试
编程题|20.0分1/2
装载货物
时间限制： 1000MS
内存限制： 262144KB
题目描述：
搬家公司正在帮助一家人将小物体装箱。一个箱子的大小是有限的，公司可以把一个箱子分成最多k个独立的隔间，将一个箱子分成r个隔间需要r-1个隔板（这一个箱子没有放隔板也拥有一个本身的隔间）。而这一次搬家工作只携带了b个隔板。

在每一个隔间中，由于物件放多了容易损坏，最多只能放v个物体。现在这家人有a个物体，请问最少需要多少个箱子，才能将所有的物体装箱？



输入描述
多组数据，每一行一组数据包含4个数，a,b,k,v,空格隔开

输出描述
输出包含一个数，即最少的箱子数


样例输入
10 3 2 1
10 3 2 2
样例输出
7
3
*/


#include <iostream>
#include <vector>
#include <string>
/*
主要思路:
先计算需要的隔间个数m= a/v+a%v
最多空间数
在计算当前可以获取最多的隔间个数 最多创建隔间 ge_max= b/(k-1)*k+(b%(k-1))+1 和对应的箱子数目 b/(k-1)+1
如果最多空间数等于需要的隔间个数:输出 b/(k-1)+1
如果小于最多的隔间数 m/v+(m%v)
如果大于最多隔间数： (b/(k-1))+1 m-ge_max;
*/

using namespace std;

int getMin (int a,int b,int k,int v) {
    //计算需要的隔间个数
    int m = (a/v)+(a%v);
    //最多创建隔间个数
    int temp_max = (b%(k-1))?((b%(k-1))+1):0;
    // 计算最大隔间数
    int ge_max = (b/(k-1))*k+temp_max;
    int ge_max_box = (b/(k-1))+((temp_max==0)?0:1);
    // 比较计算
    if(m==ge_max) {
        return ge_max_box;
    }else if(m<ge_max) {
        int res = (m%k)?1:0;
        return m/v+res;
    }else {
        return ge_max_box+(a-ge_max*v);
    }
} 

int main(int argc,char* argv[]) {
    while(1) {
        string origin_data="";
        getline(cin,origin_data);
        // 分解字符串
        int data[4];// a,b,k,v
        string temp_string = "";
        int i=0,k=0;
        for(;i<origin_data.size()&&k<4;++i) {
            if(origin_data.at(i)==' ') {
                data[k++]=atoi(temp_string.c_str());
                temp_string.clear();
                while(i+1<origin_data.size()&&origin_data.at(i+1)==' '){
                    ++i;
                }
            }else
            {
                temp_string+=origin_data.at(i);
            }
            
        }
        if(origin_data.empty()||origin_data=="") {
            origin_data="";
            break;
        }
        // 最后在操作一次
        if(i==origin_data.size()&&temp_string!=""&&k<4) {
            data[k++]=atoi(temp_string.c_str());
            temp_string.clear();
        }
        cout<<getMin(data[0],data[1],data[2],data[3])<<endl;
    }

    return 0;
}