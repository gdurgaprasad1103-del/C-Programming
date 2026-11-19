#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;
class Student {
private:
int rollNo;
string name;
float marks;
public:
void getData() {
cout << "Enter roll number: ";
cin >> rollNo;
cin.ignore();
cout << "Enter name: ";
getline(cin, name);
cout << "Enter marks: ";
cin >> marks;
}
void validateAndDisplay() {
if (marks < 0 || marks > 100)
throw out_of_range("Marks must be between 0 and 100.");
cout << "Roll Number: " << rollNo << endl;
cout << "Name: " << name << endl;
cout << "Marks: " << marks << endl;
}
};
int main() {
Student s;
try {
s.getData();
s.validateAndDisplay();
} catch (const exception& e) {
cout << "Exception: " << e.what() << endl;
}
return 0;
}
