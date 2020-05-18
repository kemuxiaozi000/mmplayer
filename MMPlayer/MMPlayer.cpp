// MMPlayer.cpp: 定义应用程序的入口点。
//

#include "MMPlayer.h"
#include <thread>
using namespace std;

void threadFunction(int threadIndex) {
	for (int i = 10; i < 1000; i++) {
		printf("Thread:%d, index:%d\n", threadIndex, i);
	}
}

int main()
{	

	std::thread t1(threadFunction, 1);
	std::thread t2(threadFunction, 2);
	t1.join(); //阻塞 
	t2.join();
;	//t.detach(); //分离
	//t.joinable();

	return 0;
}
