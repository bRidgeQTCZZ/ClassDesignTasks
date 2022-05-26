#include <iostream>
using namespace std;
#include "box.h"
#include "role.h"

void Solider::openBox(Box& box) {
    box.open(*this);
}
void Magi::openBox(Box& box) {
    box.open(*this);
}