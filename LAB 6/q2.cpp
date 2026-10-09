#include <iostream>
using namespace std;
class Duration {
    int hours, minutes;
public:
    Duration(int h, int m) {
        hours = h + m / 60;
        minutes = m % 60;
    }
    Duration operator+(const Duration& d) const {
        return Duration(hours + d.hours, minutes + d.minutes);
    }
    void display() const {
        cout << hours << " hours " << minutes << " minutes" << endl;
    }
};
int main() {
    int h1, m1, h2, m2;
    cout << "Enter hours and minutes of first duration: ";
    cin >> h1 >> m1;
    cout << "Enter hours and minutes of second duration: ";
    cin >> h2 >> m2;
    if (h1 < 0 || h2 < 0 || m1 < 0 || m2 < 0) {
        cout << "Duration values cannot be negative." << endl;
        return 0;
    }
    Duration d1(h1, m1), d2(h2, m2);
    Duration sum = d1 + d2;
    cout << "First duration: ";
    d1.display();
    cout << "Second duration: ";
    d2.display();
    cout << "Total duration: ";
    sum.display();
    return 0;
}
