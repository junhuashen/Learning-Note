/* 
data-time 2019-09-10 20:42:56


题目描述:
2200年，在X智慧星球上有一种神奇的武器，它有一个高能准直激光发射装置，还会部署等间距的K层结界，通过K层结界来控制杀伤范围。

初始激光是绝对准直的，即不管经过多少距离，它的杀伤范围都可以认为是1x1的方格。

结界有三种类型。

第一种：普通结界, 有多种型号，型号为p的结界的杀伤范围从dxd增加到(d+p)x(d+p)

第二种：倍增结界，有多种型号，型号为p的结界的杀伤范围从dxd增加到(d*p)x(d*p)

第三种：聚集结界，有多种型号，型号为p(p>=1)，杀伤范围从(dxd)缩小到(s,s), s为满足s*p>=d的最小整数

注:经过任何一种结界，激光仍然保持为准直激光，只有杀伤范围发生了变化。

给定部署的K种结界的顺序，求最终的杀伤范围的边长是多少（显然杀伤范围是个正方形）。

[题目背景：卷积神经网络的感受野]

Input Format

第一行是一个正整数K，表示已经部署了K层结界

接下来是K行，按顺序给出K层结界的情况，每行为两个正整数z(表明结界的类型），一个正整数p(对应类型的结界的型号)

Constraints

z属于[1,3], 对应三种不同类型的结界

当z=1时，p属于[1,10]

当z=2时，p属于[2,3]

当z=3时，p属于[2,10]

在100%的测试样例中K<=1000, 且其中z=2的结界出现次数不超过10次。

Output Format

输出杀伤范围的边长

Sample Input 0

6
1 6
2 3
3 3
2 3
2 3
3 7

Sample Output 0

9

Sample Input 1

10
3 8
1 6
2 2
3 8
3 6
2 2
1 2
1 8
1 5
2 2

Sample Output 1

34



链接:https://www.hackerrank.com/contests/deepglint-ai-coding-practise/challenges/challenge-2160
/*

主要思路：1.顺序读取，进行判断，加减乘除

参考链接： https://blog.csdn.net/xiaomucgwlmx/article/details/87879306
		
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    //首先获取存在的行数
    int layer_deep=0;
    int result=1;
    std::cin>>layer_deep;
    int my_array[layer_deep][2]={0};
    for(int i=0;i<layer_deep;++i){
        std::cin>>my_array[i][0]>>my_array[i][1];
    }

    //接下来进行遍历
    for(int j=0;j<layer_deep;++j){
        switch (my_array[j][0])
        {
        case 1:
            result+=my_array[j][1];
            break;
        case 2:
            result*=my_array[j][1];
            break;
        case 3:
            result=(result+my_array[j][1]-1)/my_array[j][1];
            break;
        default:
            break;
        }
    }
    std::cout<<result<<std::endl;
    return 0;
}

/*
//优质解答：不利用辅助空间，直接使用数组转置和两个分数组转置，实现两个数组位置的交换，复杂度为O(n)

*/
