#pragma once

class MMThread
{
public:
	virtual void run() = 0; // 纯虚方法
	int Start();
};