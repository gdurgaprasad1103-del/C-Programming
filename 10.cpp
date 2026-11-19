#include <iostream>
#include <string>
using namespace std;
class Student {
private:
string name;
int rollNo;
string course;
public:
void getdata(string n, int r, string c = "MCA") {
name = n;
rollNo = r;
course = c;
}
void display() {
cout << "Name: " << name << endl;
cout << "Roll Number: " << rollNo << endl;
cout << "Course: " << course << endl;
}
};
int main() {
Student s1;
s1.getdata("siva", 17);
s1.display();
return 0;
}
