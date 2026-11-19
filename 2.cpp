#include <iostream>
#include <string>
using namespace std;
class Payroll;
class Employee {
private:
int empId;
string name;
double salary;
public:
Employee() {
empId = 2026;
name = "siva";
salary = 45000;
}
friend class Payroll;
};
class Payroll {
public:
void display(Employee e) {
cout << "Employee ID: " << e.empId << endl;
cout << "Employee Name: " << e.name << endl;
cout << "Employee Salary: " << e.salary << endl;
}
};
int main() {
Employee e1;
Payroll p1;
p1.display(e1);
return 0;
}
