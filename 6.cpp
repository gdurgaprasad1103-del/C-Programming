#include <iostream>
using namespace std;
class Book {
private:
int book_ID;
double cost;
public:
Book() {
book_ID = 2026;
cost = 450;
}
void display() {
cout << "Book ID: " << book_ID << endl;
cout << "Cost: " << cost << endl;
}
};
int main() {
Book b;
b.display();
return 0;
}
