#include <iostream>
using namespace std;
template <class T>
T findMax(T a, T b) {
return (a > b) ? a : b;
}
int main() {
cout << "Maximum integer: " << findMax(20, 10) << endl;
cout << "Maximum float: " << findMax(4.5, 8.2) << endl;
cout << "Maximum character: " << findMax('A', 'Z') << endl;
return 0;
}
