
#include <iostream>
using namespace std;

class Temperature {
    double celsius;

public:
    Temperature(double c) {
        celsius = c;
    }
    bool operator>(const Temperature& t) const {
        return celsius > t.celsius;
    }
    bool operator<(const Temperature& t) const {
        return celsius < t.celsius;
    }
    Temperature operator-() const {
        return Temperature(-celsius);
    }
    void display() const {
        cout << celsius << " C" << endl;
    }
};
int main() {
    double c1, c2;

    cout << "Enter first temperature in Celsius: ";
    cin >> c1;

    cout << "Enter second temperature in Celsius: ";
    cin >> c2;

    Temperature t1(c1), t2(c2);
    Temperature negative = -t1;

    cout << boolalpha;
    cout << "First temperature: ";
    t1.display();

    cout << "Second temperature: ";
    t2.display();

    cout << "First > Second: " << (t1 > t2) << endl;
    cout << "First < Second: " << (t1 < t2) << endl;

    cout << "Negated first temperature: ";
    negative.display();

    return 0;
}
