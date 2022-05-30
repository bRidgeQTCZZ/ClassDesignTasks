#include <iostream>
using namespace std;
#include "callback.h"
#include "server.h"

int Server::Total(CallBackObject& obj) {
	int sum = 0;
	for (int i = 0; i < len; ++i)
		sum += obj.CallBackFunc(data[i]);
	return sum;
}