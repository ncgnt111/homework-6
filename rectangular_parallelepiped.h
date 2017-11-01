#ifndef RECTANGULAR_PARALLELEPIPED
#define RECTANGULAR_PARALLELEPIPED

#include <iostream>
#include "volume_figure.h"

using namespace std;

class RectangularParallelepiped : public VolumeFigure {
    friend ostream &operator<<(ostream &, const RectangularParallelepiped &);
public:
    RectangularParallelepiped (float a = 0.0, float b = 0.0, float c = 0.0);

    void set_a(float);
    void set_b(float);
    void set_c(float);

    float get_a() const;
    float get_b() const;
    float get_c() const;

    virtual void info() const;
    virtual float volume() const;
    virtual float area() const;
private:
    float a, b, c;
};

#endif // RECTANGULAR_PARALLELEPIPED

