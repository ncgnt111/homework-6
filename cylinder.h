#ifndef CYLINDER
#define CYLINDER

#include <iostream>
#include "volume_figure.h"

using namespace std;

class Cylinder : public VolumeFigure {
    friend ostream &operator<<(ostream &, const Cylinder &);
public:
    Cylinder (float r = 0.0, float h = 0.0);

    void set_r(float);
    void set_h(float);

    float get_r() const;
    float get_h() const;

    virtual void info() const;
    virtual float volume() const;
    virtual float area() const;
private:
    float r, h;
};

#endif // CYLINDR1

