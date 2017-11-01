#include <iostream>
#include "volume_figure.h"
#include "cylinder.h"
#include "rectangular_parallelepiped.h"

using namespace std;

int main() {
    Cylinder cylinder(10.0, 3.3);

    RectangularParallelepiped rect_paral(3.0, 8.3, 1.0);

    cout << cylinder << endl;
    cout << rect_paral << endl;

    VolumeFigure* array_of_figures[2];
    array_of_figures[0] = &cylinder;
    array_of_figures[1] = &rect_paral;

    for (int i = 0; i < 2; ++i) {
        array_of_figures[i]->info();
        cout << "Volume = " << array_of_figures[i]->volume() << endl
             << "Area = " << array_of_figures[i]->area() << endl << endl;
    }

    return 0;
}

