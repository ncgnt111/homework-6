#include <iostream>
#include "rectangular_parallelepiped.h"

using namespace std;

RectangularParallelepiped::RectangularParallelepiped(float a, float b, float c)
    : a(0),
      b(0),
      c(0) {
    this->a = a > 0 ? a : 0;
    this->b = b > 0 ? b : 0;
    this->c = c > 0 ? c : 0;
}

void RectangularParallelepiped::set_a(float a) { this->a = a > 0 ? a : 0; }
void RectangularParallelepiped::set_b(float b) { this->b = b > 0 ? b : 0; }
void RectangularParallelepiped::set_c(float c) { this->c = c > 0 ? c : 0; }

float RectangularParallelepiped::get_a() const { return a; }
float RectangularParallelepiped::get_b() const { return b; }
float RectangularParallelepiped::get_c() const { return c; }

void RectangularParallelepiped::info() const {
    cout << "Rectangular parallelepiped: "
         << "a = " << get_a() << ", " << "b = " << get_b() << ", "
         << "c = " << get_c() << endl;
}

float RectangularParallelepiped::volume() const {
    return a * b * c;
}

float RectangularParallelepiped::area() const {
    return 2 * (a * b + b * c + a * c);
}

ostream &operator<<(ostream &output, const RectangularParallelepiped &rp) {
    rp.info();
    return output;
}

