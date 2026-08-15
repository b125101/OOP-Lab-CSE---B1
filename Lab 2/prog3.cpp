/*
3. Temperature Converter
Create a class named Temperature. Write member functions to:
1. Accept temperature in Celsius.
2. Convert it into Fahrenheit.
3. Display both temperatures.
*/

#include <iostream>
using namespace std;

class Temperature{
    float celsius, fahrenheit;

public:
    void input(){
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;
    }
    void convert(){
        fahrenheit = (9.0 / 5.0) * celsius + 32;
    }
    void display(){
        cout << "\nTemperature in Celsius    : " << celsius << " °C" << endl;
        cout << "Temperature in Fahrenheit : " << fahrenheit << " °F" << endl;
    }
};

int main(){
    Temperature t;
    t.input();
    t.convert();
    t.display();
    return 0;
}