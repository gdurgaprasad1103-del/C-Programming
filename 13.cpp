#include <iostream>
using namespace std;
class Complex {
private:
int real;
int imag;
public:
Complex(int r = 0, int i = 0) {
real = r;
imag = i;
}
Complex operator+(const Complex& other) {
return Complex(real + other.real, imag + other.imag);
}
void display() {
cout << real;
if (imag >= 0)
cout << " + " << imag << "i" << endl;
else
cout << " - " << -imag << "i" << endl;
}
};
int main() {
Complex c1(3, 4), c2(2, 5);
Complex sum = c1 + c2;
cout << "Sum: ";
sum.display();
return 0;
}
