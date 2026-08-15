/*
5. Mobile Recharge System
Create a class named MobileRecharge. The class should contain:
• Mobile Number
• Customer Name
• Current Balance
Write member functions to:
1. Accept customer details.
2. Recharge the balance.
3. Deduct the balance after selecting a recharge plan.
4. Display the updated balance.
*/

#include <iostream>
#include <string>
using namespace std;

class MobileRecharge{
    long int mobileNumber;
    string customerName;
    float balance;

    public:
    void input(){
        cout << "Enter phone number:" << endl;
        cin >> mobileNumber;
        cin.ignore();
        cout << "Enter name:" << endl;
        getline(cin, customerName);
        cout << "Enter balance: " << endl;
        cin >> balance;
    }

    void recharge(){
        float recharge;
        cout << "Enter recharge amount: ";
        cin >> recharge;
        balance += recharge;
        cout << "Current balance:" << balance << endl;
    }

    void deduct(){
        float plan;
        cout << "Enter plan cost:";
        cin >> plan;
        if (plan <= balance){
            balance -= plan;
            cout << "\ncurrent balance: " << balance <<endl;
        }
        else {
            cout << "insufficient balance";
        }
    }

    void display(){
        cout << "\ncustomer's name:          " << customerName << endl;
        cout << "customer's mobile number: " << mobileNumber << endl;
        cout << "current balance:          " << balance << endl;
    }
    
};

int main(){
    MobileRecharge m;
    
    m.input();
    m.recharge();
    m.deduct();
    m.display();

    return 0;
}
