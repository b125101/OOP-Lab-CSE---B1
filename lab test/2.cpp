#include <iostream>
using namespace std;
#include <string>
class Drone {
    int droneID;
    float batteryPercentage;
    float flightHours;

public:
    Drone(int id = 0, float battery = 0, float hours = 0) {
        droneID = id;
        batteryPercentage = battery;
        flightHours = hours;
    }

   
    void update(float battery) {
        batteryPercentage = battery;
    }

    
    void update(float battery, float hours) {
        batteryPercentage = battery;
        flightHours = hours;
     }

    void display() const {
        cout << "Drone ID: " << droneID << '\n';
        cout << "Battery: " << batteryPercentage << "%\n";
        cout << "Flight Hours: " << flightHours << "\n\n";
    }

    friend void compareBattery(const Drone &d1, const Drone &d2);
};

void compareBattery(const Drone &d1, const Drone &d2) {
    if (d1.batteryPercentage > d2.batteryPercentage)
        cout << "Drone " << d1.droneID << " has higher battery.\n";
    else if (d2.batteryPercentage > d1.batteryPercentage)
        cout << "Drone " << d2.droneID << " has higher battery.\n";
    else
        cout << "Both drones have the same battery level.\n";
}

int main() {
    Drone *drones = new Drone[2];

    int id;
    float battery, hours;

    for (int i = 0; i < 2; i++) {
        cout << "Enter Drone " << i + 1 << " ID: ";
        cin >> id;
        cout << "Enter battery percentage: ";
        cin >> battery;
        cout << "Enter flight hours: ";
        cin >> hours;

        drones[i] = Drone(id, battery, hours);
    }

    
    cout << "\nUpdating Drone 1 battery only...\n";
    cout << "Enter new battery: ";
    cin >> battery;
    drones[0].update(battery);

    cout << "Updating Drone 2 battery and flight hours...\n";
    cout << "Enter new battery and flight hours: ";
    cin >> battery >> hours;
    drones[1].update(battery, hours);

    cout << "\n--- Drone Details ---\n";
    drones[0].display();
    drones[1].display();

    compareBattery(drones[0], drones[1]);

    delete[] drones;
    return 0;
}
