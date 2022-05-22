#include <iostream>
using namespace std;
#include "monster.h"

int main() {
	double catHP, catDam, catDef;
	double dogHP, dogDam, dogDef;
	cin >> catHP >> catDam >> catDef;
	cin >> dogHP >> dogDam >> dogDef;
	Cat cat(catHP, catDam, catDef);
	Dog dog(dogHP, dogDam, dogDef);
	cat.fight(dog);
	//dog.fight(cat);
	return 0;
}