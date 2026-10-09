
#include <iostream>
#include <string>
using namespace std;

class Book {
    string title;
    double price;

public:
    Book(string t, double p) {
        title = t;
        price = p;
    }

    bool operator<(const Book& b) const {
        if (price == b.price)
            return title < b.title;
        return price < b.price;
    }

    void display() const {
        cout << "Title: " << title << endl;
        cout << "Price: Rs. " << price << endl;
    }
};

int main() {
    string t1, t2;
    double p1, p2;
    cout << "Enter first book title: ";
    getline(cin, t1);
    cout << "Enter first book price: ";
    cin >> p1;
    cin.ignore();

    cout << "Enter second book title: ";
    getline(cin, t2);
    cout << "Enter second book price: ";
    cin >> p2;

    if (p1 < 0 || p2 < 0) {
        cout << "Price cannot be negative." << endl;
        return 0;
    }

    Book b1(t1, p1), b2(t2, p2);

    cout << "\nFirst book:" << endl;
    b1.display();
    cout << "\nSecond book:" << endl;
    b2.display();

    cout << boolalpha;
    cout << "First book < Second book: " << (b1 < b2) << endl;

    return 0;
}
