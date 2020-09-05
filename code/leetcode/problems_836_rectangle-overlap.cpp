/* 
data-time 2020-03-18 15:49:56


题目描述:

836. 矩形重叠

矩形以列表 [x1, y1, x2, y2] 的形式表示，其中 (x1, y1) 为左下角的坐标，(x2, y2) 是右上角的坐标。

如果相交的面积为正，则称两矩形重叠。需要明确的是，只在角或边接触的两个矩形不构成重叠。

给出两个矩形，判断它们是否重叠并返回结果。

 

示例 1：

输入：rec1 = [0,0,2,2], rec2 = [1,1,3,3]
输出：true
示例 2：

输入：rec1 = [0,0,1,1], rec2 = [1,0,2,1]
输出：false
 

提示：

两个矩形 rec1 和 rec2 都以含有四个整数的列表的形式给出。
矩形中的所有坐标都处于 -10^9 和 10^9 之间。
x 轴默认指向右，y 轴默认指向上。
你可以仅考虑矩形是正放的情况。



来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/rectangle-overlap/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

/*

主要思路：
主要思路使用中心点法；
比较中心点的位置是否符合:
水平小于两边水平和
垂直小于两边垂直和
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
//main function
class Solution {
public:
    bool isRectangleOverlap1(vector<int>& rec1, vector<int>& rec2) {
        long w1=labs(rec1[0]-rec1[2]);
        long h1=labs(rec1[1]-rec1[3]);
        long w2=labs(rec2[0]-rec2[2]);
        long h2=labs(rec2[1]-rec2[3]);
        long dx=labs((long)rec1[0]+(long)rec1[2]-(long)rec2[0]-(long)rec2[2]);
        long dy=labs(rec1[1]+rec1[3]-rec2[1]-rec2[3]);
        return (dx<(w1+w2))&&(dy<(h1+h2));
    }
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return !(rec2[0] >= rec1[2] || rec2[1] >= rec1[3] || rec1[0] >= rec2[2] || rec1[1] >= rec2[3]);
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<int> vector_temp2={2,5,6};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	vector<int> a={0,0,2,2};
    vector<int > b={1,1,3,3};
    int time_point_1=clock();

    auto result=my_solution.isRectangleOverlap(a,b);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：直接使用差集进行比较
class Solution {
public:
    bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
        return !(rec2[0] >= rec1[2] || rec2[1] >= rec1[3] || rec1[0] >= rec2[2] || rec1[1] >= rec2[3]);
    }
};

//官方题解:
https://leetcode-cn.com/problems/rectangle-overlap/solution/ju-xing-zhong-die-by-leetcode-solution/
//优质解析:

https://leetcode-cn.com/problems/rectangle-overlap/solution/tu-jie-jiang-ju-xing-zhong-die-wen-ti-zhuan-hua-we/
*/