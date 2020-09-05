/* 
data-time 2020-04-03 18:26:54


小明作为一个游泳池管理员，以玩弄给水管和排水管为乐，也因此产生了很多数学题考验小朋友。

现在小明想把这个行动升级，考验一下程序员，
做了一个自动装置来控制给水管和排水管。在开始时，
给水管和排水管都是打开状态的，并且游泳池里没有水。
在自动装置的作用下，每经过t1分钟，给水管的状态都会改变，
即从打开状态变为关闭状态或从关闭状态变为打开状态，
而同时每经过t2分钟，排水管的状态也会改变。
当给水管打开时，给水管每分钟会向游泳池里注入m1升水；
当排水管打开时，排水管每分钟会把游泳池里水排走m2升；
当给水管和排水管同时打开时，游泳池的水量变化为每分钟(m1-m2)升。
当然泳池的水量不能变为负数，同时泳池也有个最大容量m，水量不能超过m升。
那么经过t分钟后，游泳池里有多少升水？

https://www.nowcoder.com/test/question/done?tid=32308276&qid=810017#summary

/*
因为时间T1的范围较小，因此直接暴力即可
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
int T;
int m, t, m1, t1, m2, t2;
int p1, p2;
  
int main(){
    scanf("%d", &T);
    while(T--){
        scanf("%d%d%d%d%d%d",&m, &t, &m1, &t1, &m2, &t2);
        //p1,p2记录开关状态
        p1 = p2 = 0;
        int ans = 0;
        //遍历判断当前时间的速度
        for(int i = 0; i < t; i++){
            //判断状态，到达边界，切换状态
            if(i % t1 == 0)p1 = 1 - p1;
            if(i % t2 == 0)p2 = 1 - p2;
              
            ans = ans + p1 * m1 - p2 * m2;
            if(ans < 0)ans = 0;
            if(ans > m)ans = m;
        }
          
        printf("%d\n",ans);
    }
}
