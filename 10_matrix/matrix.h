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
	M(IMatrix* m[][2]);
	virtual ~M() {}
	virtual void Turn(IMatrix* matrix);
	virtual void Transform(IMatrix* matrix);
protected:
	int mNums[2][2] = { 0 };
	IMatrix* mMatrix[2][2] = { nullptr };
};

#endif // !MATRIX_H
