#include <iostream>
#include <string>
using namespace std;
class Person {
protected:
string name;
public:
void getName() {
cout << "Enter name: ";
getline(cin, name);
}
void displayName() {
cout << "Name: " << name << endl;
}
};
class Student : virtual public Person {
protected:
int rollNo;
};
class Employee : virtual public Person {
protected:
int empId;
};
class TeachingAssistant : public Student, public Employee {
public:
void getDetails() {
getName();
cout << "Enter roll number and employee ID: ";
cin >> rollNo >> empId;
}
void display() {
displayName();
cout << "Roll Number: " << rollNo << endl;
cout << "Employee ID: " << empId << endl;
}
};
int main() {
TeachingAssistant t;
t.getDetails();
t.display();
return 0;
}
