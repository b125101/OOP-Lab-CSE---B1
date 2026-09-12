#include <iostream>
using namespace std;

class Wallet {
    int walletID;
    double balance;
    double *transactions;
    int transactionCount;
    int capacity;

public:
    Wallet(int id = 0, double initialBalance = 0, int cap = 10) {
        walletID = id;
        balance = initialBalance;
        capacity = cap;
        transactionCount = 0;
        transactions = new double[capacity];
    }



    void transaction(double amount) {
        if (amount >= 0)
            balance += amount;
        else {
            if (balance + amount >= 0)
                balance += amount;
            else {
                cout << "Insufficient balance.\n";
                return;
            }
        }

        if (transactionCount < capacity)
            transactions[transactionCount++] = amount;
    }


    void transaction(double amount, char type) {
        if (type == 'D' || type == 'd') {
            balance += amount;

            if (transactionCount < capacity)
                transactions[transactionCount++] = amount;
        }
        else if (type == 'W' || type == 'w') {
            if (balance >= amount) {
                balance -= amount;

                if (transactionCount < capacity)
                    transactions[transactionCount++] = -amount;
            }
            else
                cout << "Insufficient balance.\n";
        }
        else
            cout << "Invalid transaction type.\n";
    }

    void display() const {
        cout << "Wallet ID: " << walletID << '\n';
        cout << "Balance: " << balance << '\n';

        cout << "Transactions: ";
        for (int i = 0; i < transactionCount; i++)
            cout << transactions[i] << ' ';

        cout << "\n";
    }

    friend void compareWallets(const Wallet &w1, const Wallet &w2);

    ~Wallet() {
        delete[] transactions;
    }
};

void compareWallets(const Wallet &w1, const Wallet &w2) {
    if (w1.balance > w2.balance)
        cout << "Wallet " << w1.walletID << " has the larger balance.\n";
    else if (w2.balance > w1.balance)
        cout << "Wallet " << w2.walletID << " has the larger balance.\n";
    else
        cout << "Both wallets have the same balance.\n";
}

int main() {
    int id;
    double balance;

    Wallet *wallets = new Wallet[2];

    for (int i = 0; i < 2; i++) {
        cout << "Enter Wallet " << i + 1 << " ID: ";
        cin >> id;

        cout << "Enter initial balance: ";
        cin >> balance;

        wallets[i] = Wallet(id, balance);
    }

    double amount;
    char type;

    cout << "\nFor Wallet 1, enter amount (+deposit / -withdrawal): ";
    cin >> amount;
    wallets[0].transaction(amount);

    cout << "For Wallet 2, enter amount and type (D/W): ";
    cin >> amount >> type;
    wallets[1].transaction(amount, type);

    cout << "\n--- Wallet Details ---\n";
    wallets[0].display();
    cout << '\n';
    wallets[1].display();

    cout << "\n--- Comparison ---\n";
    compareWallets(wallets[0], wallets[1]);

    delete[] wallets;
    return 0;
}
