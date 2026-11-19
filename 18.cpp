#include <iostream>
#include <string>
using namespace std;
class Library {
protected:
int bookid;
string bookname;
public:
void getBook() {
cout << "Enter book ID: ";
cin >> bookid;
cin.ignore();
cout << "Enter book name: ";
getline(cin, bookname);
}
};
class Book : public Library {
private:
string author;
double price;
public:
void getDetails() {
getBook();
cout << "Enter author: ";
getline(cin, author);
cout << "Enter price: ";
cin >> price;
}
void display() {
cout << "Book ID: " << bookid << endl;
cout << "Book Name: " << bookname << endl;
cout << "Author: " << author << endl;
cout << "Price: " << price << endl;
}
};
int main() {
Book b;
b.getDetails();
b.display();
return 0;
}
