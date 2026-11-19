#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
int empId;
string name;
double salary;
public:
void getData() {
cout << "Enter employee ID: ";
cin >> empId;
cin.ignore();
cout << "Enter name: ";
getline(cin, name);
cout << "Enter salary: ";
cin >> salary;
}
void validate() {
if (salary < 0)
throw -1;
if (salary == 0)
throw 'Z';
cout << "Employee ID: " << empId << endl;
cout << "Name: " << name << endl;
cout << "Salary: " << salary << endl;
}
};
int main() {
Employee e;
try {
e.getData();
e.validate();
} catch (int) {
cout << "Exception: Salary cannot be negative." << endl;
} catch (char) {
cout << "Exception: Salary cannot be zero." << endl;
}
return 0;
}
