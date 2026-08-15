/*
7. Movie Ticket Booking
Create a class named MovieTicket. The class should contain:
• Movie Name
• Ticket Price
• Number of Tickets
Write member functions to:
1. Accept booking details.
2. Calculate the total ticket cost.
3. Display the booking summary
*/

#include <iostream>
#include <string>
using namespace std;

class MovieTicket{
    string movieName;
    float ticketPrice;
    int numberOfTickets;
    float totalCost;

public:
    void input(){
        cin.ignore();
        cout << "Enter Movie Name: ";
        getline(cin, movieName);
        cout << "Enter Ticket Price: ";
        cin >> ticketPrice;
        cout << "Enter Number of Tickets: ";
        cin >> numberOfTickets;
    }

    void calculate(){
        totalCost = ticketPrice * numberOfTickets;
    }

    void display(){
        cout << "Movie Name : " << movieName << endl;
        cout << "Ticket Price : " << ticketPrice << endl;
        cout << "Tickets : " << numberOfTickets << endl;
        cout << "Total Cost : " << totalCost << endl;
    }
};

int main(){
    MovieTicket m;
    m.input();
    m.calculate();
    m.display();
    return 0;
}