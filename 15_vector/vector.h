#ifndef VECTOR_H
#define VECTOR_H
#include <cmath>

const int N = 3;

class Vector {
public:
	Vector(double values[N]) {
		for (int i = 0; i < N; ++i)
			items[i] = values[i];
	}
	double Item(int index)const {
		return items[index];
	}
	virtual Vector& Standard() = 0;
	virtual double NormalValue() = 0;
	virtual ~Vector() {};
protected:
	double items[N];
};

class Vector1 : public Vector {
public:
	virtual  ~Vector1() {};
	virtual double NormalValue() {
		double sum = 0.0;
		for (int i = 0; i < N; ++i)
			sum += fabs(items[i]);
		return sum / N;
	}
	virtual Vector& Standard() {
		double nv = NormalValue();
		for (int i = 0; i < N; ++i)
			items[i] /= nv;
		return *this;
	}
};

class Vector2 : public Vector {
public:
	virtual  ~Vector2() {};
	virtual double NormalValue() {
		double sum = 0.0;
		for (int i = 0; i < N; ++i)
			sum += pow(fabs(items[i]), 2);
		return pow(sum / N, 1.0 / 2.0);
	}
	virtual Vector& Standard() {
		double nv = NormalValue();
		for (int i = 0; i < N; ++i)
			items[i] /= nv;
		return *this;
	}
};

class VectorInf : public Vector {
public:
	virtual  ~VectorInf() {};
	virtual double NormalValue() {
		double result = 0.0;
		for (int i = 0; i < N; ++i)
			result = fmax(result, fabs(items[i]));
		return result;
	}
	virtual Vector& Standard() {
		double nv = NormalValue();
		for (int i = 0; i < N; ++i)
			items[i] /= nv;
		return *this;
	}
};

#endif // !VECTOR_H
