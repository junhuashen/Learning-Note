/* 
data-time 2019-11-14 13:34:56


题目描述:

60. 第k个排列

给出集合 [1,2,3,…,n]，其所有元素共有 n! 种排列。

按大小顺序列出所有排列情况，并一一标记，当 n = 3 时, 所有排列如下：

"123"
"132"
"213"
"231"
"312"
"321"
给定 n 和 k，返回第 k 个排列。

说明：

给定 n 的范围是 [1, 9]。
给定 k 的范围是[1,  n!]。
示例 1:

输入: n = 3, k = 3
输出: "213"
示例 2:

输入: n = 4, k = 9
输出: "2314"

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/permutation-sequence
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路 1. 创建一个1-n的数组，然后指直接使用k次next_permutation；获取最终结果
        时间复杂度O(klog(n)+2*n);空间复杂度O(n);
        2. 
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
    string getPermutation(int n, int k) {
        string result="";
        vector<int > temp(n,0);
        for(int i=0;i<n;++i){
            temp[i]=i+1;
        }
        while (--k)
        {
           std::next_permutation(temp.begin(),temp.end());
        }
        for(auto temp_vect:temp){
            result+=to_string(temp_vect);
        }
        return result;
        
    }
};
int main(int argc, char const *argv[]) {
     Solution my_solution;
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,3,6,7};
    vector<int> vector_temp2={2,5,6};
    vector<vector<int> > two_vector={
        {1, 2, 3 },
        {4, 5, 6},
        {7, 8, 9}
    };
    vector<string >temp={"eat","tea","tan","ate","nat","bat"
                        };
	int time_point_1=clock();
    auto result=my_solution.getPermutation(3,3);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*


//优质解答1：因为集合中的元素没有重复，每个元素开头的排列数量均相同，且均为(n-1)!;因此可以递归的查看k是由那几个数的开头组成，依次顺序查找并递增就可以了
时间复杂度O(k);空间复杂度O(1)
class Solution {
public:
    string getPermutation(int n, int k) {
        //N*A(N-1,N-1)
        int cur_n = n - 1;
        int cur_k = k;
        string res;
        vector<char> map = {'0','1','2','3','4','5','6','7','8','9'};
        while (cur_n > 0) {
            int base = 1;
            //计算cur_n的阶乘，存储在base中
            for (int i = 1; i <= cur_n; ++i) {
                base = i * base;
            }

            int cur_one = 0;
            //计算大于cur_k的最小倍数
            while (cur_one * base < cur_k)
                cur_one++;
            //将查找到的数添加到cur_one中
            res += map[cur_one];
            //将已经添加的数减去
            map.erase(map.begin()+cur_one);
            //查找下一个
            cur_n--;
            //重新计算当前的cur_k
            cur_k = cur_k-(cur_one-1)*base;
        }
        res+=map[1];
        return res;
    }
};

//优质解答2： 和上面基本相同，使用了数组来存储阶乘
时间复杂度O(n^2);空间复杂度O(n)
class Solution {
public:
    string getPermutation(int n, int k) {
        string res;
        string num="123456789";
        vector<int> f(n,1);
        //计算阶乘
        for(int i=1;i<n;++i)
        {
            f[i]=f[i-1]*i;
        }
        --k;
        int j;
        //计算所有值
        for(int i=n;i>=1;--i)
        {
            //计算k中对应的当前位的最大阶乘数，即对应的字母索引
            j=k/f[i-1];
            //添加该值
            res.push_back(num[j]);
            //将该值从集合中删除，避免第二次遇到重复;继续计算下面的数
            num.erase(j,1);
            //计算剩余的组合；
            k=k%f[i-1];
        }
        return res;
    }
};


作者：youlookdeliciousc
链接：https://leetcode-cn.com/problems/spiral-matrix/solution/cxiang-xi-ti-jie-by-youlookdeliciousc-3/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解：
https://leetcode-cn.com/problems/spiral-matrix/solution/luo-xuan-ju-zhen-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/permutation-sequence/solution/zhi-jie-sheng-cheng-di-kge-pai-lie-zhu-ge-que-ding/
https://leetcode-cn.com/problems/permutation-sequence/solution/ju-jue-hui-su-qiao-yong-lian-biao-cdai-ma-yong-shi/
*/