#ifndef METHOD_H
#define METHOD_H

class Data;

class Method_A {
public:
	virtual ~Method_A();
	virtual float Func(Data data[], int len) { /*略*/ }
};

class Method_A01 : Method_A {
public:
	virtual ~Method_A01();
	//测量产量的方法1
	virtual float Func(Data data[], int len) { /*略*/ }
};

class Method_A02 : Method_A {
public:
	virtual ~Method_A02();
	//测量产量的方法2
	virtual float Func(Data data[], int len) { /*略*/ }
};

class Method_B {
public:
	virtual ~Method_B();
	virtual float Func(Data data[], int len) { /*略*/ }
};

class Method_B01 : Method_B {
public:
	virtual ~Method_B01();
	//测算价格的方法1
	virtual float Func(Data data[], int len) { /*略*/ }
};

#endif // !METHOD_H
