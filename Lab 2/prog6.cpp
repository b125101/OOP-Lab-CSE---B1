/*
6.  Time Addition
functions to:
Create a class named Time with two data members: Hours and Minutes. Write member
1. Input two time values.
2. Add the two time values.
3. Display the resulting time.
*/

#include <iostream>
using namespace std;

class Time{
    int hours, minutes;

public:
    void input(){
        cout << "Enter Hours: ";
        cin >> hours;
        cout << "Enter Minutes: ";
        cin >> minutes;
    }

    void add(Time t1, Time t2){
        hours = t1.hours + t2.hours;
        minutes = t1.minutes + t2.minutes;

        if (minutes >= 60){
            hours += minutes / 60;
            minutes = minutes % 60;
        }
    }

    void display(){
        cout << "Resulting Time = " << hours << " hr " << minutes << " min" << endl;
    }
};

int main(){
    Time t1, t2, result;
    cout << "Enter First Time\n";
    t1.input();
    cout << "\nEnter Second Time\n";
    t2.input();
    result.add(t1, t2);
    cout << "\n";
    result.display();
    return 0;
}