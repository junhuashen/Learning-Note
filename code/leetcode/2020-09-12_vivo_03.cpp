
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
        while(left < right && right < len){
            if(str[right] == ','){
                auto sub = str.substr(left, right-left);
                int tmp = stoi(sub);
                vc.push_back(tmp);
                left = right +1;
                right= right+2;
            }else right++;
        }
        if(left != right){
            auto sub = str.substr(left, right-left+1);
            int tmp = stoi(sub);
            vc.push_back(tmp);
        }
        len = vc.size();
        vector<int> state(len, -1);
        string ret;
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
        while(true){
            bool flag = false;
            f(i,0,len){
                if(state[i] == 1) continue;
                int depen = vc[i];
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
