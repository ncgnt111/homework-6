#ifndef VOLUME_FIGURE
#define VOLUME_FIGURE

class VolumeFigure {
public:
    virtual void info() const = 0;
    virtual float volume() const = 0;
    virtual float area() const = 0;
};

#endif // VOLUME_FIGURE

