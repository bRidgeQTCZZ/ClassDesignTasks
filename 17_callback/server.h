#ifndef SERVER_H
#define SERVER_H

class CallBackObject;
class Server {
public:
	Server(int size) : len(size) {
		data = new int[len];
		for (int i = 0; i < len; ++i)
			data[i] = i + 1;
	}
	~Server() { delete[] data; }
	int Total(CallBackObject& obj);
private:
	int len;
	int* data;
};

#endif // !SERVER_H
