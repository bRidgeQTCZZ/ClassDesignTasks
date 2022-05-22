#ifndef MONSTER_H
#define MONSTER_H

class Monster {
public:
	Monster(double hp, double dam, double def) : hitpoint(hp), damage(dam), defense(def) {}
	virtual ~Monster() {}
	virtual string Name() = 0;
	void fight(Monster& other);
	double& GetHitpoint() { return hitpoint; }
	double& GetDamage() { return damage; }
	double& GetDefense() { return defense; }
private:
	virtual void attack(Monster& other) = 0;
protected:
	double hitpoint = 0; //生命值
	double damage = 0; //攻击力值
	double defense = 0; //防御力值
};

class Cat : public Monster {
public:
	Cat(double hp, double dam, double def) : Monster(hp, dam, def) {}
	string Name() { return "Cat"; }
private:
	void attack(Monster& other);
};

class Dog : public Monster {
public:
	Dog(double hp, double dam, double def) : Monster(hp, dam, def) {}
	string Name() { return "Dog"; }
private:
	void attack(Monster& other);
};

#endif // !MONSTER_H
