/*
4. Hotel Room Booking
Design a class named HotelRoom. The class should contain:
• Room Number
• Guest Name
• Number of Days Stayed
• Cost Per Day
Write member functions to:
1. Accept booking details.
2. Calculate the total room rent.
3. Display the booking details.
*/

#include <iostream>
#include <string>
using namespace std;

class HotelRoom{
    int roomNumber;
    string guestName;
    int daysStayed;
    float costPerDay;
    float totalRent;

public:
    void input(){
        cout << "Enter Room Number: ";
        cin >> roomNumber;
        cin.ignore();
        cout << "Enter Guest Name: ";
        getline(cin, guestName);
        cout << "Enter Number of Days Stayed: ";
        cin >> daysStayed;
        cout << "Enter Cost Per Day: ";
        cin >> costPerDay;
    }

    void calculateRent(){
        totalRent = daysStayed * costPerDay;
    }

    void display(){
        cout << "Room Number : " << roomNumber << endl;
        cout << "Guest Name  : " << guestName << endl;
        cout << "Days Stayed : " << daysStayed << endl;
        cout << "Cost/Day    : " << costPerDay << endl;
        cout << "Total Rent  : " << totalRent << endl;
    }
};

int main(){
    HotelRoom h;
    h.input();
    h.calculateRent();
    h.display();
    return 0;
}
