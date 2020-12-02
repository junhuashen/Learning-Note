
/**
牛客网
2018 360春招笔试6

[编程题]奇异长度
时间限制：C/C++ 1秒，其他语言2秒

空间限制：C/C++ 64M，其他语言128M

给你一个图，0节点连接这一个联通块a，1节点连接着一个联通块b,ab仅由01这条边相连。现在我们定义奇异路径为恰好经过0-1这条边一次的路径。在这个图中有无数条奇异路径，问第k长的奇异路径长度是多少？


输入描述:
输入若干行，第一行有三个正整数n,m,k,表示有n个节点，0~n-1,有m条边，问第k长，接下来有m行u,v,表示边，保证0-1边只出现一次,保证a,b联通块只通过0-1相连。
5<=n<=100,k<2^40

输出描述:
输出一行表示答案

输入例子1:
5 4 10
0 1
0 2
1 3
1 4

输出例子1:
4
https://www.nowcoder.com/test/question/done?tid=31796355&qid=535402#summary
 * 
*/
#include <cstdio>
#include <cstring>
#include <vector>
#include <iostream>

using std::vector;
  
typedef long long ll;
  /*图，邻接表，路径*/
const int MAX = 102;
vector<int> G[MAX];//节点数[5,100]
ll vis[MAX][MAX<<8];
int n, m;
ll k;//k<2^40
  
ll get(int idx, int len) {
    if (vis[idx][len] > 0) {
        return vis[idx][len];
    }
    if (len == 0) {
//      printf("vis[%d][%d]=1\n", idx, len);
        return vis[idx][len] = 1;
    }
    if (len == 1) {
//      printf("vis[%d][%d]=%d\n", idx, len, G[idx].size());
        return vis[idx][len] = (ll)G[idx].size();
    }
  
    ll s = 0LL;
    for (auto it: G[idx]) {
        ll val = get(it, len-1);
        s += val;
//      printf("vis[%d][%d]+=<%d,%d,%lld>=%lld\n", idx, len, it, len-1, val, s);
    }
//  printf("vis[%d][%d]=%lld\n", idx, len, s);
    return vis[idx][len] = s;
}
  
int main() {
    while (~scanf("%d%d%lld", &n, &m, &k)) {
        std::cout<<n<<" "<<m<<" "<<k<<std::endl;
//         for (int i = 0; i < n; i++) {
//             G[i].clear();
//         }
//         int u, v;
//         for (int i = 0; i < m; i++) {
//             scanf("%d%d", &u, &v);
//             if ((u == 0 && v == 1) || (u == 1 && v == 0)) {
//                 continue;
//             }
//             G[u].push_back(v);
//             G[v].push_back(u);
//         }
//         memset(vis, 0, sizeof(vis));
          
//         if (k == 1) {
//             puts("1");
//             continue;
//         }
  
//         int ans = 0;
//         while (k > 0) {
//             ans++;
//             for (int i = 0; i <= ans-1; i++) {
//                 k -= get(0, i) * get(1, ans - 1 - i);
// //              printf("ans=%d,k=[%lld],i=<%d,%lld>,ans-i=<%d,%lld>\n", ans, k, i, get(0, i), ans-i, get(1, ans-i));
//             }
//         }
//         printf("%d\n", ans);
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAX = 102;
vector<int> G[MAX];
ll vis[MAX][MAX<<8];
int n, m;
ll k;

ll get(int idx, int len) {
	if (vis[idx][len] > 0) {
		return vis[idx][len];
	}
	if (len == 0) {
		return vis[idx][len] = 1;
	}
	if (len == 1) {
		return vis[idx][len] = (ll)G[idx].size();
	}
	ll  s = 0LL;
	for (auto it : G[idx]) {
		ll val = get(it,len-1);
		s += val;
	}
	return vis[idx][len] = s;
}

int main() {
	while (~scanf("%d%d%lld", &n, &m, &k)) {
		for (int i = 0; i < n; i++) {
			G[i].clear();
		}
		int u, v;
		for (int i = 0; i < m; i++) {
			scanf("%d%d",&u,&v);
			if ((u == 0 && v == 1) || (u == 1 && v == 0)) {
				continue;
			}
			G[u].push_back(v);
			G[v].push_back(u);
		}
		memset(vis,0,sizeof(vis));

		if (k == 1) {
			puts("1");
			continue;
		}

		int ans = 0;
		while (k > 0) {
			ans++;
			for (int i = 0; i <= ans - 1; i++) {
				k -= get(0, i) * get(1,ans-1-i);
			}
		}
		printf("%d\n",ans);
	}
	return 0;
}

*/