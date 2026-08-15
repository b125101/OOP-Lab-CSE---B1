/*
1. Dynamic Number Operations
Dynamically allocate memory for two integers using the new operator. Accept the values
from the user and display their sum, difference, product, and quotient. Finally, release the
allocated memory using the delete operator.
*/
#include <iostream>
using namespace std;

int main() {
    int *a = new int;
    int *b = new int;
    cout << "Enter a integers: ";
    cin >> *a;
    cout << "Enter another integers: ";
    cin >> *b;
    cout << "Sum = " << *a + *b << endl;
    cout << "Difference = " << *a - *b << endl;
    cout << "Product = " << *a * *b << endl;
    if (*b != 0)
        cout << "Quotient = " << (double)*a / *b << endl;
    else
        cout << "Quotient = Undefined (division by zero)" << endl;

    delete a;
    delete b;

    return 0;
}