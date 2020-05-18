# include "MMThread.h"
# include <thread>

int MMThread::Start() {
	std::thread t(&MMThread::run, this); // run 是成员函数，要加this。加this表明是当前类对象的run方法
	t.detach();
	return 0;
}