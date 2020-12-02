/* 
data-time 2020-03-25 14:37:58

399. 除法求值

给出方程式 A / B = k, 其中 A 和 B 均为代表字符串的变量， k 是一个浮点型数字。根据已知方程式求解问题，并返回计算结果。如果结果不存在，则返回 -1.0。

示例 :
给定 a / b = 2.0, b / c = 3.0
问题: a / c = ?, b / a = ?, a / e = ?, a / a = ?, x / x = ? 
返回 [6.0, 0.5, -1.0, 1.0, -1.0 ]

输入为: vector<pair<string, string>> equations, vector<double>& values, vector<pair<string, string>> queries(方程式，方程式结果，问题方程式)， 其中 equations.size() == values.size()，即方程式的长度与方程式结果长度相等（程式与结果一一对应），并且结果值均为正数。以上为方程式的描述。 返回vector<double>类型。

基于上述例子，输入如下：

equations(方程式) = [ ["a", "b"], ["b", "c"] ],
values(方程式结果) = [2.0, 3.0],
queries(问题方程式) = [ ["a", "c"], ["b", "a"], ["a", "e"], ["a", "a"], ["x", "x"] ]. 
输入总是有效的。你可以假设除法运算中不会出现除数为0的情况，且不存在任何矛盾的结果。

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/evaluate-division
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：应该把它视为一个图，每个string就是顶点。value就是边。问题就是两点之间的路径边的乘积;
        空间复杂度O(n^2);时间复杂度O(n^2);
        
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
struct Edge
{
    int status;/* 边是否访问过 */
    double val;
    Edge():status(0),val(0){}
    Edge(int s,double v):status(s),val(v){}
    /* data */
};

//main function
/*
主要思路：应该把它视为一个图，每个string就是顶点。value就是边。问题就是两点之间的路径边的乘积;
        空间复杂度O(n^2);时间复杂度O(n^3);
*/
struct Edge
{
    int status;/* 边是否访问过 */
    double val;
    Edge():status(0),val(0){}
    Edge(int s,double v):status(s),val(v){}
    /* data */
};

//main function
class Solution {
public:
    vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
        
        int len=values.size();
        int len1=equations.size();
        if(len!=len1||len==0){
            return {};
        }
        int res_len=queries.size();
        if(res_len==0) return {};
        vector<double> res(res_len,0);
        /* 字符串和图顶点的映射 */
        
        std::unordered_map<std::string,int> key_val;
        /* 遍历统计顶点 */
        int count=0;
        for(int i=0;i<len;++i){
            if(key_val.find(equations[i][0])==key_val.end()){
                key_val[equations[i][0]]=count++;
            }
            if(key_val.find(equations[i][1])==key_val.end()){
                key_val[equations[i][1]]=count++;
            }
        }
        /* 二维矩阵存储边 */
        vector<vector<Edge>> graph(count,vector<Edge>(count,Edge(0,0)));
        /* 遍历结果，构造图*/
        for(int k=0;k<len;++k){
            int i=key_val[equations[k][0]];
            int j=key_val[equations[k][1]];
            graph[i][j].val=values[k];
            graph[i][j].status=1;
            graph[j][i].val=1/values[k];
            graph[j][i].status=1;
        }
        /* 遍历整个图；计算联通性 */
        for(int i=0;i<count;++i){
            for(int j=0;j<count;++j){
                for(int k=0;k<count;++k){
                    if(graph[i][j].status==0&&graph[i][k].status==1&&graph[k][j].status==1){
                        graph[i][j].status=1;
                        graph[i][j].val=graph[i][k].val*graph[k][j].val;
                    }
                }
            }
        }
        for(int k=0;k<res_len;++k){
            if(key_val.find(queries[k][0])!=key_val.end()&&key_val.find(queries[k][1])!=key_val.end()){
                int i=key_val[queries[k][0]];
                int j=key_val[queries[k][1]];
                if(graph[i][j].status==1){
                    res[k]=graph[i][j].val;
                }else{
                    res[k]=-1;
                }
            }else{
                res[k]=-1;
            }
        }
        
        return res;
    }
};

int main(int argc, char const *argv[]) {
    Solution my_solution;
    //input string
    vector<vector <int>> vector_temp2={{2}};
    vector<int > temp_vector2={0,0,1,1,1,1,2,3,3};
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
    auto result=my_solution.surfaceArea(temp_vector);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*

//优质解答1：双向图DFS遍历

class Solution {
public:
	unordered_map<string, vector<pair<string, double>>> ump;
	double getdist(string &a, string &b)
	{
		//没出现过直接返回-1.0
		auto it1 = ump.find(a);
		auto it2 = ump.find(b);
		if (it1 == ump.end() || it2 == ump.end())
			return -1.0;

		//相等直接返回1.0
		if (a == b)
			return 1.0;

		//BFS遍历
		queue<pair<string, double>> Q;
		Q.push({ a, 1.0 });
		unordered_map<string, int> vis;
		vis[a] = 1;

		double ret = -1.0;
		while (!Q.empty())
		{
			auto f = Q.front();
			Q.pop();

			//记录为已访问
			vis[f.first] = 1;
			//已到达目标，返回当前值
			if (f.first == b)
			{
				ret = f.second;
				break;
			}
			for (auto &pr : ump[f.first])
			{
				//新节点的值乘上权重
				if (vis[pr.first] == 0)
					Q.push({ pr.first, pr.second*f.second });
			}
		}
		return ret;
	}

	vector<double> calcEquation(vector<vector<string>>& equations, vector<double>& values, vector<vector<string>>& queries) {
		int n = equations.size();
		while (n--)
		{
			//建立双向图
			ump[equations[n][0]].push_back({ equations[n][1], values[n] });
			ump[equations[n][1]].push_back({ equations[n][0], 1.0 / values[n] });
		}

		vector<double> ret;
		for (auto &vec : queries)
			ret.push_back(getdist(vec[0], vec[1]));
		return ret;
	}


官方题解:


优质解析：
https://leetcode-cn.com/problems/evaluate-division/solution/ji-lu-san-chong-fang-fa-by-frank588/
https://leetcode-cn.com/problems/evaluate-division/solution/bing-cha-ji-lu-jing-ya-suo-by-gin_tama/
*/