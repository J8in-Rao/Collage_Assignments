#include <iostream>
using namespace std;

class Shape {
protected:
    int width, height;

public:
    Shape(int w, int h) : width(w), height(h) {}

    virtual void display() {
        cout << "Shape : width = " << width << ", Height = " << height << endl;
    }
};

class Color {
protected:
    string color;

public:
    Color(string c) : color(c) {}


    virtual void display() {
        cout << "Color: " << color << endl;
    }
};

class ColoredShape : public Shape, public Color {
public:
    ColoredShape(int w, int h, string c) : Shape(w, h), Color(c) {}

    void display() override {
        Shape::display();
        Color::display();
    }
};

int main() {
     ColoredShape coloredShape(10, 50, "Red");

    coloredShape.display();

    return 0;
}
