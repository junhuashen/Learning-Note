
class Solution {
#define f(i,x,y) for(int i=x; i<y; i++)
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 编译顺序
     * @param input string字符串 
     * @return string字符串
     */
    string compileSeq(string str) {
        // write code here
        vector<int> vc;
        int len = str.size();
        int left = 0, right = 1;
        // 过滤字符串中的所有数字
        while(left < right && right < len){
            if(str[right] == ','){
                auto sub = str.substr(left, right-left);
                int tmp = stoi(sub);
                vc.push_back(tmp);
                left = right +1;
                right= right+2;
            }else {
                right++;
            }
        }
        // 检查最后是否有剩余
        if(left != right){
            auto sub = str.substr(left, right-left+1);
            int tmp = stoi(sub);
            vc.push_back(tmp);
        }
        len = vc.size();
        // 记录访问状态
        vector<int> state(len, -1);
        string ret;
        // 首先过滤负数
        f(i,0,len){
            if(vc[i] == -1) {
                state[i] = 1;
                if(ret.empty()) ret.push_back('0' + i);
                else{
                    ret.push_back(',');
                    ret.push_back('0'+i);
                }
            }
        }
        int idx = 0;
        // 循环操作
        while(true){
            bool flag = false;
            f(i,0,len){
                if(state[i] == 1) continue;
                // 当前数据
                int depen = vc[i];
                // 如果已经访问过
                if(state[depen] == 1){
                    flag |= true;
                    state[i] = 1;
                    ret.push_back(',');
                    ret.push_back('0'+i);
                    i=len;
                }
            }
            if(!flag){
                break;
            }
        }
        return ret;
    }
};
/*
class Solution {
    vector<int> a;
    int n;
    void getInt(string s) {
        stringstream ss(s);
        while(getline(ss, s, ',')) a.push_back(atoi(s.c_str()));
    }
public:
    string compileSeq(string input) {
        a.clear();
        getInt(input);
        n = a.size();
        string ans;
        // 边的值
        vector<int> indeg(n+1);
        // 访问树
        vector<vector<int>> tree(n);
        for(int i = 0; i < n; ++i) {
            if(a[i] == -1) continue;
            tree[a[i]].push_back(i);
            indeg[i]++;
        }
        // 创建小堆根
        priority_queue<int, vector<int>, greater<int>> heap;
        // 将为
        for(int i = 0; i < n; ++i) {
            if(indeg[i] == 0) heap.push(i);
        }
        while(!heap.empty()) {
            int cur = heap.top(); 
            heap.pop();
            if(ans.size() == 0) ans.append(to_string(cur));
            else ans.append(",").append(to_string(cur));
            // 堆节点入堆
            for(int v : tree[cur]) {
                if((--indeg[v]) == 0) {
                    heap.push(v);
                }
            }
        }
        return ans;
    }
};

*/