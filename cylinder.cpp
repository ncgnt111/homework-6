#include <iostream>
#include "cylinder.h"

using namespace std;

Cylinder::Cylinder(float r, float h) {
    this->r = r > 0 ? r : 0;
    this->h = h > 0 ? h : 0;
}

void Cylinder::set_r(float r) { this->r = r > 0 ? r : 0; }
void Cylinder::set_h(float h) { this->h = h > 0 ? h : 0; }

float Cylinder::get_r() const { return r; }
float Cylinder::get_h() const { return h; }

void Cylinder::info() const {
    cout << "Cylinder: "
         << "r = " << get_r() << ", " << "h = " << get_h() << endl;
}

float Cylinder::volume() const {
    return 3.14 * r * r * h;
}

float Cylinder::area() const {
    return 2 * 3.14 * r * r + 2 * 3.14 * r * h;
}

ostream &operator<<(ostream &output, const Cylinder &c) {
    c.info();
    return output;
}
