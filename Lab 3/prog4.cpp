/*
4. Dynamic Array – Search an Element
Dynamically allocate an array of n integers. Accept the elements and search for a number
entered by the user. Display whether the element is present and, if present, display its
position in the array.
*/

#include <iostream>
using namespace std;

int main() {
    int n, search, pos = -1;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter element to search: ";
    cin >> search;
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            pos = i;
            break;
        }
    }
    if (pos != -1)
        cout << "Element found at position " << pos + 1 << endl;
    else
        cout << "Element not found" << endl;
    delete[] arr;

    return 0;
}