// Q5. Event Registration Verification - Friend Function
#include <iostream>
#include <string>
using namespace std;

class EventParticipant {
private:
    string participantName;
    int age;
    bool registrationActive; // true = active, false = inactive

public:
    void inputData() {
        cout << "Enter Participant Name: ";
        cin.ignore();
        getline(cin, participantName);
        cout << "Enter Age: ";
        cin >> age;

        char statusInput;
        cout << "Is Registration Active? (y/n): ";
        cin >> statusInput;
        registrationActive = (statusInput == 'y' || statusInput == 'Y');
    }

    friend void verifyParticipant(const EventParticipant &p);
};

// Friend function definition
void verifyParticipant(const EventParticipant &p) {
    cout << "\n----- Event Registration Verification -----\n";
    cout << "Name: " << p.participantName << endl;
    cout << "Age: " << p.age << endl;
    cout << "Registration Status: " << (p.registrationActive ? "Active" : "Inactive") << endl;

    if (p.age >= 18 && p.registrationActive)
        cout << "Result: Eligible\n";
    else
        cout << "Result: Not Eligible\n";
    cout << "----------------------------------------------\n";
}

int main() {
    int n;
    cout << "Enter number of participants: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        cout << "\nParticipant " << (i + 1) << ":\n";
        EventParticipant ep;
        ep.inputData();
        verifyParticipant(ep);
    }

    return 0;
}
