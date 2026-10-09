
#include <iostream>
using namespace std;

class Bill {
    int items;
    double amount;

public:
    Bill(int i, double a) {
        items = i;
        amount = a;
    }

    Bill operator+(const Bill& b) const {
        return Bill(items + b.items, amount + b.amount);
    }

    bool operator>(const Bill& b) const {
        return amount > b.amount;
    }

    void display() const {
        cout << "Number of items: " << items << endl;
        cout << "Total amount: Rs. " << amount << endl;
    }
};

int main() {
    int i1, i2;
    double a1, a2;

    cout << "Enter number of items and total amount for first bill: ";
    cin >> i1 >> a1;

    cout << "Enter number of items and total amount for second bill: ";
    cin >> i2 >> a2;

    if (i1 < 0 || i2 < 0 || a1 < 0 || a2 < 0) {
        cout << "Items and amounts cannot be negative." << endl;
        return 0;
    }

    Bill b1(i1, a1), b2(i2, a2);

    cout << "\nFirst bill:" << endl;
    b1.display();

    cout << "\nSecond bill:" << endl;
    b2.display();

    Bill combined = b1 + b2;

    cout << "\nCombined bill:" << endl;
    combined.display();

    cout << boolalpha;
    cout << "First bill > Second bill: " << (b1 > b2) << endl;
    cout << "Second bill > First bill: " << (b2 > b1) << endl;

    return 0;
}
