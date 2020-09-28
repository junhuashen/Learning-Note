/*
360公司 2021校招 技术综合A卷在线考试
编程题|30.0分2/2
乌龟爬
时间限制： 1000MS
内存限制： 262144KB
题目描述：
一只乌龟来到了图论森林游玩。图论森林可以被抽象地看作有n个点m条带权无向边的简单图，没有自环没有重边。乌龟需要从s点到达t点。森林里居住了很多兔子，乌龟在经过一条边时会因为爬得太慢而受到边上兔子们的嘲笑，一条边上兔子数量为这条边的边权。

乌龟想承受尽可能少的嘲笑，它想找到一条从起点到终点的路径，路径上有一条边的兔子是这条路径所有边中最多的，它想让这个值尽可能少，请问最少是多少。



输入描述
第一行四个数n,m,s,t。

接下来m行，每行三个数u,v,w，表示u和v之间有一条边权为w的无向边。

输入保证s点和t点连通。

1≤n≤100,000；0≤m≤200,000；1≤w≤1,000,000,000

输出描述
一个数表示答案。


样例输入
5 6 1 5
1 5 100
1 2 10
2 5 5
1 3 3
3 4 2
4 5 1
样例输出
3

提示
输入样例2：
3 2 1 3
1 2 99
2 3 99
1 3 100
输出样例2：
99
样例解释：
对于样例，简单来看乌龟有1-5，1-2-5，1-3-4-5三个方案可以选择。三个方案中最大权值分别为100，10，3，所以最终乌龟选择了第三条路1-3-4-5。
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