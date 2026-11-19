#include <iostream>
#include <string>
using namespace std;

class TripExpense
{
private:
    string tripName;
    float travelCost, foodCost, stayCost, otherCost;
    float totalExpense;

public:
    void getDetails()
    {
        cout << "Enter Trip Name: ";
        getline(cin, tripName);

        cout << "Enter Travel Expense: ";
        cin >> travelCost;

        cout << "Enter Food Expense: ";
        cin >> foodCost;

        cout << "Enter Accommodation Expense: ";
        cin >> stayCost;

        cout << "Enter Other Expenses: ";
        cin >> otherCost;
    }

    void calculateTotal()
    {
        totalExpense = travelCost + foodCost
                     + stayCost + otherCost;
    }

    void displayDetails()
    {
        cout << "\n----- Trip Expense Details -----" << endl;
        cout << "Trip Name: " << tripName << endl;
        cout << "Travel Expense: " << travelCost << endl;
        cout << "Food Expense: " << foodCost << endl;
        cout << "Accommodation Expense: " << stayCost << endl;
        cout << "Other Expenses: " << otherCost << endl;
        cout << "Total Trip Expense: " << totalExpense << endl;
    }
};

int main()
{
    TripExpense t;

    t.getDetails();
    t.calculateTotal();
    t.displayDetails();

    return 0;   }
