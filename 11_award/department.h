#ifndef DEPARTMENT_H
#define DEPARTMENT_H
#include "employee.h"

const int N = 3;
class Department {
public:
	Department(long totalProfit) :profit(totalProfit) {
		for (int i = 0; i < N; i++)
			emps[i] = 0;
	}
	void SetEmployee(Employee* pemp, int index) { emps[index] = pemp; };
	void ShowEachAward() {
		for (int i = 0; i < N; i++)
			cout << emps[i]->Award(profit * 0.3 / N) << endl;
	}
private:
	Employee* emps[N];
	long profit;
};

#endif // !DEPARTMENT_H
