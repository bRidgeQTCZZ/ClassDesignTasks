#ifndef BANK_H
#define BANK_H

class Bank {
	friend class B;
public:
	int Evaluate(Enterprise& ent) {
		int a1 = ent.Func1();
		int a2 = ent.Func2();
		int a3 = ent.Func3();
		int a4 = ent.Func4();
		//a5~a8ÂÔ

		b = new B();
	}
	int Bankfunc() { return 114514; }
private:
	int prop1;
	int prop2;
	B* b;
};

class Enterprise {
public:
	int Func1() { return 1; }
	int Func2() { return 2; }
	int Func3() { return 3; }
	int Func4() { return 4; }
	//Func5()µ½Func8()ÂÔ
};

class B {
public:

};

#endif // !BANK_H
