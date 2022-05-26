#include <iostream>
using namespace std;
#include "box.h"
#include "role.h"

void MoneyBox::open(Role& role) {
    role.Money() += money;
    money = 0;
    return;
}

void PoiBox::open(Solider& role) {
    role.Money() += role.Money() * 0.2;
    role.HP() -= role.HP() * 0.1;
}

void PoiBox::open(Magi& role) {
    role.Money() += role.Money() * 0.4;
    role.HP() -= role.HP() * 0.3;
}