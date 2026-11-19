#include <iostream>
using namespace std;
class Shape {
public:
double dimension;
Shape(double d) {
dimension = d;
}
virtual double calculateArea() {
return 0;
}
virtual ~Shape() {}
};
class Circle : public Shape {
public:
Circle(double radius) : Shape(radius) {}
double calculateArea() override {
return 3.14159 * dimension * dimension;
}
};
class Square : public Shape {
public:
Square(double side) : Shape(side) {}
double calculateArea() override {
return dimension * dimension;
}
};
int main() {
Circle c(12);
Square s(8);
Shape* ptr;
ptr = &c;
cout << "Circle area: " << ptr->calculateArea() << endl;
ptr = &s;
cout << "Square area: " << ptr->calculateArea() << endl;
return 0;
}
