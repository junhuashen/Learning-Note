/* 
data-time 2019-09-23 21:49:56
题目编号：11
题目名称：盛最多水的容器

给定 n 个非负整数 a1，a2，...，an，每个数代表坐标中的一个点 (i, ai) 。在坐标内画 n 条垂直线，垂直线 i 的两个端点分别为 (i, ai) 和 (i, 0)。找出其中的两条线，使得它们与 x 轴共同构成的容器可以容纳最多的水。
说明：你不能倾斜容器，且 n 的值至少为 2。

![](https://aliyun-lc-upload.oss-cn-hangzhou.aliyuncs.com/aliyun-lc-upload/uploads/2018/07/25/question_11.jpg)

图中垂直线代表输入数组 [1,8,6,2,5,4,8,3,7]。在此情况下，容器能够容纳水（表示为蓝色部分）的最大值为 49。
示例:

输入: [1,8,6,2,5,4,8,3,7]
输出: 49


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/container-with-most-water
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/
/*
主要思路：1.直接进行双重遍历,暴力破解查找乘积的最大值。时间复杂度O(n^2);空间复杂度O(0);
         2. 由于思路1超时，因此使用思路二，进行遍历操作，对每一个矩阵方框进行遍历，i,j的值是左或上与其最小值的和，最后取得最后的值。
         注意这里的动态规划顺序，因为第一行与第一列存在更新的延迟(比较左右两侧时没有其中一个还没来得及进行更新)，
         因此首先更新第一行和第一列的值。因为它本身的特性，也只能接收左边和右边的值
参考链接：https://leetcode-cn.com/problems/minimum-path-sum/solution/zui-xiao-lu-jing-he-by-leetcode/
*/

#include <iostream>
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
//main function
class Solution {
public:
    int maxArea(vector<int>& height) {
        int length=height.size();
        if(length<2){return 0;}
        unsigned long result=0;
        for(int i=0;i<length;++i){
            for(int j=i+1;j<length;++j){
                int width=j-i;
                int temp_height=min(height.at(i),height.at(j));
                long s=temp_height*width;
                result=(result>s)?result:s;
            }
        }
        return result;
    }
};


int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> a={1,8};
	int time_point_1=clock();
    auto result1=my_solution.maxArea(a);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
官方题解：https://leetcode-cn.com/problems/container-with-most-water/solution/sheng-zui-duo-shui-de-rong-qi-by-leetcode/

最初我们考虑由最外围两条线段构成的区域。
现在，为了使面积最大化，我们需要考虑更长的两条线段之间的区域。
如果我们试图将指向较长线段的指针向内侧移动，矩形区域的面积将受限于较短的线段而不会获得任何增加。
但是，在同样的条件下，移动指向较短线段的指针尽管造成了矩形宽度的减小，但却可能会有助于面积的增大。
因为移动较短线段的指针会得到一条相对较长的线段，这可以克服由宽度减小而引起的面积减小。

作者：LeetCode
链接：https://leetcode-cn.com/problems/container-with-most-water/solution/sheng-zui-duo-shui-de-rong-qi-by-leetcode/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//优质解答：
1. 使用快读排序的方法，从左右两端开始进行遍历比较。找到最合适的值，先从最大的宽度开始找起，然后一步步进行左右位移，查找对应的较大的高度，由此来对所有的面积进行遍历查找。
时间复杂度O(n)

class Solution {
public:
    int maxArea(vector<int>& height) {
        if(height.size() <= 1) return -1;
        int i = 0, j = height.size() - 1, res = 0;
        while(i < j){
            //查找h

            int h = min(height[i], height[j]);
            //计算最大面积

            res = max(res, h * (j - i));
            //如果左边高度小于右边，左移否则右移；这里是保证在宽度的情况下，尽可能增加高度

            if(height[i] < height[j]){
                ++i；
            }else{
                --j;
            }
        }
        return res;
    }
};
2. 思路相同，不过代码不同。

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0, i = 0, j = height.size() - 1;
        int temp;
        while(i <= j){
            if(height[i] < height[j]){
                temp = height[i]*(j-i);
                max = temp > max ? temp : max;
                i++;
            }
            else{
                temp = height[j]*(j-i);
                max = temp > max ? temp : max;
                j--;
            }
        }
        return max;
    }
};

*/