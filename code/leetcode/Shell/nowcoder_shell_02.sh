#!/bin/bash

# 经常查看日志的时候，会从文件的末尾往前查看，于是请你写一个 bash脚本以输出一个文本文件 nowcoder.txt中的最后5行
# 示例:
# 假设 nowcoder.txt 内容如下：

# #include<iostream>
# using namespace std;
# int main()
# {
# int a = 10;
# int b = 100;
# cout << "a + b:" << a + b << endl;
# return 0;
# }

# 主要思路：使用tail 进行尾部统计

tails -n 5 nowcoder.txt

# 拓展:
# 1. 获取文件行数 cat nowcoder.txt |  wc -l 
# 2. 获取头部5行 head -n 5 nowcoder.txt
# 3. 获取尾部5行 tail -n 5 nowcoder.txt
# 4. 获取中间第5行 sed -n 5p  nowcoder.txt
# 5. 获取中间5-8行 sed -n 5,8p nowcoder.txt
# 6. 获取中间第2行5列  cat nowcoder.txt | awk '{print $5}' | sed -n '2p'
# 参考链接:
# - [shell 获取结果中的第n列，第n行 行列](https://blog.csdn.net/whatday/article/details/88824585)
# - [linux中怎么用shell显示文件某一行或几行内容](https://blog.csdn.net/wuzhiwuweisun/article/details/79136308?utm_medium=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.control&depth_1-utm_source=distribute.pc_relevant_t0.none-task-blog-BlogCommendFromMachineLearnPai2-1.control)