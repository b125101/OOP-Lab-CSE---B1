#include <iostream>
using namespace std;

int convert(int km)
{
    return km * 1000;
}
long convert(long meters)
{
    return meters * 100;
}
float convert(float km)
{
    return km * 1000;
}
int main()
{
    int km;
    long meters;
    float fkm;
    cout << "Enter distance in kilometers (int): ";
    cin >> km;
    cout << "Enter distance in meters: ";
    cin >> meters;
    cout << "Enter distance in kilometers (float): ";
    cin >> fkm;
    cout << "\n--- Converted Values ---\n";
    cout << km << " km = " << convert(km) << " meters\n";
    cout << meters << " meters = " << convert(meters) << " centimeters\n";
    cout << fkm << " km = " << convert(fkm) << " meters\n";
    return 0;
}