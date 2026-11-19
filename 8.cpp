#include <iostream>
#include <string>
using namespace std;
class Vehicle {
private:
string brand;
int year;
public:
Vehicle(string b, int y) {
brand = b;
year = y;
}
Vehicle(const Vehicle& v) {
brand = v.brand;
year = v.year;
}
void display() {
cout << "Brand: " << brand << endl;
cout << "Year: " << year << endl;
}
};
int main() {
Vehicle v1("Honda", 2024);
Vehicle v2(v1);
cout << "Original vehicle:" << endl;
v1.display();
cout << "Copied vehicle:" << endl;
v2.display();
return 0;
}
