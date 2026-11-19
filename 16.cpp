#include <iostream>
#include <string>
using namespace std;
class Vehicle {
protected:
int vehicleNo;
string brand, model;
public:
void getVehicleData() {
cout << "Enter vehicle number: ";
cin >> vehicleNo;
cin.ignore();
cout << "Enter brand: ";
getline(cin, brand);
cout << "Enter model: ";
getline(cin, model);
}
void displayVehicleData() {
cout << "Vehicle Number: " << vehicleNo << endl;
cout << "Brand: " << brand << endl;
cout << "Model: " << model << endl;
}
};
class Car : public Vehicle {
private:
int seatingCapacity;
public:
void getCarData() {
getVehicleData();
cout << "Enter seating capacity: ";
cin >> seatingCapacity;
}
void displayCarData() {
displayVehicleData();
cout << "Seating Capacity: " << seatingCapacity << endl;
}
};
class Bike : public Vehicle {
private:
int engineCapacity;
public:
void getBikeData() {
getVehicleData();
cout << "Enter engine capacity (cc): ";
cin >> engineCapacity;
}
void displayBikeData() {
displayVehicleData();
cout << "Engine Capacity: " << engineCapacity << " cc" << endl;
}
};
int main() {
Car c;
cout << "Enter car details:" << endl;
c.getCarData();
cout << "\nCar details:" << endl;
c.displayCarData();
Bike b;
cout << "\nEnter bike details:" << endl;
b.getBikeData();
cout << "\nBike details:" << endl;
b.displayBikeData();
return 0;
}