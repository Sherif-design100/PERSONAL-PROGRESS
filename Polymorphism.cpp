#include <iostream>
using namespace std;


class Shape {
public:
    virtual double area() = 0;
};


class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() override {
        return length * width;
    }
};


class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() override {
        return 3.14159 * radius * radius;
    }
};

int main() {
    double length, width, radius;


    cout << "Enter rectangle length: ";
    cin >> length;

    cout << "Enter rectangle width: ";
    cin >> width;


    cout << "Enter circle radius: ";
    cin >> radius;

    Rectangle rect(length, width);
    Circle circ(radius);

    Shape *shape;

    shape = &rect;
    cout << "\nArea of Rectangle = " << shape->area() << endl;

    shape = &circ;
    cout << "Area of Circle = " << shape->area() << endl;

    return 0;
}
