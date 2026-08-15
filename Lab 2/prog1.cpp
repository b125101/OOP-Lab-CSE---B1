/*
1. Car Information System
Create a class named Car to store the details of a car. The class should contain the following
data members:
• Car Number
• Brand Name
• Model Year
Write suitable member functions to:
1. Accept the car details from the user.
2. Display the entered details in a formatted manner.
*/

#include <iostream>
#include <string>
using namespace std;

class Car{

    string carNumber;
    string brandName;
    int modelYear;

public:
    void input(){
        cout << "Enter Car Number: ";
        cin >> carNumber;
        cout << "Enter Brand Name: ";
        cin >> brandName;
        cout << "Enter Model Year: ";
        cin >> modelYear;
    }
    void display(){
        cout << "Car Number : " << carNumber << endl;
        cout << "Brand Name : " << brandName << endl;
        cout << "Model Year : " << modelYear << endl;
    }
};

int main(){
    Car c;
    c.input();
    c.display();
    return 0;
}
