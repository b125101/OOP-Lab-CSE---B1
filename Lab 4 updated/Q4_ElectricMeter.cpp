// Q4. Electricity Usage Alert - Friend Function
#include <iostream>
#include <string>
using namespace std;

class ElectricMeter {
private:
    string meterNumber;
    string consumerName;
    float unitsConsumed;

public:
    void inputData() {
        cout << "Enter Meter Number: ";
        cin >> meterNumber;
        cout << "Enter Consumer Name: ";
        cin.ignore();
        getline(cin, consumerName);
        cout << "Enter Units Consumed: ";
        cin >> unitsConsumed;
    }

    friend void checkUsage(const ElectricMeter &e);
};

// Friend function definition
void checkUsage(const ElectricMeter &e) {
    cout << "\n----- Electricity Usage Report -----\n";
    cout << "Meter Number: " << e.meterNumber << endl;
    cout << "Consumer Name: " << e.consumerName << endl;
    cout << "Units Consumed: " << e.unitsConsumed << endl;

    if (e.unitsConsumed < 100)
        cout << "Category: Low Usage\n";
    else if (e.unitsConsumed <= 300)
        cout << "Category: Moderate Usage\n";
    else
        cout << "Category: High Usage\n";
    cout << "--------------------------------------\n";
}

int main() {
    int n;
    cout << "Enter number of meter records: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nRecord " << (i + 1) << ":\n";
        ElectricMeter em;
        em.inputData();
        checkUsage(em);
    }

    return 0;
}
