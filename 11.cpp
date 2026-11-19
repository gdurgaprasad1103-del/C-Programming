#include <iostream>
using namespace std;
class Compute {
public:
int multiply(int a, int b) {
return a * b;
}
double multiply(int a, double b) {
return a * b;
}
double multiply(double a, double b) {
return a * b;
}
};
int main() {
Compute c;
cout << "Integer multiplication: " << c.multiply(5, 25) << endl;
cout << "Integer and float multiplication: " << c.multiply(5, 4.5) << endl;
cout << "Float multiplication: " << c.multiply(12.5, 7.5) << endl;
return 0;
}
