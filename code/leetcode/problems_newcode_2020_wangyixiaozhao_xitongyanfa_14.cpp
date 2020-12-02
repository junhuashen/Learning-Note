/* 
data-time 2020-04-07 14:41:53

小易有一个体积巨大的货物，具体来说，是个在二维平面上c*d占地的货物。
小易有一个m*n的广场，想把货物放在这个广场上。
不幸的是，广场上已经有了一些障碍物，障碍物所在的格子不能放置你的货物。
小易现在想知道能否成功地放置货物。
https://www.nowcoder.com/test/question/done?tid=32367519&qid=800710#summary



/*
主要思路:
直接输入进行查找；并遍历障碍物
*/

/*

*/


#include <vector>
#include <iostream>
  
using namespace std;
  
int t;
int n, m, k;
  
bool judge(vector<vector<bool>> &v, int ni, int nj, int c, int d) {
    for (int i = 0; i < c; i++) {
        if (ni + i >= n) return false;
        for (int j = 0; j < d; j++) {
            if (nj + j >= m) return false;
            if (v[ni + i][nj + j]) {
                  
                // 遍历到一个障碍后，将起点和障碍之内的点全部不可能为结果的起点
                // 因此全部置为障碍
                for (int p = 0; p <= i; p++) {
                    for (int k = 0; k <= j; k++) {
                        v[ni + p][nj + k]= true;
                    }
                }
                  
                return false;
            }
        }
    }
      
    return true;
}
  
int main()
{
    cin.tie();
    ios::sync_with_stdio(false);
      
    cin >> t;
      
    while (t--) {
        cin >> n >> m >> k;
        vector<vector<bool>> v(n, vector<bool>(m, false));
        while (k--) {
            int a, b;
            cin >> a >> b;
            v[a - 1][b - 1] = true;
        }
          
        int c, d;
        cin >> c >> d;
          
        bool flag = false;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!v[i][j] && judge(v, i, j, c, d)) {
                    flag = true;
                    break;
                }
            }
            if (flag) break;
        }
          
        if (flag) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
          
    }
      
    return 0;
}