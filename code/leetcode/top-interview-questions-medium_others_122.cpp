/* 
data-time 2019-11-03 14:36:56


题目描述:

Task Scheduler
给定一个用字符数组表示的 CPU 需要执行的任务列表。其中包含使用大写的 A - Z 字母表示的26 种不同种类的任务。任务可以以任意顺序执行，并且每个任务都可以在 1 个单位时间内执行完。CPU 在任何一个单位时间内都可以执行一个任务，或者在待命状态。

然而，两个相同种类的任务之间必须有长度为 n 的冷却时间，因此至少有连续 n 个单位时间内 CPU 在执行不同的任务，或者在待命状态。

你需要计算完成所有任务所需要的最短时间。

示例 1：

输入: tasks = ["A","A","A","B","B","B"], n = 2
输出: 8
执行顺序: A -> B -> (待命) -> A -> B -> (待命) -> A -> B.
注：

任务的总个数为 [1, 10000]。
n 的取值范围为 [0, 100]。


来源：力扣（LeetCode）
链接：https://leetcode-cn.com/explore/interview/card/top-interview-questions-medium/54/others/122/
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。


主要思路：先遍历统计，每个字母出现的频率，然后按照降序排列，找到频率最多的那个数组，中间插空，需要插入插入(n-1)个字母。
        至少需要count[0]-1个空，因此最少需要（count[0]-1）*(n-1)。剩下的最高的字母A,然后将最后一个加上，
        整理到最后公式就为：count[25]-1*(n+1) + 25-temp （25-temp为频率最高的字母的个数）。
        如果刚好插满的情况下，也就是不用待命的时候，所需时间为数组的长度。
        而此时如果用上述公式计算的话，可能会出现时间小于数组的时候，所以，应该返回他和剩余所有数之中两个之中比较大的那个。
        时间复杂度O(n),空间复杂度O(26)
        https://blog.csdn.net/qq_38595487/article/details/79977315

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

#define INT_MAX INT32_MAX
#define INT_MIN INT32_MIN

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();

bool cmp(std::pair<bool,int>& left, std::pair<bool,int>& right){
    return left.second>right.second;
}
struct CmpByKeyLength {
	bool operator()(std::pair<int,int>& left, std::pair<int,int>& right) {
		return left.second< right.second;
	}
};

//main function
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int tasks_size=tasks.size();
        vector<int> nums(26,0);
        for(auto temp_char:tasks){
            ++nums[temp_char-'A'];
        }
        sort(nums.begin(), nums.end());
        //最多有25个字母和频率最高的相同频率
        int temp=25;
        //查找剩下的25个字母中和它相同的数，后面会有延伸
        while(temp>=0&&nums[25]==nums[temp]){
            temp--;
        }
        return max((nums[25]-1)*(n+1)+25-temp,tasks_size);
    }
};

int main(int argc, char const *argv[]) {
    //input string
   	//创建第一组数据
    vector<int> vector_temp={2,2,1,1,1,2,2};
    vector<int> vector_temp2={2,5,6};
    vector<string> vector_string={"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    vector<char> vector_char={'A','A','A','B','B','B'};
    Solution my_solution;
    int test_int=1; 
	int time_point_1=clock();
    auto result=my_solution.leastInterval(vector_char,2);
    int time_point_2=clock();
	printf("\n \t Time :%d ms \n",time_point_2-time_point_1);
    return 0;
}
/*
//优质解答1：思路相同，不过使用的max_num来统计最大值
时间复杂度O(log(n));空间复杂度O(0)

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> num(26, 0);
        int max_num = 0;
        for (auto c: tasks) {
            max_num = max(++num[c-'A'], max_num);
        }
        int count = 0;
        //统计最大量的数目
        for (auto n: num) {
            if (n == max_num)
                ++count;
        }
        return max_num*count
            + max((int)tasks.size() - max_num*count,
                  (n - count + 1)*(max_num - 1));
    }
};

//优质解答2：思路相同
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int t=tasks.size();
        vector<int> cnt(26,0);
        for(int i=0;i<t;++i){
            cnt[tasks[i]-'A']++;
        }
        sort(cnt.begin(),cnt.end(),greater<int>());
        int i=0;
        int mx=cnt[0];
        while(i<26 && cnt[i]==mx){
            i++;
        }
        
        int res=max(t, (mx-1)*(n+1)+i);
        return res;
    }
};
//优质解答3：思路相同，关闭了IO同步
int __x__ = []() ->int{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    return 1010;
}();
class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        // 基本思路就是先执行最多的任务（A），然后执行第二多（B），以此类推
        // 在最多的任务（A）被执行后的时间，一到n就再次执行A，以便降低最后的冷却时间，从而使时间最短
        // 最短时间是与最多次数的任务直接相关的
        
        // 解法
        int task[26] = {0}; // 初始化一个全为0的任务数组，用来统计任务数量
        int length = tasks.size();
        // 1.先遍历一遍列表，求出任务种类数和每种任务的数量
        for(auto it = tasks.begin(); it != tasks.end(); it++)
        {
            task[(*it-'A')]++;
        }
        sort(task, task+26); // 对任务数组进行升序排列
        int maxTask = task[25]; // 最多的任务次数
        int cntTask = (maxTask - 1) * (n + 1) + 1; // 最少要执行的任务次数
        for(int i = 24; i >= 0 && task[i] == maxTask; i--)
        {
            cntTask++;
        }
        // 当间隔可以容纳下所有的任务时，返回cntTask，当间隔不能满足时，返回数组长度
        return cntTask > length ? cntTask : length;
    }
};



官方题解：
https://leetcode-cn.com/problems/task-scheduler/solution/ren-wu-diao-du-qi-by-leetcode/
优质解析：
https://leetcode-cn.com/problems/majority-element/solution/du-le-le-bu-ru-zhong-le-le-ru-he-zhuang-bi-de-qiu-/
*/