#ifndef BOX_H
#define	BOX_H

class Role;
class Solider;
class Magi;
class Box {
public:
    virtual ~Box() {};
    virtual void open(Role& role) = 0;
};
class MoneyBox :public Box {
private:
    double money;
public:
    virtual ~MoneyBox() {};
    MoneyBox() {
        money = 100;
    }
    virtual void open(Role&);
};
class PoiBox :public Box
{
    virtual void open(Solider& role);
    virtual void open(Magi& role);
};

#endif // !BOX_H
