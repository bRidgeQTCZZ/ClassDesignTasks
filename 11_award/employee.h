#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
public:
	virtual ~Employee() {};
	Employee(int salary) :salary(salary) {};
	virtual double Award(int base) = 0;
	int Salary() { return salary; }
private:
	int salary;
};

class Manager : public Employee
{
public:
	virtual ~Manager() {};
	Manager(int salary) :Employee(salary) {};
	virtual double Award(int base)
	{
		return (Salary() * 2 + base * 2);
	}
};

class Staff : public Employee
{
public:
	virtual ~Staff() {};
	Staff(int salary) :Employee(salary) {};
	virtual double Award(int base)
	{
		return (Salary() + base * 0.8);
	}
};

#endif // !EMPLOYEE_H
