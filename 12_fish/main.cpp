#include <iostream>
using namespace std;
#include "cat.h"
#include "fish.h"

int main() {
	Cat acat(100, 2);
	Turtle aturtle;
	acat.show();
	acat.CatchFish(aturtle);
	acat.show();
}