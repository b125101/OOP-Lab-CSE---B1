#include <iostream>
#include <string>
using namespace std;

class Instrument {
    int instrumentID;
    string name;
    int accessLevel;

public:
    Instrument(int id, string n, int level) {
        instrumentID = id;
        name = n;
        accessLevel = level;
    }

    void display() const {
        cout << "Instrument ID: " << instrumentID << '\n';
        cout << "Name: " << name << '\n';
        cout << "Access Level: " << accessLevel << '\n';
    }

   
    friend class LabSupervisor;
};

class LabSupervisor {
public:
    void checkAccess(const Instrument &instrument) {
        cout << "Current access level of "
             << instrument.name << ": "
             << instrument.accessLevel << '\n';
    }

    void modifyAccess(Instrument &instrument, int newLevel) {
        instrument.accessLevel = newLevel;
        cout << "Access level modified successfully.\n";
    }
};

int main() {
    int id, level;
    string name;

    cout << "Enter instrument ID: ";
    cin >> id;

    cout << "Enter instrument name: ";
    cin >> name;

    cout << "Enter access level: ";
    cin >> level;

    Instrument *instrument = new Instrument(id, name, level);
    LabSupervisor supervisor;

    cout << "\n--- Instrument Details ---\n";
    instrument->display();

    cout << "\nSupervisor checking access:\n";
    supervisor.checkAccess(*instrument);

    int newLevel;
    cout << "\nEnter new access level: ";
    cin >> newLevel;

    supervisor.modifyAccess(*instrument, newLevel);

    cout << "\n--- Updated Instrument Details ---\n";
    instrument->display();

    delete instrument;
    return 0;
}
