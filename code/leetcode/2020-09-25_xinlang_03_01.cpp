class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 在Interval类中返回结果，其中start表示有效字的个数，end表示全部有效字编号的和除以100000007的余数。
     * @param N int整型 字的总数
     * @param M int整型 连接关系的总数
     * @param conn Interval类vector 全部连接关系
     * @return Interval类
     */
    // vector<bool> state;
    Interval trim(int N, int M, vector<Interval>& conn) {
        // write code here
        // state.resize(N+1);
        // vector<char> state(N,0);
        sort(conn.begin(), conn.end(), [](Interval &a, Interval &b){return a.start< b.start;});
        for(int i=0; i<M; i++){
            auto cur = conn[i];
            if(history.count(cur.start) ==0){
                history[cur.start] = {false, {i,i}};
            }else{
                history[cur.start].second[1] = i;
            }
        }
        vector<int> origin_data;
        origin_data.reserve(1000);
        origin_data.push_back(0);
        DFS(origin_data, conn);
        int cnt = 0;
        int total = 0;
        for(int i=0; i<N+1; i++){
            if(history.count(i) == 0) continue;
            if(history[i].first == false) continue;
            cnt += 1;
            total += i;
            total %= 100000007;
        }
        Interval ret = {cnt, total};
        return ret;
    }
    void DFS(vector<int> &last, vector<Interval>& conn){
        if(!last.empty() && (last.back() == -1 || history[last.back()].first)){
            for(auto &i:last){
                if(i==0 || i==-1) continue;
                history[i].first = true;
                // state[i] = 1;
            }
            return;
        }
        if(last.empty()) return;
        auto range = history[last.back()].second;
        if(range.empty()) return;
        for(int i=range[0]; i<=range[1]; i++){
            last.push_back(conn[i].end);
            DFS(last, conn);
            last.pop_back();
        }
    }
    map<int, pair<bool, vector<int>>> history;
};