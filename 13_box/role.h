#ifndef ROLE_H
#define ROLE_H

class Box;
class Role {
public:
    virtual ~Role() {}
    Role() {
        money = 0;
        hp = 100;
    }
    virtual void openBox(Box& box) = 0;
    virtual double& Money() { return money; }
    virtual double& HP() { return hp; }
protected:
    double money;
    double hp;
};
class Solider :public Role {
public:
    virtual ~Solider() {};
    virtual void openBox(Box& box);
};
class Magi :public Role {
public:
    virtual ~Magi() {};
    virtual void openBox(Box& box);
};

#endif // !ROLE_H
