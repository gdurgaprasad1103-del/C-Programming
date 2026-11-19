#include <iostream>
#include <string>
using namespace std;
class Product {
protected:
int productid;
string name;
public:
void getProduct() {
cout << "Enter product ID: ";
cin >> productid;
cin.ignore();
cout << "Enter product name: ";
getline(cin, name);
}
};
class Electronics : public Product {
protected:
string brand;
int warranty;
public:
void getElectronics() {
getProduct();
cout << "Enter brand: ";
getline(cin, brand);
cout << "Enter warranty in years: ";
cin >> warranty;
}
};
class MobilePhone : public Electronics {
private:
int RAM;
double cost;
public:
void getMobile() {
getElectronics();
cout << "Enter RAM in GB and cost: ";
cin >> RAM >> cost;
}
void display() {
cout << "Product ID: " << productid << endl;
cout << "Product Name: " << name << endl;
cout << "Brand: " << brand << endl;
cout << "Warranty: " << warranty << " years" << endl;
cout << "RAM: " << RAM << " GB" << endl;
cout << "Cost: " << cost << endl;
}
};
int main() {
MobilePhone m;
m.getMobile();
m.display();
return 0;
}
