/*
从src中拷贝数据到dest中
返回目标指针
*/
#include <string>
#include <iostream>
#include <stdint.h>

void* memmove(void* dest,void* src,size_t n) 
{
    if(dest==src) { return dest;}
    char* char_dest = (char*)dest;
    char* char_src= (char*)src;
    char* src_end = char_src+n;
    // 判断重叠
    if(src_end>char_dest) {
      for(int i=n-1;i>=0;--i) {
          char_dest[i]=char_src[i];
      }
    }else {
        for(int i=0;i<n;++i) {
            char_dest[i]=char_src[i];
        }
    }
    return (void*)dest;
}

