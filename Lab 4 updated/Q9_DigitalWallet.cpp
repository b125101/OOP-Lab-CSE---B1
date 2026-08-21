// Q9. Digital Wallet Controller - Friend Class
#include <iostream>
#include <string>
using namespace std;

class WalletManager; // forward declaration

class DigitalWallet {
private:
    string userName;
    double walletBalance;
    bool isActive; // true = active, false = disabled

    friend class WalletManager;

public:
    void inputData() {
        cout << "Enter User Name: ";
        cin.ignore();
        getline(cin, userName);
        cout << "Enter Initial Wallet Balance: ";
        cin >> walletBalance;
        isActive = true; // active by default
    }
};

class WalletManager {
public:
    void displayInfo(const DigitalWallet &w) {
        cout << "\n----- Wallet Details -----\n";
        cout << "User Name: " << w.userName << endl;
        cout << "Balance: " << w.walletBalance << endl;
        cout << "Status: " << (w.isActive ? "Active" : "Disabled") << endl;
        cout << "---------------------------\n";
    }

    void addMoney(DigitalWallet &w, double amount) {
        if (!w.isActive) {
            cout << "Cannot add money. Wallet is disabled.\n";
            return;
        }
        w.walletBalance += amount;
        cout << amount << " added. New balance: " << w.walletBalance << endl;
    }

    void deductMoney(DigitalWallet &w, double amount) {
        if (!w.isActive) {
            cout << "Cannot deduct money. Wallet is disabled.\n";
            return;
        }
        if (amount <= w.walletBalance) {
            w.walletBalance -= amount;
            cout << amount << " deducted. New balance: " << w.walletBalance << endl;
        } else {
            cout << "Insufficient balance. Deduction failed.\n";
        }
    }

    void disableWallet(DigitalWallet &w) {
        w.isActive = false;
        cout << w.userName << "'s wallet has been disabled.\n";
    }

    void displayStatus(const DigitalWallet &w) {
        cout << "Wallet Status: " << (w.isActive ? "Active" : "Disabled") << endl;
    }
};

int main() {
    DigitalWallet dw;
    WalletManager wm;

    dw.inputData();

    int choice;
    double amount;
    do {
        cout << "\n----- Digital Wallet Menu -----\n";
        cout << "1. Display Wallet Details\n";
        cout << "2. Add Money\n";
        cout << "3. Deduct Money\n";
        cout << "4. Disable Wallet\n";
        cout << "5. Display Wallet Status\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: wm.displayInfo(dw); break;
            case 2:
                cout << "Enter amount to add: ";
                cin >> amount;
                wm.addMoney(dw, amount);
                break;
            case 3:
                cout << "Enter amount to deduct: ";
                cin >> amount;
                wm.deductMoney(dw, amount);
                break;
            case 4: wm.disableWallet(dw); break;
            case 5: wm.displayStatus(dw); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
