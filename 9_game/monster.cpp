#include <iostream>
using namespace std;
#include "monster.h"

void Monster::fight(Monster& other) {
	while (hitpoint > 0 && other.GetHitpoint() > 0)
	{
		attack(other);
		if (hitpoint <= 0)
			break;
		other.attack(*this);
		cout << Name() << "'s HP:" << GetHitpoint() << endl;
		cout << other.Name() << "'s HP:" << other.GetHitpoint() << endl << endl;
	}
}

void Cat::attack(Monster& other) {
	double hit = damage * 2 - other.GetDefense();
	if (hit < 1)
		hit = 1;
	other.GetHitpoint() -= hit;
	cout << Name() << " hit " << other.Name() << " " << hit << "point" << endl;
}

void Dog::attack(Monster& other) {
	double hit = (damage - other.GetDefense()) * 2;
	if (hit < 2)
		hit = 2;
	other.GetHitpoint() -= hit;
	cout << Name() << " hit " << other.Name() << " " << hit << "point" << endl;
}