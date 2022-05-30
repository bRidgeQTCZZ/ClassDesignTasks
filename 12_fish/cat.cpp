#include <iostream>
using namespace std;
#include "cat.h"
#include "fish.h"

void Cat::CatchFish(Fish& afish)
{
	if (exp + afish.award() >= 0 && exp + afish.award() <= 500)
	{
		exp = exp + afish.award();
	}
	if (exp + afish.award() < 0)
	{
		exp = 0;
	}
	if (exp + afish.award() > 500)
	{
		level++;
		exp = 0;
	}
}