#ifndef CAT_H
#define CAT_H

class Fish;
class Cat
{
public:
	virtual ~Cat() {};
	Cat(int exp = 0, int level = 0) :exp(exp), level(level) {};
	void CatchFish(Fish& afish);
	void show()
	{
		cout << "This cat's exp is: " << exp << " and level is: " << level << endl;
	}
private:
	int level;
	int exp;
};

#endif // !CAT_H
