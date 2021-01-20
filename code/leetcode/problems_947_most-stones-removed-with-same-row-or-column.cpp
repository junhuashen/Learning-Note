/* 
data-time 2021-01-15 11:22:56

947. 最小石头移动数目

n 块石头放置在二维平面中的一些整数坐标点上。每个坐标点上最多只能有一块石头。

如果一块石头的 同行或者同列 上有其他石头存在，那么就可以移除这块石头。

给你一个长度为 n 的数组 stones ，其中 stones[i] = [xi, yi] 表示第 i 块石头的位置，返回 可以移除的石子 的最大数量。

 

示例 1：

输入：stones = [[0,0],[0,1],[1,0],[1,2],[2,1],[2,2]]
输出：5
解释：一种移除 5 块石头的方法如下所示：
1. 移除石头 [2,2] ，因为它和 [2,1] 同行。
2. 移除石头 [2,1] ，因为它和 [0,1] 同列。
3. 移除石头 [1,2] ，因为它和 [1,0] 同行。
4. 移除石头 [1,0] ，因为它和 [0,0] 同列。
5. 移除石头 [0,1] ，因为它和 [0,0] 同行。
石头 [0,0] 不能移除，因为它没有与另一块石头同行/列。
示例 2：

输入：stones = [[0,0],[0,2],[1,1],[2,0],[2,2]]
输出：3
解释：一种移除 3 块石头的方法如下所示：
1. 移除石头 [2,2] ，因为它和 [2,0] 同行。
2. 移除石头 [2,0] ，因为它和 [0,0] 同列。
3. 移除石头 [0,2] ，因为它和 [0,0] 同行。
石头 [0,0] 和 [1,1] 不能移除，因为它们没有与另一块石头同行/列。
示例 3：

输入：stones = [[0,0]]
输出：0
解释：[0,0] 是平面上唯一一块石头，所以不可以移除它。
 

提示：

1 <= stones.length <= 1000
0 <= xi, yi <= 104
不会有两块石头放在同一个坐标点上

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/most-stones-removed-with-same-row-or-column
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

*/

/**
主要思路:检查最后两位是否为0或者5就可以了
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
/*
主要思路:
1. 暴力破解法:构建图节点矩阵，只要同行或者同列的则视为可联通，每次按照非同行同列进行合并
最后查看有几个闭环，就是最后剩余的数目，主要使用方法为DFS
a.遍历统计行列，构造数据集合
b.再次遍历，进行深度统计
c.返回最后剩余的数目
时间复杂度O(2*n)
空间复杂度O(2*n)
*/
class Solution {
public:
    typedef std::unordered_map<int,vector<int>> HistoryMap;
    void DFS(int i,vector<vector<int>>& stones,HistoryMap& col_map,HistoryMap& row_map,vector<bool>& is_visited) {
        if(is_visited[i]) return ;
        is_visited[i]=true;
        for(int j=0;j<col_map[stones.at(i).at(0)].size();++j) {
            DFS(col_map[stones.at(i).at(0)].at(j),stones,col_map,row_map,is_visited);
        }
        for(int j=0;j<row_map[stones.at(i).at(1)].size();++j) {
            DFS(row_map[stones.at(i).at(1)].at(j),stones,col_map,row_map,is_visited);
        }
       
    }
    int removeStones(vector<vector<int>>& stones) {
        vector<bool> is_visited(stones.size(),false);
        HistoryMap col_map,row_map;
        //遍历存储map
        for(int i=0;i<stones.size();++i) {
            col_map[stones.at(i).at(0)].push_back(i);
            row_map[stones.at(i).at(1)].push_back(i);
        }
        for(int i=0;i<stones.size();++i) {
            if(is_visited[i]) {
                ++res;
                continue;
            }
            DFS(i,stones,col_map,row_map,is_visited);
        }
        return res;
    }
    int res=0;
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
   	//创建第一组数据
    vector<string> vector_temp={"cat","bt","hat","tree"};
    vector<vector<int>> temp_char=
    {
        {0,1},
        {0,0},
        {1,1},
        {0,2}
    };
    vector<int> vector_temp2={0,1,1,0,0,0};
    string str1="aaa";
    string str2="ab*a*c*a";
    int test_int=1; 
	int time_point_1=clock();
    my_solution.removeStones(temp_char);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:使用查并集，进行父类集合的归类

class DSU{
public:
    int *parent;
    int cnt;
    // 在这里初始化集合
    DSU(int n):parent(new int[n]),cnt(n){
        for(int i=0;i<n;i++) parent[i]=i;
    }
    // 查找所属的集合节点
    int find(int a) {
        if (a != parent[a]) parent[a] = find(parent[a]);
        return parent[a];
    }
    // 元素集合操作
    void union_elem(int a,int b){
        int aroot=find(a);
        int broot=find(b);
        // 如果两个的根节点不同，则表示在同一集合内
        if(aroot!=broot){
            parent[aroot]=broot;
            cnt--;
        }
    }
};
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int n=stones.size();
        if(!n) return 0;
        // 构建查并集
        DSU uf(n);
        // 进行查并集合更新
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(stones[i][0]==stones[j][0]||stones[i][1]==stones[j][1]){
                    uf.union_elem(i,j);
                }
            }
        }
        return n-uf.cnt;
    }
};
// 优质解答2:思路相同代码更加简洁
class DisjointSetUnion {
private:
    unordered_map<int, int> f, rank;

public:
    int find(int x) {
        if (!f.count(x)) {
            f[x] = x;
            rank[x] = 1;
        }
        return f[x] == x ? x : f[x] = find(f[x]);
    }

    void unionSet(int x, int y) {
        int fx = find(x), fy = find(y);
        if (fx == fy) {
            return;
        }
        if (rank[fx] < rank[fy]) {
            swap(fx, fy);
        }
        rank[fx] += rank[fy];
        f[fy] = fx;
    }

    int numberOfConnectedComponent() {
        int num = 0;
        for (auto &[x, fa] : f) {
            if (x == fa) {
                num++;
            }
        }
        return num;
    }
};

class Solution {
public:
    int removeStones(vector<vector<int>> &stones) {
        int n = stones.size();
        DisjointSetUnion dsu;
        for (int i = 0; i < n; i++) {
            dsu.unionSet(stones[i][0], stones[i][1] + 10000);
        }

        return n - dsu.numberOfConnectedComponent();
    }
};

//官方题解:
https://leetcode-cn.com/problems/most-stones-removed-with-same-row-or-column/solution/947-yi-chu-zui-duo-de-tong-xing-huo-tong-ezha/
https://leetcode-cn.com/problems/most-stones-removed-with-same-row-or-column/solution/yi-chu-zui-duo-de-tong-xing-huo-tong-lie-m50r/
//优质解析:
https://leetcode-cn.com/problems/binary-prefix-divisible-by-5/solution/you-xian-zhuang-tai-ji-by-nonsensersunny-glkk/

*/