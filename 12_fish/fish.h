#ifndef FISH_H
#define FISH_H

class Fish {
public:
	virtual ~Fish() {}
	Fish() {}
	Fish(int weigh) : weigh(weigh) {}
	virtual int award() = 0;
	int Weigh() { return weigh; }
private:
	int weigh;
};
class Octopus : public Fish {
public:
	virtual ~Octopus() {}
	Octopus(int weigh) : Fish(weigh) {}
	virtual int award() { return Weigh() * 2; }
};
class Whale : public Fish {
public:
	virtual ~Whale() {}
	Whale() {}
	virtual int award() { return 200; }
};
class Turtle : public Fish {
public:
	virtual ~Turtle() {}
	Turtle() {}
	virtual int award() { return 500; }
};
class Shark :public Fish {
public:
	virtual ~Shark() {}
	Shark(int weigh) :Fish(weigh) {}
	virtual int award() { return -Weigh() * 5; }
};

#endif // !FISH_H
