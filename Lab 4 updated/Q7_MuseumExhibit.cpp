// Q7. Museum Exhibit Controller - Friend Class
#include <iostream>
#include <string>
using namespace std;

class MuseumManager; // forward declaration

class Exhibit {
private:
    string exhibitName;
    int exhibitID;
    int visitorCount;
    bool isOpen; // true = open, false = closed

    friend class MuseumManager;

public:
    void inputData() {
        cout << "Enter Exhibit Name: ";
        cin.ignore();
        getline(cin, exhibitName);
        cout << "Enter Exhibit ID: ";
        cin >> exhibitID;
        cout << "Enter Initial Visitor Count: ";
        cin >> visitorCount;
        isOpen = false; // closed by default
    }
};

class MuseumManager {
public:
    void displayInfo(const Exhibit &e) {
        cout << "\n----- Exhibit Information -----\n";
        cout << "Name: " << e.exhibitName << endl;
        cout << "ID: " << e.exhibitID << endl;
        cout << "Visitor Count: " << e.visitorCount << endl;
        cout << "Status: " << (e.isOpen ? "Open" : "Closed") << endl;
        cout << "--------------------------------\n";
    }

    void addVisitors(Exhibit &e, int count) {
        e.visitorCount += count;
        cout << count << " visitors added to " << e.exhibitName << ".\n";
    }

    void resetVisitorCount(Exhibit &e) {
        e.visitorCount = 0;
        cout << "Visitor count for " << e.exhibitName << " has been reset.\n";
    }

    void setOpenStatus(Exhibit &e, bool open) {
        e.isOpen = open;
        cout << e.exhibitName << " is now " << (open ? "Open" : "Closed") << ".\n";
    }

    void displayOpenStatus(const Exhibit &e) {
        cout << e.exhibitName << " is currently "
             << (e.isOpen ? "Open" : "Closed") << ".\n";
    }
};

int main() {
    Exhibit ex;
    MuseumManager mm;

    ex.inputData();

    int choice;
    do {
        cout << "\n----- Museum Exhibit Menu -----\n";
        cout << "1. Display Exhibit Info\n";
        cout << "2. Add Visitors\n";
        cout << "3. Reset Visitor Count\n";
        cout << "4. Open Exhibit\n";
        cout << "5. Close Exhibit\n";
        cout << "6. Display Open Status\n";
        cout << "7. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        int count;
        switch (choice) {
            case 1: mm.displayInfo(ex); break;
            case 2:
                cout << "Enter number of visitors to add: ";
                cin >> count;
                mm.addVisitors(ex, count);
                break;
            case 3: mm.resetVisitorCount(ex); break;
            case 4: mm.setOpenStatus(ex, true); break;
            case 5: mm.setOpenStatus(ex, false); break;
            case 6: mm.displayOpenStatus(ex); break;
            case 7: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 7);

    return 0;
}
