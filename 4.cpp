#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
int empid;
string name;
static int count;
public:
Employee(int id, string n) {
empid = id;
name = n;
count++;
}
static void showCount() {
cout << "Total employees created: " << count << endl;
}
};
int Employee::count = 0;
int main() {
Employee e1(23, "Ganesh");
Employee e2(16, "Shiva");
Employee e3(21, "Himesh");
Employee e4(20, "Revanth");
Employee::showCount();
return 0;
}
