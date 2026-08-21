// Q8. Vehicle Service Tracker - Friend Class
#include <iostream>
#include <string>
using namespace std;

class ServiceManager; // forward declaration

class VehicleService {
private:
    string vehicleNumber;
    string ownerName;
    bool serviceDue; // true = due, false = not due
    int lastServiceKm;

    friend class ServiceManager;

public:
    void inputData() {
        cout << "Enter Vehicle Number: ";
        cin >> vehicleNumber;
        cout << "Enter Owner Name: ";
        cin.ignore();
        getline(cin, ownerName);
        cout << "Enter Last Service Kilometres: ";
        cin >> lastServiceKm;
        serviceDue = false; // default not due
    }
};

class ServiceManager {
private:
    static const int SERVICE_INTERVAL_KM = 5000; // service due every 5000 km

public:
    void displayInfo(const VehicleService &v) {
        cout << "\n----- Vehicle Service Information -----\n";
        cout << "Vehicle Number: " << v.vehicleNumber << endl;
        cout << "Owner Name: " << v.ownerName << endl;
        cout << "Last Service Km: " << v.lastServiceKm << endl;
        cout << "Service Due: " << (v.serviceDue ? "Yes" : "No") << endl;
        cout << "------------------------------------------\n";
    }

    void markServiceCompleted(VehicleService &v, int currentKm) {
        v.lastServiceKm = currentKm;
        v.serviceDue = false;
        cout << "Service marked as completed for " << v.vehicleNumber << ".\n";
    }

    void updateLastServiceKm(VehicleService &v, int newKm) {
        v.lastServiceKm = newKm;
        cout << "Last service kilometres updated to " << newKm << ".\n";
    }

    void checkServiceRequired(VehicleService &v, int currentKm) {
        int distanceSinceService = currentKm - v.lastServiceKm;
        if (distanceSinceService >= SERVICE_INTERVAL_KM) {
            v.serviceDue = true;
            cout << v.vehicleNumber << " REQUIRES servicing (traveled "
                 << distanceSinceService << " km since last service).\n";
        } else {
            v.serviceDue = false;
            cout << v.vehicleNumber << " does NOT require servicing yet ("
                 << distanceSinceService << " km since last service).\n";
        }
    }
};

int main() {
    VehicleService vs;
    ServiceManager sm;

    vs.inputData();

    int choice, currentKm, newKm;
    do {
        cout << "\n----- Vehicle Service Menu -----\n";
        cout << "1. Display Vehicle Info\n";
        cout << "2. Mark Service Completed\n";
        cout << "3. Update Last Service Km\n";
        cout << "4. Check If Servicing Required\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1: sm.displayInfo(vs); break;
            case 2:
                cout << "Enter current kilometres (as service reading): ";
                cin >> currentKm;
                sm.markServiceCompleted(vs, currentKm);
                break;
            case 3:
                cout << "Enter new last service kilometres: ";
                cin >> newKm;
                sm.updateLastServiceKm(vs, newKm);
                break;
            case 4:
                cout << "Enter current kilometres reading: ";
                cin >> currentKm;
                sm.checkServiceRequired(vs, currentKm);
                break;
            case 5: cout << "Exiting...\n"; break;
            default: cout << "Invalid choice!\n";
        }
    } while (choice != 5);

    return 0;
}
