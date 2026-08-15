/*
8. Dynamic Array with Function Processing
Dynamically allocate an array of n integers. Create separate functions to:
1. Accept the elements.
2. Calculate the sum of all elements.
3. Find the smallest element.
4. Find the largest element.
5. Display the results.
*/

#include <iostream>
using namespace std;

void accept(int *arr, int n) {
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
}

int sum(int *arr, int n) {
    int total = 0;
    for (int i = 0; i < n; i++)
        total += arr[i];

    return total;
}

int smallest(int *arr, int n) {
    int small = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] < small)
            small = arr[i];

    return small;
}

int largest(int *arr, int n) {
    int large = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > large)
            large = arr[i];

    return large;
}

void display(int total, int small, int large) {
    cout << "\nSum = " << total << endl;
    cout << "Smallest = " << small << endl;
    cout << "Largest = " << large << endl;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    int *arr = new int[n];
    accept(arr, n);
    int total = sum(arr, n);
    int small = smallest(arr, n);
    int large = largest(arr, n);
    display(total, small, large);
    delete[] arr;
    return 0;
}