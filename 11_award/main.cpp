#include <iostream>
using namespace std;
#include "department.h"
#include "employee.h"

int main() {
	Department depart(300000);
	Manager manager(8000);
	Staff staff1(5000), staff2(4000);
	depart.SetEmployee(&manager, 0);
	depart.SetEmployee(&staff1, 1);
	depart.SetEmployee(&staff2, 2);
	depart.ShowEachAward();
	return 0;
}