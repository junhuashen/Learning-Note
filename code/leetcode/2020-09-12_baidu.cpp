#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> getTopK(vector<int> origin_data,int k) {
    vector<int> res;
    std::priority_queue<int> data;
    for(int i=0;i<origin_data.size();++i) {
        if(data.size()<k) {
            data.push(origin_data.at(i));
        }else
        {
            if(data.top()<origin_data.at(i)) {
                data.pop();
                data.push(origin_data.at(i));
            }
        }
        
    }
    while(!data.empty()) {
        res.push_back(data.top());
        data.pop();
    }
    return res;
}

int main() {
    //int a;
    //cin >> a;
    vector<int> origin_data={1,2,3,4,5,6};
       
    
   
    //cout << "Hello World!" << endl;
}