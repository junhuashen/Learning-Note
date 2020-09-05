#include <stdio.h>
#include <iostream>
#include <thread>
#include <future>
#include <functional>
#include <vector>
#include <atomic>
using namespace std;
atomic<unsigned long> sum;
thread_local unsigned long counter=0;
unsigned long Add(unsigned long count)
{
	for(unsigned long i=0;i<10000000;++i){
		sum.fetch_add(1, std::memory_order_relaxed);;
	}
	return count;
}
int main(int argc,char* argv[])
{
	std::packaged_task<unsigned long(unsigned long) > add_task1(Add),add_task2(Add),add_task3(Add);
	std::vector<std::future<unsigned long>> futrue_result; 
	futrue_result.push_back(add_task1.get_future());
	futrue_result.push_back(add_task2.get_future());
	futrue_result.push_back(add_task3.get_future());
	std::thread f1(std::move(add_task1),0);
	std::thread f2(std::move(add_task2),0);
	std::thread f3(std::move(add_task3),0);
	f1.join();
	f2.join();
	f3.join();
	// for(int i=0;i<3;++i){
	// 	sum+=futrue_result[i].get();
	// }
	printf("%ld\n",sum.load());
	return 0;
}