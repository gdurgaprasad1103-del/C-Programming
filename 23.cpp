#include <iostream>
using namespace std;
template <class T>
class Calculator {
private:
T a, b;
public:
Calculator(T x, T y) {
a = x;
b = y;
}
void display() {
cout << "Addition: " << a + b << endl;
cout << "Subtraction: " << a - b << endl;
cout << "Multiplication: " << a * b << endl;
if (b != 0)
cout << "Division: " << static_cast<double>(a) / b << endl;
else
cout << "Division: Not possible (division by zero)" << endl;
}
};
int main() {
cout << "Integer calculator:" << endl;
Calculator<int> c1(20, 5);
c1.display();
cout << "\nFloating-point calculator:" << endl;
Calculator<double> c2(7.5, 2.5);
c2.display();
return 0;
}
