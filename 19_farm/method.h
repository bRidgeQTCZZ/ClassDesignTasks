#ifndef METHOD_H
#define METHOD_H

class Data;

class Method_A {
public:
	virtual ~Method_A();
	virtual float Func(Data data[], int len) { /*��*/ }
};

class Method_A01 : Method_A {
public:
	virtual ~Method_A01();
	//���������ķ���1
	virtual float Func(Data data[], int len) { /*��*/ }
};

class Method_A02 : Method_A {
public:
	virtual ~Method_A02();
	//���������ķ���2
	virtual float Func(Data data[], int len) { /*��*/ }
};

class Method_B {
public:
	virtual ~Method_B();
	virtual float Func(Data data[], int len) { /*��*/ }
};

class Method_B01 : Method_B {
public:
	virtual ~Method_B01();
	//����۸�ķ���1
	virtual float Func(Data data[], int len) { /*��*/ }
};

#endif // !METHOD_H
