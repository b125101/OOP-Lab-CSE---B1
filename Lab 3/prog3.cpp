/*
3. Count Even and Odd Numbers
Dynamically allocate an integer array of size n. Accept the elements from the user and
count how many elements are even and how many are odd.
*/

#include <iostream>
using namespace std;

int main() {
    int n, even = 0, odd = 0;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    cout << "Even numbers = " << even << endl;
    cout << "Odd numbers = " << odd << endl;
    delete[] arr;

    return 0;
}