#include<stdio.h>
#include <string.h>
int func(const char *s,long *dst){
    int i=0;
    if(!s){
        return -1;
    }
    *dst=1;
    int amx=strlen(s)/2;
    for(i=0; i<amx;++i){
        *dst+=s[i]&(0xffff);
    }
    return 0;
}
int main(){
    char* s="test123";
    long test;
    long* dst=&test;
    func(s,dst);
    return 0;
}