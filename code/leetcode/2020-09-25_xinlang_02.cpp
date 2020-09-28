/*
主要思路:
直接暴力破解
按照指定的方法，从左到右，从上到下进行描写
*/
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 返回一行字符串，表示原文。
     * @param s1 string字符串vector N*N的01矩阵，表示解密纸，0表示透明，1表示涂黑
     * @param s2 string字符串vector 字符矩阵，表示密文
     * @return string字符串
     */
       string rotatePassword(vector<string>& s1, vector<string>& s2) {
        // write code here
        string res = "";
        // 上下左右一次读取
        for(int i=0;i<4;++i) {
            int len = s1.size();
            for(int i=0; i<len; i++){
                for(int j=0; j<len; j++){
                    if(s1[i][j] == '0') 
                    {
                        res += s2[i][j];
                    }
                }
            }
            // 转换矩阵
            for(int i=0; i<len; i++){
                for(int j=i; j<len;j++){
                    swap(s1[i][j], s1[j][i]);
                }
            }
            for(auto &s:s1){
                reverse(s.begin(), s.end());
            }
        }
        return res;
    }
};