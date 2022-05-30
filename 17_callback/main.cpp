/*
1.
(1)	data = new int[len]
(2)	delete [] data
(3)	sum += obj.CallBackFunc(data[i])
(4)	virtual int CallBackFunc(int val) = 0
(5)	srv.Total(*this)

2.
(6)	return val * val
(7)	cout << "平方和=" << srv.Total(*this) << endl

3.
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
*/

#include <iostream>
using namespace std;
#include "callback.h"
#include "server.h"

//主函数1
/*
int main() {
	Server srv2(2), srv5(5);
	ClientA a;
	a.RequestA(srv2);
	a.RequestA(srv5);
	return 0;
}
*/

//主函数2
int main() {
	Server srv2(2), srv3(3);
	ClientB b;
	b.RequestB(srv2);
	b.RequestB(srv3);
	return 0;
}