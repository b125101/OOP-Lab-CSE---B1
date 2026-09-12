#include <iostream>
#include <string>
using namespace std;

class Locker {
    int lockerNumber;
    bool occupied;
    char *accessCode;
    int codeSize;

public:
    Locker() {
        lockerNumber = 0;
        occupied = false;
        accessCode = nullptr;
        codeSize = 0;
    }

    void initialize(int num, bool status, int size) {
        lockerNumber = num;
        occupied = status;
        codeSize = size;
        accessCode = new char[codeSize + 1];
        accessCode[0] = '\0';
     }

   
    void setCode(const string &code) {
        delete[] accessCode;
        codeSize = static_cast<int>(code.length());
        accessCode = new char[codeSize + 1];

        for (int i = 0; i < codeSize; i++)
            accessCode[i] = code[i];

        accessCode[codeSize] = '\0';
    }

    void setCode(int position, char value) {
        if (position >= 0 && position < codeSize)
            accessCode[position] = value;
        else
            cout << "Invalid code position.\n";
    }

    void display() const {
        cout << "Locker Number: " << lockerNumber << '\n';
        cout << "Occupied: " << (occupied ? "Yes" : "No") << '\n';
        cout << "Access Code: " << accessCode << "\n\n";
    }

    ~Locker() {
        delete[] accessCode;
    }
};

int main() {
    int n;
    cout << "Enter number of lockers: ";
    cin >> n;

    Locker *lockers = new Locker[n];

    for (int i = 0; i < n; i++) {
        int number, status, size;
        string code;

        cout << "\nLocker " << i + 1 << '\n';
        cout << "Enter locker number: ";
        cin >> number;
        cout << "Enter occupied status (1/0): ";
        cin >> status;
        cout << "Enter code size: ";
        cin >> size;

        lockers[i].initialize(number, status, size);

        cout << "Enter complete access code: ";
        cin >> code;
        lockers[i].setCode(code);
    }

    int position;
    char value;

    cout << "\nEnter locker index to modify (0 to " << n - 1 << "): ";
    cin >> position;

    if (position >= 0 && position < n) {
        int codePosition;
        cout << "Enter code position to change: ";
        cin >> codePosition;
        cout << "Enter new character: ";
        cin >> value;

        lockers[position].setCode(codePosition, value);
    }

    cout << "\n--- Locker Details ---\n";
    for (int i = 0; i < n; i++)
        lockers[i].display();

    delete[] lockers;
    return 0;
}
