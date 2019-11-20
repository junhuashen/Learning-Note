/* 
data-time 2019-11-19 20:17:56

77 组合

给定两个整数 n 和 k，返回 1 ... n 中所有可能的 k 个数的组合。

示例:

输入: n = 4, k = 2
输出:
[
  [2,4],
  [3,4],
  [2,3],
  [1,2],
  [1,3],
  [1,4],
]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/combinations
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

主要思路：1.  使用回溯的方式进行计算，先将当前值添加大到时vector中，继续查找下一个值，
            当vector的长度为k时，停止添加。
            时间复杂度O(n*m);空间复杂度O(n*m);
        2.  直接使用find函数。
            时间复杂度O(n);
        
*/

#include <iostream>
#include <vector>
#include <math.h>
#include <time.h>
#include <string>
#include <forward_list>
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
bool compare( vector <int> & nums1,vector <int>& nums2){
        return nums1[0]<nums2[0];
    }
//main function
class Solution {
public:
    void checkVector(vector<vector<int>>&result,vector<int> temp_vector,int start_index,int left_value,int n){
        if(!left_value){
            result.push_back(temp_vector);
            return ;
        }
        for(int i=start_index;i<=n&&i<=n-left_value+1;++i){
            temp_vector.push_back(i);
            checkVector(result,temp_vector,i+1,left_value-1,n);
            temp_vector.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int >> result;
        if(k<=0||n<=0) return result;
        vector<int > temp_vector;
        for(int i=1;i<=n&&i<=n-k+1;++i){
            temp_vector.push_back(i);
            checkVector(result,temp_vector,i+1,k-1,n);
            temp_vector.pop_back();
        }
        return result;
    }
};
int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={1,0,1,0};
    vector<vector <int>> temp_vector={
        {0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1},
        {0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0},
        {1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,1},
        {0,0,1,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0},
        {0,0,0,1,0,1,0,0,0,0,1,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1,0},
        {1,0,1,1,1,0,0,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,0,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,1,0},
        {0,0,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,1,0,0,0,1,0,0,0,0,0},
        {0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0},
        {1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,0,1,0,0,0,1,0,1,0,0,0,0,1},
        {0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,0,0,0,1,1,0,0,0,0,0},
        {0,1,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,1,0,0,0,0,0,0,1,0,0,0,0,0},
        {0,1,0,0,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,1,0,1},
        {1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,1,1,0,0,1,0,0,0,0,0,0},
        {0,0,1,0,0,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,0,1,1,0,1,0,0,0,0,1,1},
        {0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,1,1,0,1,0,1},
        {1,1,1,0,1,0,0,0,0,1,0,0,0,0,0,0,1,0,1,0,1,1,0,0,0,0,0,0,0,0,0,0,0},
        {0,0,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,1},
        {0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,1,0,0,0,1,0,0,0}
    };
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.combine(4,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：说实话没看懂
时间复杂度O(m!/(k!*(k!))) 空间复杂度O(k)

class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> temp;
        //先加入最先的k个值
        for(int i=1; i<=k; i++)
            temp.push_back(i);
        temp.push_back(n+1);

        int it = 0;
        //进行比较和交换
        while(it < k){
            vector<int> t;
            //将temp中的值复制到t
            for(int i=0; i<k; i++)
                t.push_back(temp[i]);
            //将t加入到结果中
            res.push_back(t);
            it = 0;
            //将it重置为0，遍历当前数组，如果检查到顺序性，就指直接将当前值设置为索引+1
            while(it < k && temp[it+1] == temp[it] + 1){
                temp[it] = 1 + it;
                it++;
            }
            //最后一个值++;
            temp[it]++;
        }
        return res;
    }
};

//优质解答2：使用字典序的不同，不断更改顺序并，将其添加到结果中
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> result;
        //创建一个n的数组
        vector<int> values(n);
        //将所有值设置为1-n
        iota(values.begin(), values.end(), 1);
        //设置是否访问数组
        vector<bool> select(n, false);
        //将前k个值设置为true
        fill_n(select.begin(), k, true);
        //直到字典序为逆序
        do {
            vector<int> one(k);
            //遍历vector
            for (int i = 0, index = 0; i < n; i++){
                //如果为空缺
                if (select[i]){
                    //将其设置为values
                    one[index++] = values[i];
                }
            }
            //将结果重新添加
            result.push_back(one);
        } while (prev_permutation(select.begin(), select.end()));
        return result;
    }
};



官方题解:

https://leetcode-cn.com/problems/combinations/solution/zu-he-by-leetcode/

优质解析：
https://leetcode-cn.com/problems/combinations/solution/hui-su-suan-fa-jian-zhi-python-dai-ma-java-dai-ma-/
*/