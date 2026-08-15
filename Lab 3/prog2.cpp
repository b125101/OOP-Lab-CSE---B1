/*
2. Dynamic Array – Reverse Order
Dynamically allocate an array of n integers using the new operator. Accept the elements
from the user and display them in reverse order. Properly deallocate the dynamically
allocated memory after displaying the result.
*/

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Elements in reverse order: ";
    for (int i = n - 1; i >= 0; i--)
        cout << arr[i] << " ";

    cout << endl;
    delete[] arr;

    return 0;
}