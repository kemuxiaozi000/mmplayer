# include "MMThread.h"
# include <thread>

int MMTHread::Start() {
	std::thread t(run, this); // 加this表明是当前类对象的run方法
	t.detach();
	return 0;
}