#include <iostream>
#include <cmath>

// Defining PI if not already defined
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Figure {
public:
    virtual double area() const = 0;
    virtual ~Figure() {}
};

class Rectangle : public Figure {
private:
    double width;
    double height;
public:
    Rectangle(double w, double h) : width(w), height(h) {}
    virtual double area() const override {
        return width * height;
    }
};

class Circle : public Figure {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}
    virtual double area() const override {
        return M_PI * radius * radius;
    }
};

class RightTriangle : public Figure {
private:
    double base;
    double height;
public:
    RightTriangle(double b, double h) : base(b), height(h) {}
    virtual double area() const override {
        return 0.5 * base * height;
    }
};

class Trapezoid : public Figure {
private:
    double base1;
    double base2;
    double height;
public:
    Trapezoid(double b1, double b2, double h) : base1(b1), base2(b2), height(h) {}
    virtual double area() const override {
        return 0.5 * (base1 + base2) * height;
    }
};

int main() {
    Figure* figures[4];

    figures[0] = new Rectangle(3, 4);
    figures[1] = new Circle(5);
    figures[2] = new RightTriangle(6, 8);
    figures[3] = new Trapezoid(2, 4, 5);

    for (int i = 0; i < 4; ++i) {
        std::cout << "Area of figure " << i + 1 << ": " << figures[i]->area() << std::endl;
    }

    for (int i = 0; i < 4; ++i) {
        delete figures[i];
    }

    system("pause");
    return 0;
}
