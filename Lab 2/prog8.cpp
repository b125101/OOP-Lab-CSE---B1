/*
8. Hostel Fee Management
Create a class named HostelFee. The class should contain:
• Student Name
• Hostel ID
• Monthly Fee
• Number of Months
Write member functions to:
1. Accept student details.
2. Calculate the total hostel fee.
3. Apply a late fine of |500 if the payment is delayed.
4. Display the final amount payable.
*/
#include <iostream>
#include <string>
using namespace std;

class HostelFee{
    string studentName;
    int hostelID;
    float monthlyFee;
    int months;
    float totalFee;
    char delayed;

public:
    void input()
    {
        cin.ignore();
        cout << "Enter Student Name: ";
        getline(cin, studentName);
        cout << "Enter Hostel ID: ";
        cin >> hostelID;
        cout << "Enter Monthly Fee: ";
        cin >> monthlyFee;
        cout << "Enter Number of Months: ";
        cin >> months;
        cout << "Is Payment Delayed? (Y/N): ";
        cin >> delayed;
    }

    void calculate(){
        totalFee = monthlyFee * months;
        if (delayed == 'Y' || delayed == 'y'){
            totalFee += 500;
        }
    }

    void display(){
        cout << "Student Name : " << studentName << endl;
        cout << "Hostel ID : " << hostelID << endl;
        cout << "Monthly Fee : " << monthlyFee << endl;
        cout << "Months : " << months << endl;
        cout << "Final Amount Payable : " << totalFee << endl;
    }
};

int main(){
    HostelFee h;
    h.input();
    h.calculate();
    h.display();
    return 0;
}