#include <iostream>
using namespace std;
class AccountBalance {
    double balance;

public:
    AccountBalance(double b) {
        balance = b;
    }

    AccountBalance operator-() const {
        return AccountBalance(-balance);
    }

    void display() const {
        cout << "Balance: Rs. " << balance << endl;
    }
};

int main() {
    double b;

    cout << "Enter account balance: ";
    cin >> b;

    AccountBalance a1(b);
    AccountBalance a2 = -a1;

    cout << "Original account: ";
    a1.display();

    cout << "Adjusted account: ";
    a2.display();

    return 0;
}
