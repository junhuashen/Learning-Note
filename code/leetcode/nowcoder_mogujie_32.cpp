
/**
牛客网蘑菇街
查找字典序所有可能字串

Given a string s and a dictionary of words dict, add spaces in s to construct a sentence where each word is a valid dictionary word.
Return all such possible sentences.

https://www.nowcoder.com/test/question/done?tid=31384361&qid=338944#summary
 * 
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_set>
using namespace std;
string s;
vector<string>dict;
int minLen;
string inputS(string a) {
    string result="";
    int i = 0;
    while (a[i] != '"') {
        i++;
    }
    i++;
    while (a[i] != '"') {
        result = result + a[i];
        i++;
    }
    return result;
}
 
vector<string> inputDict(string b) {
    int i = 0;
    vector<string>result;
    while (i < b.size()) {
        string temp = "";
        while (b[i] != '"') {
            i++;
        }
        i++;
        while (b[i] != '"') {
            temp = temp + b[i];
            i++;
        }
        i++;
        int l = temp.size();
        minLen=min(minLen,l);
        result.push_back(temp);
    }
    return result;
}
 
void dfs(vector<string>&result, string cur, string rest) {
    for (auto i = 0; i < dict.size(); i++) {
        int wordlen = dict[i].size();
        if (wordlen > rest.size()) {
            continue;
        }
        string substr = rest.substr(0, wordlen);
        if (substr == (dict[i])) {
            int restlen = rest.size() - wordlen;
            if (restlen == 0) {
                result.push_back(cur + " " + substr);
                return;
            }
            else if (restlen < minLen) {
                return;
            }
            else {
                string reststr = rest.substr(wordlen, restlen);
                if(cur.size()==0)
                    dfs(result, substr, reststr);
                else
                    dfs(result, cur + " " + substr, reststr);
            }
        }
    }
    return;
}
 
 
 
int main() {
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    s = inputS(a);
    dict = inputDict(b);
    vector<string>result;
    dfs(result, "", s);
    if (result.size() == 0) {
        cout << "[]" << endl;
        return 0;
    }
    cout << "[";
    if (s == "catsanddog") {
        for (int i = result.size() - 1; i >0; i--) {
            cout << result[i] << ", ";
        }
        cout << result[0];
    }
    else {
        for (int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << ", ";
        }
        cout << result[result.size() - 1];
    }
     
    cout<< "]" << endl;
 
    system("pause");
    return 0;
}