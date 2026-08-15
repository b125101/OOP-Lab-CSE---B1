/*
10. Water Bill Calculator
Create a class named WaterBill. The class should contain:
• Consumer Number
• Consumer Name
• Water Consumption (in litres)
Write member functions to accept the consumer details, calculate the water bill using the
following slab rates, and display the complete bill.

Water Consumption       Rate (in rs.)
--------------------------------------
First 500 litres        2 per litre
Next 500 litres         3 per litre
Above 1000 litres       5 per litre
*/

#include <iostream>
#include <string>
using namespace std;

class WaterBill{
    int consumerNumber;
    string consumerName;
    int waterConsumption;
    float bill;

public:
    void input(){
        cout << "Enter Consumer Number: ";
        cin >> consumerNumber;
        cin.ignore();
        cout << "Enter Consumer Name: ";
        getline(cin, consumerName);
        cout << "Enter Water Consumption (litres): ";
        cin >> waterConsumption;
    }

    void calculateBill(){
        if (waterConsumption <= 500)
        {
            bill = waterConsumption * 2;
        }
        else if (waterConsumption <= 1000)
        {
            bill = (500 * 2) + ((waterConsumption - 500) * 3);
        }
        else
        {
            bill = (500 * 2) + (500 * 3) + ((waterConsumption - 1000) * 5);
        }
    }

    void display(){
        cout << "Consumer Number : " << consumerNumber << endl;
        cout << "Consumer Name   : " << consumerName << endl;
        cout << "Water Used      : " << waterConsumption << " litres" << endl;
        cout << "Total Bill      : Rs. " << bill << endl;
    }
};

int main(){
    WaterBill w;
    w.input();
    w.calculateBill();
    w.display();
    return 0;
}