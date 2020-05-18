// MMPlayer.cpp: 定义应用程序的入口点。
//

#include "MMPlayer.h"
#include <thread>
#include <chrono>
#include "MMThread/MMThread.h"
using namespace std;

void threadFunction(int threadIndex) {
	for (int i = 10; i < 1000; i++) {
		printf("Thread:%d, index:%d\n", threadIndex, i);
	}
}

//int main()
//{	
//
//	std::thread t1(threadFunction, 1);
//	std::thread t2(threadFunction, 2);
//	t1.join(); //阻塞 
//	t2.join();
//;	//t.detach(); //分离
//	//t.joinable();
//	
//	return 0;
//}

class MyMMThread : public MMThread
{
private:
	int a = 0;
public:
	MyMMThread(int _a) {
		a = _a;
	}
	virtual void run()
	{
		printf("MyMMThread %d\n", a);
	}
};

int main() {
	MyMMThread t(10);
	t.Start();
	std::this_thread::sleep_for(std::chrono::seconds(2));
	return 0;
}