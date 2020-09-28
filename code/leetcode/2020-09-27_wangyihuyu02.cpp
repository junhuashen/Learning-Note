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
/*
2
10
open libc.so
open libm.so
open libdl.so
dup 2
dup2 0 2
close 0
query 1
query 2
query 3
open log.txt
10
open output.txt
dup2 0 1000000
close 0
open output2.txt
dup2 0 100000
close 0
open 1.txt
dup 100000
query 1
query 0

*/
using namespace std;

//关闭流输出
static auto static_lambda = []()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    return 0;
}();

/*
主要思路:
使用文件描述符对象包含:
序号
打开文件对象
是否正在被使用

创建文件描述符集合
每次创建时，首先查找
没有被使用的，将其作为文件描述符返回
*/
/*
文件描述符信息
*/
struct FdInfo
{
    FdInfo()=default;
    FdInfo(int fd_index_,string file_name_,bool is_used_):fd_index(fd_index_),
                                                            file_name(file_name_),
                                                            is_used(is_used_)
    {};
    /* 文件描述符序号 */
    int fd_index;
    /* 文件名称 */
    string file_name;
    /* 该描述符是否正在被使用 */
    bool is_used;
};
/*
文件描述符集合
*/ 
struct FileInfoSet{
    FileInfoSet()=default;
    ~FileInfoSet() {
        if(!fds.empty()) {
            for(auto& temp:fds) {
                delete temp.second;
                temp.second==nullptr;
            }
        }
    }
    /* 打开一个文件描述符 */ 
    int openFile(string file_name) {
        int new_fd = getMinIndex();
        if(fds.count(new_fd)>0) {
            fds.at(new_fd)->file_name=file_name;
            fds.at(new_fd)->is_used=true;
        }else {
            fds[new_fd]=new FdInfo(new_fd,file_name,true);
        }
        ++used_count;
        return new_fd;
    }
    // 拷贝文件描述符
    int dup(int fd) {
        int new_fd = -1;
        if(fds.count(fd)<=0) {
            return -1;
        }else {
            // 查询文件描述符
            new_fd=getMinIndex();
            // 进行拷贝
            dup2(fd,new_fd);
        }
        return new_fd;
    };
    // cpoy
    void dup2(int fd,int new_fd) {
        if(fds.count(new_fd)>0) {
            fds.at(new_fd)->file_name=fds.at(fd)->file_name;
            fds.at(new_fd)->is_used = true;
        }else {
            fds[new_fd] = new FdInfo(new_fd,fds.at(fd)->file_name,true);
            // 添加使用量
            ++used_count;
        }
    }
    // 关闭文件描述符
    void close(int fd) {
        if(fds.count(fd)>0) {
            fds.at(fd)->is_used=false;
            --used_count;
        }
    }
    // 查询
    string query(int fd) {
        if(fds.count(fd)>0) {
            return fds.at(fd)->file_name;
        }else {
            return "";
        }
    }
    int getMinIndex() {
        unsigned long int res = 0;
        if(fds.empty()) {
            return 0;
        }
        // 存在没有用过的
        if(fds.size()>0&&used_count<fds.size()) {
            // 查找最小
            for (const auto &pair : fds) {
                 // 查找没有用过的
                if(!pair.second->is_used) {
                    res =  pair.first;
                }
            }
        }else if(max_index+1==fds.size()){
           res =  fds.size();
        }else {
            
             // 统计查找对应的最小值
            int max_count=0;
            bool is_get=false;
            // 都用过了查找最小值
            for (const auto &pair : fds) {
                 // 查找没有用过的
                if(pair.first==max_count){
                    ++max_count;
                }else {
                    is_get = true;
                    res = max_count;
                    break;
                }
            }
        }
        max_index=max(res,max_index);
        return res;
    }
    std::map<int,FdInfo*> fds;
    unsigned long int used_count=0;  
    // 存储的最大值
    unsigned long int max_index = 0;
};

int main(int argc,char* argv[]){
    
    unsigned int T=0;
    unsigned int N=0;
    unsigned int i=0,j=0;
    cin>>T;
    while(i<T) {
        cin>>N;
        j=0;
        FileInfoSet fd_set;
        while(j<N) {
            string my_opeator;
            cin>>my_opeator;
            if(my_opeator=="open") {
                string file_name;
                cin>>file_name;
                cout<<fd_set.openFile(file_name)<<endl;
            }else if(my_opeator=="dup") {
                int fd=0;
                cin>>fd;
                cout<<fd_set.dup(fd)<<endl;
            }else if(my_opeator=="dup2") {
                int fd=0,new_fd=0;
                cin>>fd>>new_fd;
                fd_set.dup2(fd,new_fd);
            }else if (my_opeator=="close")
            {
                int fd=0;
                cin>>fd;
                fd_set.close(fd);
            }else if(my_opeator=="query"){
                int fd=0;
                cin>>fd;
                cout<<fd_set.query(fd)<<endl;
            }
            ++j;
        }

        ++i;
    }
    return 0;
}


/*
10
open output.txt
dup2 0 1000000
close 0
open output2.txt
dup2 0 100000
close 0
open 1.txt
dup 100000
query 1
query 0

*/