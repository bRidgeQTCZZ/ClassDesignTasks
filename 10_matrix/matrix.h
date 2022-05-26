#ifndef MATRIX_H
#define MATRIX_H

class IMatrix {
public:
	virtual ~IMatrix() {}
	virtual void Turn() = 0;
	virtual void Transform() = 0;
};

class M : public IMatrix {
public:
	M(int n[][2]);
	M(IMatrix* m);
	virtual ~M() {}
	virtual void Turn();
	virtual void Transform();
protected:
	int mNums[2][2] = { 0 };
	IMatrix* m;
};

#endif // !MATRIX_H
