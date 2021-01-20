/* 
data-time 2021-01-19 11:22:56

1584. 连接所有点的最小费用

给你一个points 数组，表示 2D 平面上的一些点，其中 points[i] = [xi, yi] 。

连接点 [xi, yi] 和点 [xj, yj] 的费用为它们之间的 曼哈顿距离 ：|xi - xj| + |yi - yj| ，其中 |val| 表示 val 的绝对值。

请你返回将所有点连接的最小总费用。只有任意两点之间 有且仅有 一条简单路径时，才认为所有点都已连接。

 

示例 1：



输入：points = [[0,0],[2,2],[3,10],[5,2],[7,0]]
输出：20
解释：

我们可以按照上图所示连接所有点得到最小总费用，总费用为 20 。
注意到任意两个点之间只有唯一一条路径互相到达。
示例 2：

输入：points = [[3,12],[-2,5],[-4,1]]
输出：18
示例 3：

输入：points = [[0,0],[1,1],[1,0],[-1,1]]
输出：4
示例 4：

输入：points = [[-1000000,-1000000],[1000000,1000000]]
输出：4000000
示例 5：

输入：points = [[0,0]]
输出：0
 

提示：

1 <= points.length <= 1000
-106 <= xi, yi <= 106
所有点 (xi, yi) 两两不同。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/min-cost-to-connect-all-points
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。

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
主要思路：
1. 使用克鲁斯卡尔算法，构建图，并利用查并集进行小集合的合并
    a. 构建边的集合，将边的集合进行排序
    b. 按照边的大小，每次选择最小边，加入集合中
    c. 输出集合以及最小值
时间复杂度O(2*m+m^2+n) m表示点数量，n表示边数量
空间复杂度
*/
class Solution {
public:
    struct Edge {
        Edge(int a,int b,int c):start(a),end(b),dis(c) 
        {
        }
        int start,end,dis;
        inline bool operator <(const Edge & g) {return this->dis<g.dis;}
    };
    int find(vector<int>& father,int n) {
        if(father.at(n)==n) return n;
        father[n]=find(father,father.at(n));
        return father[n];
    }
    int distance(vector<int>& a ,vector<int>& b) {
        return abs(a[0]-b[0])+abs(a[1]-b[1]);
    }
    int minCostConnectPoints(vector<vector<int>>& points) {
        int res = 0 ;
        int len = points.size();
        vector<int> fa_set(len,0);
        vector<Edge> edge_set;
        // 初始化查并集
        for(int i=0;i<len;++i) {
            fa_set[i]=i;
        }
        //初始化边
        for(int i=0;i<len;++i) {
            for(int j=i+1;j<len;++j) {
                edge_set.push_back(Edge(i,j,distance(points.at(i),points.at(j))));
            }
        }
        // 进行排序
        sort(edge_set.begin(),edge_set.end());
        // 查并集，查找最小图
        int cnt = 0;
        for(int i=0;i<edge_set.size();++i) {
            int start_f = find(fa_set,edge_set.at(i).start);
            int end_f = find(fa_set,edge_set.at(i).end);
            // 不在一个集合中
            if(start_f!=end_f) {
                cnt++;
                res += edge_set.at(i).dis;
                fa_set[start_f]=end_f;
            }
            // 边的数目，应该比点少一个
            if(cnt==len-1) break;
        }
        return res;
    }
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
    my_solution.Solution(temp_char);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1:使用查并集，进行父类集合的归类
// 构建查并集合类
class DisjointSetUnion {
private:
    vector<int> f; //父类集合
    vector<int> rank;
    int n;

public:
    DisjointSetUnion(int _n) {
        n = _n;
        rank.resize(n, 1);
        f.resize(n);
        // 初始化父类
        for (int i = 0; i < n; i++) {
            f[i] = i;
        }
    }
    // 查找函数
    int find(int x) {
        return f[x] == x ? x : f[x] = find(f[x]);
    }
    // 进行集合合并
    int unionSet(int x, int y) {
        // 查找两个点的父类集合点
        int fx = find(x), fy = find(y);
        // 如何想相同就是一个集合
        if (fx == fy) {
            return false;
        }
        // 不同，将值大的拍在前面
        if (rank[fx] < rank[fy]) {
            swap(fx, fy);
        }
        // 添加集合值，fx的集合总值++
        rank[fx] += rank[fy];
        // 将y添加到x集合中
        f[fy] = fx;
        return true;
    }
};

class BIT {
public:
    vector<int> tree, idRec;
    int n;

    BIT(int _n) {
        n = _n;
        tree.resize(n, INT_MAX);
        idRec.resize(n, -1);
    }
    // 获取低bit位
    int lowbit(int k) {
        return k & (-k);
    }
    // 更新位姿
    void update(int pos, int val, int id) {
        while (pos > 0) {
            if (tree[pos] > val) {
                tree[pos] = val;
                idRec[pos] = id;
            }
            pos -= lowbit(pos);
        }
    }
    // 查询位置
    int query(int pos) {
        int minval = INT_MAX;
        int j = -1;
        while (pos < n) {
            if (minval > tree[pos]) {
                minval = tree[pos];
                j = idRec[pos];
            }
            pos += lowbit(pos);
        }
        return j;
    }
};

struct Edge {
    int len, x, y;
    Edge(int len, int x, int y) : len(len), x(x), y(y) {
    }
    bool operator<(const Edge& a) const {
        return len < a.len;
    }
};

struct Pos {
    int id, x, y;
    bool operator<(const Pos& a) const {
        return x == a.x ? y < a.y : x < a.x;
    }
};

class Solution {
public:
    vector<Edge> edges;
    vector<Pos> pos;

    void build(int n) {
        sort(pos.begin(), pos.end());
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) {
            a[i] = pos[i].y - pos[i].x;
            b[i] = pos[i].y - pos[i].x;
        }
        sort(b.begin(), b.end());
        b.erase(unique(b.begin(), b.end()), b.end());
        int num = b.size();
        BIT bit(num + 1);
        for (int i = n - 1; i >= 0; i--) {
            int poss = lower_bound(b.begin(), b.end(), a[i]) - b.begin() + 1;
            int j = bit.query(poss);
            if (j != -1) {
                int dis = abs(pos[i].x - pos[j].x) + abs(pos[i].y - pos[j].y);
                edges.emplace_back(dis, pos[i].id, pos[j].id);
            }
            bit.update(poss, pos[i].x + pos[i].y, i);
        }
    }

    void solve(vector<vector<int>>& points, int n) {
        pos.resize(n);
        for (int i = 0; i < n; i++) {
            pos[i].x = points[i][0];
            pos[i].y = points[i][1];
            pos[i].id = i;
        }
        build(n);
        for (int i = 0; i < n; i++) {
            swap(pos[i].x, pos[i].y);
        }
        build(n);
        for (int i = 0; i < n; i++) {
            pos[i].x = -pos[i].x;
        }
        build(n);
        for (int i = 0; i < n; i++) {
            swap(pos[i].x, pos[i].y);
        }
        build(n);
    }

    int minCostConnectPoints(vector<vector<int>>& points) {
        int n = points.size();
        solve(points, n);

        DisjointSetUnion dsu(n);
        sort(edges.begin(), edges.end());
        int ret = 0, num = 1;
        for (auto& [len, x, y] : edges) {
            if (dsu.unionSet(x, y)) {
                ret += len;
                num++;
                if (num == n) {
                    break;
                }
            }
        }
        return ret;
    }
};

// 优质解答2:思路相同代码更加简洁
#include<queue>

class Solution {
public:
    int minCostConnectPoints(vector<vector<int>>& points) {
        // 距离数组
        vector<int> dis;
        dis.resize(points.size());
        int inf = 0x7FFFFFFF;
        for(int i = 0; i<points.size(); i++){
            dis[i] = inf;
        }
        dis[0] = 0;
        int cost = 0;
        int minDisNode = 0;
        int minDis = 0;

        while(minDis!=inf){
            // 添加最小距离
            cost += dis[minDisNode];
            // 将最小距离重置为0
            dis[minDisNode] = 0;

            minDis = inf;
            // 将右指针和左指针同步
            int lastNode = minDisNode;
            // 遍历所有点
            for(int j=0; j<points.size(); j++){
                // 如果该点可达
                if(dis[j]){
                    // 计算ij距离
                    int dis_ij = abs(points[lastNode][0] - points[j][0]) +
                    abs(points[lastNode][1] - points[j][1]);
                    // 更新j的最小距离
                    if(dis_ij < dis[j]){
                        dis[j] = dis_ij;
                    }
                    // 更新所有的最小距离
                    if(dis[j] < minDis){
                        minDis = dis[j];
                        minDisNode = j;
                    }
                }
            }
        }
        return cost;
    }
};

//官方题解:
https://leetcode-cn.com/problems/min-cost-to-connect-all-points/solution/lian-jie-suo-you-dian-de-zui-xiao-fei-yo-kcx7/
//优质解析:
https://leetcode-cn.com/problems/min-cost-to-connect-all-points/solution/prim-and-kruskal-by-yexiso-c500/

*/