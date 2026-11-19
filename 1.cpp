#include <iostream>
#include <string>
using namespace std;
class Patient {
private:
int pid;
string pname;
public:
Patient() {
pid = 2026;
pname = "siva";
}
friend void showPatient(Patient p);
};
void showPatient(Patient p) {
cout << "Patient id: " << p.pid << endl;
cout << "Patient name: " << p.pname << endl;
}
int main() {
Patient p1;
showPatient(p1);
return 0;
}
