#ifndef FARM_H
#define FARM_H
#include "method.h"

class Data {
	/*略*/
};

class Farm {
public:
	static const int N = 20;
	float ForecastAmount(Method_A* m) {
		float amount = m->Func(history, N);
		/*略*/
		return amount;
	}
	float ForecastPrice(Method_B* m) {
		float price = m->Func(history, N);
		/*略*/
		return price;
	}
	float Income(Method_A* f1, Method_B* f2) {
		float result = ForecastAmount(f1) * ForecastPrice(f2);
		//进一步分析处理result，略
		return result;
	}
	void SetData();
private:
	Data history[N];
};

#endif // !FARM_H
