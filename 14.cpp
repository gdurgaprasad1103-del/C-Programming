#include <iostream>
using namespace std;
class Student {
protected:
int rollNo;
float marks;
public:
void getStudent() {
cout << "Enter roll number and marks: ";
cin >> rollNo >> marks;
}
};
class Sports {
protected:
float sportsMarks;
public:
void getSports() {
cout << "Enter sports marks: ";
cin >> sportsMarks;
}
};
class Result : public Student, public Sports {
public:
void display() {
cout << "Roll Number: " << rollNo << endl;
cout << "Academic Marks: " << marks << endl;
cout << "Sports Marks: " << sportsMarks << endl;
cout << "Total: " << marks + sportsMarks << endl;
}
};
int main() {
Result r;
r.getStudent();
r.getSports();
r.display();
return 0;
}
