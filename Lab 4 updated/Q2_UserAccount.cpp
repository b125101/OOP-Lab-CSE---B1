// Q2. Two-Factor Login - Friend Function
#include <iostream>
#include <string>
using namespace std;

class UserAccount {
private:
    string username;
    int loginAttempts;
    string accountStatus; // will be determined by friend function

public:
    void inputData() {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter number of unsuccessful Login Attempts: ";
        cin >> loginAttempts;
        accountStatus = "Not Checked";
    }

    friend void checkAccount(UserAccount &u);
};

// Friend function definition
void checkAccount(UserAccount &u) {
    cout << "\n----- Account Check -----\n";
    cout << "Username: " << u.username << endl;
    cout << "Login Attempts: " << u.loginAttempts << endl;

    if (u.loginAttempts >= 3) {
        u.accountStatus = "Account Locked";
    } else {
        u.accountStatus = "Account Active";
    }
    cout << "Status: " << u.accountStatus << endl;
    cout << "--------------------------\n";
}

int main() {
    int n;
    cout << "Enter number of accounts to check: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nAccount " << (i + 1) << ":\n";
        UserAccount u;
        u.inputData();
        checkAccount(u);
    }

    return 0;
}
