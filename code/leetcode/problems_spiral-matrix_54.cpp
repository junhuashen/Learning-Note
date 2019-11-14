/* 
data-time 2019-11-14 14:19:56


题目描述:

54. 螺旋矩阵

给定一个包含 m x n 个元素的矩阵（m 行, n 列），请按照顺时针螺旋顺序，返回矩阵中的所有元素。

示例 1:

输入:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
输出: [1,2,3,6,9,8,7,4,5]
示例 2:

输入:
[
  [1, 2, 3, 4],
  [5, 6, 7, 8],
  [9,10,11,12]
]
输出: [1,2,3,4,8,12,11,10,9,5,6,7]

来源：力扣（LeetCode）
链接：https://leetcode-cn.com/problems/spiral-matrix
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路 1.使用一个同等大小的arry来保存矩阵中的元素是否被访问过。然后写入递归函数，按照右，下，左，上的先后顺序进行查找。
        时间复杂度O(n);空间复杂度O(2*n);
        2. 使用矩阵dx,dy记录下一个应当访问的位置，如果这个候选位置在矩阵范围内并且没有被访问过，
        那么它将会变成下一步移动的位置；否则，我们将前进方向顺时针旋转之后再计算下一步的移动位置。
        if (matrix.size() == 0) return ans;
        int R = matrix.size(), C = matrix[0].siez();
        vector<vector<bool>> is_checked(matrix.size(),vector<bool>(matrix[0].size(),true));
        int dr[] = {0, 1, 0, -1};
        int dc[] = {1, 0, -1, 0};
        int r = 0, c = 0, di = 0;
        for (int i = 0; i < R * C; i++) {
            ans.add(matrix[r][c]);
            seen[r][c] = true;
            //计算下一个
            int cr = r + dr[di];
            int cc = c + dc[di];
            //存在就直接访问
            if (0 <= cr && cr < R && 0 <= cc && cc < C && !seen[cr][cc]){
                r = cr;
                c = cc;
            } else { //否则重新计算
                //di表示右下左上任意一种选择
                di = (di + 1) % 4;
                //切换位置
                r += dr[di];
                c += dc[di];
            }
        }
        return ans;
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
    void getMat(int start_x,int start_y, vector<vector<int> >& matrix,vector<vector<bool>>& is_checked, vector<int >& result){
        //先向右遍历
        while (start_y+1<matrix[0].size()&&is_checked[start_x][start_y+1])
        {
            result.push_back(matrix[start_x][start_y+1]);
            is_checked[start_x][start_y+1]=false;
            ++start_y;
        }
        //向下遍历
        while (start_x+1<matrix.size()&&is_checked[start_x+1][start_y])
        {
            result.push_back(matrix[start_x+1][start_y]);
            is_checked[start_x+1][start_y]=false;
            ++start_x;
        }
        //向左遍历
        while (start_y-1<matrix[0].size()&&start_y-1>=0&&is_checked[start_x][start_y-1])
        {
            result.push_back(matrix[start_x][start_y-1]);
            is_checked[start_x][start_y-1]=false;
            --start_y;
        }
         //向上遍历
        while (start_x-1<matrix.size()&&start_x-1>=0&&is_checked[start_x-1][start_y])
        {
            result.push_back(matrix[start_x-1][start_y]);
            is_checked[start_x-1][start_y]=false;
            --start_x;
        }
        //如果上下左右都不行就跳出
        if((start_y+1<matrix[0].size()&&is_checked[start_x][start_y+1])||
            (start_x+1<matrix.size()&&is_checked[start_x+1][start_y])||
            (start_y-1<matrix[0].size()&&start_y-1>=0&&is_checked[start_x][start_y-1])||
            (start_x-1<matrix.size()&&start_x-1>=0&&is_checked[start_x-1][start_y])){
             getMat(start_x,start_y,matrix,is_checked,result);
        }
       
        
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int > result;
        if(matrix.empty()||matrix[0].empty()) return result;
        vector<vector<bool>> is_checked(matrix.size(),vector<bool>(matrix[0].size(),true));
        result.push_back(matrix[0][0]);
        is_checked[0][0]=false;
        getMat(0,0,matrix,is_checked,result);
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
    auto result=my_solution.spiralOrder(two_vector);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答：https://www.cnblogs.com/grandyang/p/5194599.html

//优质解答1：通过构建结构体，实现遍历

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> rst;

        int colSize = matrix.size();
        if (colSize == 0) return rst;

        int rowSize = matrix[0].size();
        if (rowSize == 0) return rst;

        struct Visitor
        {
            struct Pos_t { int r; int c; } pos;
            //定义上下左右索引
            Pos_t up(Pos_t p) { p.r += 1; return p; }
            Pos_t down(Pos_t p) { p.r -= 1; return p; }
            Pos_t left(Pos_t p) { p.c -= 1; return p; }
            Pos_t right(Pos_t p) { p.c += 1; return p; }

            int dir; //右下左上
            list<int> finRows;
            list<int> finCols;

            bool end;

            int rowSize(const vector<vector<int>>& mat) { return mat.size(); }
            int colSize(const vector<vector<int>>& mat) { return mat[0].size(); }

            bool valid(Pos_t p, const vector<vector<int>>& mat)
            {
                return p.r >= 0 && p.r < rowSize(mat) &&
                       p.c >= 0 && p.c < colSize(mat);
            }

            bool visited(Pos_t p)
            {
                if (dir == 0 || dir == 2)
                {
                    auto r = find(finCols.begin(), finCols.end(), p.c);
                    return r != finCols.end();
                }
                else
                {
                    auto r = find(finRows.begin(), finRows.end(), p.r);
                    return r != finRows.end();
                }
            }

            void turn() { dir += 1; dir = dir % 4; }
            Pos_t nextPos(Pos_t p)
            {
                switch (dir)
                {
                case 0:
                    p.c += 1;
                    break;
                case 1:
                    p.r += 1;
                    break;
                case 2:
                    p.c -= 1;
                    break;
                case 3:
                    p.r -= 1;
                    break;
                default:
                    p = { -1, -1 };
                }
                return p;
            }

            void move(Pos_t p)
            {
                pos = p;
            }

            void recordVisited()
            {
                if (dir == 0 || dir == 2)
                {
                    finRows.push_front(pos.r);
                }
                else
                {
                    finCols.push_front(pos.c);
                }
            }

            int next(vector<vector<int>>& mat)
            {
                int rst = mat[pos.r][pos.c];

                auto tmp = nextPos(pos);

                if (!valid(tmp, mat) || visited(tmp))
                {
                    recordVisited();
                    turn();
                    tmp = nextPos(pos);
                    if (!valid(tmp, mat) || visited(tmp)) end = true;
                    else move(tmp);
                }
                else
                {
                    move(tmp);
                }

                return rst;
            }

        } v{ {0, 0}, 0, {}, {}, false };

        while (!v.end)
        {
            rst.push_back(v.next(matrix));
        };

        return rst;
    }
};

//优质解答2： 思路相同使用了上下左右指针，根据插入查找对应的index，利用了index之间的连贯性，减少了数据访问。提高了速度
时间复杂度O(n);空间复杂度o(0)
class Solution {
public:
    int row, col;
    vector<int> res;
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        row = matrix.size();
        if(row==0) return {};
        col = matrix[0].size();
        
        int top=0, bottom=row-1;
        int left=0, right=col-1;
        while(true){

            // top //向右插入
            res.insert(res.end(), matrix[top].begin()+left, matrix[top].begin()+right+1);
            ++top;
            if(res.size() >= row*col) break;
            // right //向下插入
            auto pos = res.end();
            for(int i=top; i <= bottom; ++i) res.push_back(matrix[i][right]);
            // if((col-right)%2==0) reverse(pos, res.end());
            --right; //向左插入
            if(res.size() >= row*col) break;
            // bottow //向下插入
            // if((row-bottom)%2==1) 
            reverse(matrix[bottom].begin()+left, matrix[bottom].begin()+right+1);
            res.insert(res.end(), matrix[bottom].begin()+left, matrix[bottom].begin()+right+1);
            --bottom;
            if(res.size() >= row*col) break;
            // left //向上插入
            auto pos2 = res.end();
            for(int i=bottom; i>=top; --i) res.push_back(matrix[i][left]);
            ++left;
            if(res.size() >= row*col) break;
        }
        return res;
    }
};
//优质解答3：
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        if(matrix.empty()) return ans; //若数组为空，直接返回答案
        int u = 0; //赋值上下左右边界
        int d = matrix.size() - 1;
        int l = 0;
        int r = matrix[0].size() - 1;
        while(true)
        {
            for(int i = l; i <= r; ++i) ans.push_back(matrix[u][i]); //向右移动直到最右
            if(++ u > d) break; //重新设定上边界，若上边界大于下边界，则遍历遍历完成，下同
            for(int i = u; i <= d; ++i) ans.push_back(matrix[i][r]); //向下
            if(-- r < l) break; //重新设定有边界
            for(int i = r; i >= l; --i) ans.push_back(matrix[d][i]); //向左
            if(-- d < u) break; //重新设定下边界
            for(int i = d; i >= u; --i) ans.push_back(matrix[i][l]); //向上
            if(++ l > r) break; //重新设定左边界
        }
        return ans;
    }
};


作者：youlookdeliciousc
链接：https://leetcode-cn.com/problems/spiral-matrix/solution/cxiang-xi-ti-jie-by-youlookdeliciousc-3/
来源：力扣（LeetCode）
著作权归作者所有。商业转载请联系作者获得授权，非商业转载请注明出处。

//官方题解：
https://leetcode-cn.com/problems/spiral-matrix/solution/luo-xuan-ju-zhen-by-leetcode/

//优质解析：
https://leetcode-cn.com/problems/spiral-matrix/solution/cxiang-xi-ti-jie-by-youlookdeliciousc-3/
*/