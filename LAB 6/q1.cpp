#include <iostream>
#include <numeric>
using namespace std;

class Fraction {
    int num, den;
    void simplify() {
        if (den < 0) {
            num = -num;
            den = -den;
        }
        int g = gcd(abs(num), abs(den));
        num /= g;
        den /= g;
    }
public:
    Fraction(int n = 0, int d = 1) {
        num = n;
        den = d;
        simplify();
    }
    Fraction operator+(const Fraction& f) const {
        return Fraction(num * f.den + f.num * den, den * f.den);
    }
    Fraction operator-(const Fraction& f) const {
        return Fraction(num * f.den - f.num * den, den * f.den);
    }
    void display() const {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1, 2), f2(1, 3);
    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;

    cout << "First fraction: ";
    f1.display();
    cout << "Second fraction: ";
    f2.display();
    cout << "Addition: ";
    sum.display();
    cout << "Subtraction: ";
    diff.display();
    return 0;
}
