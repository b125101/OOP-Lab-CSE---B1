// Q6. Printer Control System - Friend Class
#include <iostream>
#include <string>
using namespace std;

class PrinterManager; // forward declaration

class Printer {
private:
    string printerName;
    int pagesPrinted;
    int inkLevel;       // percentage 0-100
    bool powerStatus;   // true = ON, false = OFF

    friend class PrinterManager; // PrinterManager can access private members

public:
    void inputData() {
        cout << "Enter Printer Name: ";
        cin.ignore();
        getline(cin, printerName);
        cout << "Enter Number of Pages Printed: ";
        cin >> pagesPrinted;
        cout << "Enter Ink Level (%): ";
        cin >> inkLevel;
        powerStatus = false; // start OFF by default
    }
};

class PrinterManager {
public:
    void displayInfo(const Printer &p) {
        cout << "\n----- Printer Information -----\n";
        cout << "Name: " << p.printerName << endl;
        cout << "Pages Printed: " << p.pagesPrinted << endl;
        cout << "Ink Level: " << p.inkLevel << "%\n";
        cout << "Power Status: " << (p.powerStatus ? "ON" : "OFF") << endl;
        cout << "--------------------------------\n";
    }

    void turnOn(Printer &p) {
        p.powerStatus = true;
        cout << p.printerName << " is now ON.\n";
    }

    void turnOff(Printer &p) {
        p.powerStatus = false;
        cout << p.printerName << " is now OFF.\n";
    }

    void checkInkLevel(const Printer &p) {
        cout << "Ink Level of " << p.printerName << ": " << p.inkLevel << "%";
        if (p.inkLevel < 20)
            cout << " (Low - please refill)\n";
        else
            cout << " (Sufficient)\n";
    }

    void resetPageCount(Printer &p) {
        p.pagesPrinted = 0;
        cout << "Page count for " << p.printerName << " has been reset.\n";
    }
};

int main() {
    Printer p;
    PrinterManager pm;

    p.inputData();

    int choice;
    do {
        cout << "\n----- Printer Control Menu -----\n";
        cout << "1. Display Printer Info\n";
        cout << "2. Turn Printer ON\n";
        cout << "3. Turn Printer OFF\n";
        cout << "4. Check Ink Level\n";
        cout << "5. Reset Page Count\n";
        cout << "6. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: pm.displayInfo(p); break;
            case 2: pm.turnOn(p); break;
            case 3: pm.turnOff(p); break;
            case 4: pm.checkInkLevel(p); break;
            case 5: pm.resetPageCount(p); break;
            case 6: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 6);

    return 0;
}
