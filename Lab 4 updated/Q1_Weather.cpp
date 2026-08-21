// Q1. Weather Report - Friend Function
#include <iostream>
#include <string>
using namespace std;

class Weather {
private:
    string cityName;
    float temperature;
    string weatherCondition;

public:
    // Constructor takes dynamic input from user
    void inputData() {
        cout << "Enter City Name: ";
        cin.ignore();
        getline(cin, cityName);
        cout << "Enter Temperature (in Celsius): ";
        cin >> temperature;
        cin.ignore();
        cout << "Enter Weather Condition (e.g., Sunny, Rainy, Cloudy): ";
        getline(cin, weatherCondition);
    }

    friend void generateReport(const Weather &w);
};

// Friend function definition
void generateReport(const Weather &w) {
    cout << "\n----- Weather Report -----\n";
    cout << "City: " << w.cityName << endl;
    cout << "Temperature: " << w.temperature << " C\n";
    cout << "Condition: " << w.weatherCondition << endl;

    if (w.temperature > 35)
        cout << "Category: Very Hot\n";
    else if (w.temperature >= 20 && w.temperature <= 35)
        cout << "Category: Pleasant\n";
    else
        cout << "Category: Cool\n";
    cout << "---------------------------\n";
}

int main() {
    int n;
    cout << "Enter number of cities to report: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nEntry " << (i + 1) << ":\n";
        Weather w;
        w.inputData();
        generateReport(w);
    }

    return 0;
}
