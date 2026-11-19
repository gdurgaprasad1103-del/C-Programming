#include <iostream>
#include <string>
using namespace std;
class Account {
private:
string holderName;
long accountNumber;
double minBalance;
public:
Account(string name, long number, double balance) {
holderName = name;
accountNumber = number;
minBalance = balance;
}
void display() {
cout << "Account Holder: " << holderName << endl;
cout << "Account Number: " << accountNumber << endl;
cout << "Minimum Balance: " << minBalance << endl;
}
};
int main() {
Account a("siva", 123456, 1000);
a.display();
return 0;
}
