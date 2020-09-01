
/*

编程题1
时间限制： 1000MS
内存限制： 65536KB
题目描述：
最近DJI发布了一款Robomaster S1机器人，小伙伴们都沉迷其中不能自拔。小J为了能够在竞速比赛中迅速获胜，他决定利用开发的优势，在里面植入一套最优化的寻路算法。

比赛规则如下: 在比赛场地内预先设置N个路标，路标编号从0到N-1，S1只能沿直线在两个有连接的路标之间移动（部分路标之间是没有连接的） 比赛场地内的S1机器人从编号为0的路标出发，然后裁判给出随机一个路标（从0到N-1号路标中随机挑选一个）作为终点路标，要求S1机器人以尽可能快的速度从0号路标达到终点路标，总路程用时最短者获胜。

裁判会确保从0号路标和随机挑选的终点路标之间肯定存在至少一条路径。 小J在比赛开始前就已经得知了路标的数量 、通道的数量（每两个可以直接连接的路标点为一个通道）以及小车在每个通道上移动需要的时间。他需要编写一套算法，以确保能够快速找到最短路径，并输出小车在该路径移动所需要的时间，你能帮他实现这套算法吗?



输入描述
第一行输入两个个正整数 N和 P，其中N表示路标的数量， P表示通道的数量。 (1 < N <= 200,  0 <= P <= N * (N - 1) / 2 ）

接下来的P行，每行输入三个正整数 A, B, T，A表示起点路标的编号，B表示终点路标的编号，T表示路标A到路标B需要时间T。 (0 <= A, B <= N-1, 1 <= T <= 100)

最后一行输入一个正整数 X，表示裁判给出的终点路标编号 (0 =< X <= N)

输出描述
输出一个正整数，表示小车从0号路标到X号路标之间移动的最短用时


样例输入
4 5
0 1 15
1 2 15
0 3 50
1 3 30
2 3 10
3

样例输出
40
*/
#include <cmath>
#include <cctype>
#include <cstring>
#include <sstream>
#include <iostream>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <unordered_map>
#include <unordered_set>
#include <algorithm>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <future>
#include <cstdint>
#include <climits>


/* 图的邻接表表示法 */
 
#define MaxVertexNum 100    /* 最大顶点数设为100 */
typedef int Vertex;         /* 用顶点下标表示顶点,为整型 */
typedef int WeightType;        /* 边的权值设为整型 */
typedef char DataType;        /* 顶点存储的数据类型设为字符型 */
 
/* 边的定义 */
typedef struct ENode *PtrToENode;
struct ENode{
    Vertex V1, V2;      /* 有向边<V1, V2> */
    WeightType Weight;  /* 权重 */
};
typedef PtrToENode Edge;
 
/* 邻接点的定义 */
typedef struct AdjVNode *PtrToAdjVNode; 
struct AdjVNode{
    Vertex AdjV;        /* 邻接点下标 */
    WeightType Weight;  /* 边权重 */
    PtrToAdjVNode Next;    /* 指向下一个邻接点的指针 */
};
 
/* 顶点表头结点的定义 */
typedef struct Vnode{
    PtrToAdjVNode FirstEdge;/* 边表头指针 */
    DataType Data;            /* 存顶点的数据 */
    /* 注意：很多情况下，顶点无数据，此时Data可以不用出现 */
} AdjList[MaxVertexNum];    /* AdjList是邻接表类型 */
 
/* 图结点的定义 */
typedef struct GNode *PtrToGNode;
struct GNode{  
    int Nv;     /* 顶点数 */
    int Ne;     /* 边数   */
    AdjList G;  /* 邻接表 */
};
typedef PtrToGNode LGraph; /* 以邻接表方式存储的图类型 */
 
 
 
LGraph CreateGraph( int VertexNum )
{ /* 初始化一个有VertexNum个顶点但没有边的图 */
    Vertex V;
    LGraph Graph;
     
    Graph = (LGraph)malloc( sizeof(struct GNode) ); /* 建立图 */
    Graph->Nv = VertexNum;
    Graph->Ne = 0;
    /* 初始化邻接表头指针 */
    /* 注意：这里默认顶点编号从0开始，到(Graph->Nv - 1) */
       for (V=0; V<Graph->Nv; V++)
        Graph->G[V].FirstEdge = NULL;
             
    return Graph; 
}
        
void InsertEdge( LGraph Graph, Edge E )
{
    PtrToAdjVNode NewNode;
     
    /* 插入边 <V1, V2> */
    /* 为V2建立新的邻接点 */
    NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
    NewNode->AdjV = E->V2;
    NewNode->Weight = E->Weight;
    /* 将V2插入V1的表头 */
    NewNode->Next = Graph->G[E->V1].FirstEdge;
    Graph->G[E->V1].FirstEdge = NewNode;
         
    /* 若是无向图，还要插入边 <V2, V1> */
    /* 为V1建立新的邻接点 */
    NewNode = (PtrToAdjVNode)malloc(sizeof(struct AdjVNode));
    NewNode->AdjV = E->V1;
    NewNode->Weight = E->Weight;
    /* 将V1插入V2的表头 */
    NewNode->Next = Graph->G[E->V2].FirstEdge;
    Graph->G[E->V2].FirstEdge = NewNode;
}
 
LGraph BuildGraph()
{
    LGraph Graph;
    Edge E;
    Vertex V;
    int Nv, i;
     
    scanf("%d", &Nv);   /* 读入顶点个数 */
    Graph = CreateGraph(Nv); /* 初始化有Nv个顶点但没有边的图 */ 
     
    scanf("%d", &(Graph->Ne));   /* 读入边数 */
    if ( Graph->Ne != 0 ) { /* 如果有边 */ 
        E = (Edge)malloc( sizeof(struct ENode) ); /* 建立边结点 */ 
        /* 读入边，格式为"起点 终点 权重"，插入邻接矩阵 */
        for (i=0; i<Graph->Ne; i++) {
            scanf("%d %d %d", &E->V1, &E->V2, &E->Weight); 
            /* 注意：如果权重不是整型，Weight的读入格式要改 */
            InsertEdge( Graph, E );
        }
    } 
 
    // /* 如果顶点有数据的话，读入数据 */
    // for (V=0; V<Graph->Nv; V++) 
    //     scanf(" %c", &(Graph->G[V].Data));
 
    return Graph;
}


using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();
class Solution{
public:
      void function(){
       }
};



int main(int argc,char* argv[]){
    Solution a;
    LGraph my_graph=BuildGraph();
    int target=0;
    // 获取最后的目标节点
    cin>>target;
    
    return 0;
}
