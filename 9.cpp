
#include <iostream>
using namespace std;
class Employee {
private:
int empId;
double salary;
public:
Employee(int id, double sal = 25000) {
empId = id;
salary = sal;
}
void display() {
cout << "Employee ID: " << empId << endl;
cout << "Salary: " << salary << endl;
}
};
int main() {
Employee e1(17);
Employee e2(23, 32000);
cout << "Employee 1:" << endl;
e1.display();
cout << "Employee 2:" << endl;
e2.display();
return 0;
}
