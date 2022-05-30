#ifndef CALLBACK_H
#define CALLBACK_H
#include <iostream>
#include "server.h"

class Server;
class CallBackObject {
public:
	virtual ~CallBackObject() {}
	virtual int CallBackFunc(int val) = 0;
};

class ClientA : public CallBackObject {
public:
	virtual ~ClientA() {}
	virtual int CallBackFunc(int val) {
		return val;
	}
	void RequestA(Server& srv) {
		std::cout << srv.Total(*this) << std::endl;
	}
};

//2.
/*
class ClientB : public CallBackObject {
public:
	virtual ~ClientB();
	virtual int CallBackFunc(int val) {
		return val * val;
	}
	void RequestB(Server& srv) {
		std::cout << "平方和=" << srv.Total(*this) << std::endl;
	}
};
*/

//3.
class ClientB : public CallBackObject {
public:
	virtual ~ClientB() {}
	virtual int CallBackFunc(int val) {
		std::cout << val << " ";
		return val * val * val;
	}
	void RequestB(Server& srv) {
		std::cout << "的立方和=" << srv.Total(*this) << std::endl;
	}
};

#endif // !CALLBACK_H
