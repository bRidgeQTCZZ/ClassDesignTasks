#ifndef FARM_H
#define FARM_H
#include "method.h"

class Data {
	/*��*/
};

class Farm {
public:
	static const int N = 20;
	float ForecastAmount(Method_A* m) {
		float amount = m->Func(history, N);
		/*��*/
		return amount;
	}
	float ForecastPrice(Method_B* m) {
		float price = m->Func(history, N);
		/*��*/
		return price;
	}
	float Income(Method_A* f1, Method_B* f2) {
		float result = ForecastAmount(f1) * ForecastPrice(f2);
		//��һ����������result����
		return result;
	}
	void SetData();
private:
	Data history[N];
};

#endif // !FARM_H
