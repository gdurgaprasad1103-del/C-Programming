#include <iostream>
#include <string>
using namespace std;
class Customer {
public:
int customerid;
string name;
int units;
Customer(int id, string n, int u) {
customerid = id;
name = n;
units = u;
}
};
Customer higherUnits(Customer a, Customer b) {
if (a.units >= b.units)
return a;
return b;
}
int main() {
Customer c1(1001, "siva", 1200);
Customer c2(1002, "Sita", 330);
Customer result = higherUnits(c1, c2);
cout << "Customer ID: " << result.customerid << endl;
cout << "Customer Name: " << result.name << endl;
cout << "Units Consumed: " << result.units << endl;
return 0;
}
