#ifndef MISSILE_H
#define MISSILE_H
#include <iostream>
using namespace std;

class Missile {
public:
	virtual ~Missile() {}
	virtual void GetLaunchMode() {
		cout << LM[lm_idx] << endl;
	}
	virtual void GetFlyBehavior() {
		cout << FB[fb_idx] << endl;
	}
protected:
	static string LM[3];
	static string FB[2];
	static enum LMIndex { SEA = 0, AIR, LAND };
	static enum FBIndex { SUBSONIC = 0, SUPERSONIC = 0 };
	LMIndex lm_idx;
	FBIndex fb_idx;
};

string Missile::LM[3] = {
	"SeaLaunch",
	"AirLaunch",
	"LandLaunch"
};

string Missile::FB[2] = {
	"SubSonicFly",
	"SuperSonicFly"
};

class ChinaA : public Missile {
public:
	virtual ~ChinaA() {}
	ChinaA() {
		lm_idx = SEA;
		fb_idx = SUBSONIC;
	}	
};

class RedBirdB : public Missile {
public:
	virtual ~RedBirdB() {}
	RedBirdB() {
		lm_idx = AIR;
		fb_idx = SUBSONIC;
	}
};

class SpringC : public Missile {
public:
	virtual ~SpringC() {}
	SpringC() {
		lm_idx = LAND;
		fb_idx = SUPERSONIC;
	}
};

class ExpeditionD : public Missile {
public:
	virtual ~ExpeditionD() {}
	ExpeditionD() {
		lm_idx = SEA;
		fb_idx = SUPERSONIC;
	}
};

#endif // !MISSILE_H
