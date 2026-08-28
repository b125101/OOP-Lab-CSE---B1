#include <iostream>
using namespace std;
int process(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

float process(float arr[], int size)
{
    float sum = 0;

    for (int i = 0; i < size; i++)
        sum += arr[i];

    return sum;
}

int process(int arr[], int size, int k)
{
    int sum = 0;

    if (k > size)
        k = size;

    for (int i = 0; i < k; i++)
        sum += arr[i];

    return sum;
}

int main()
{
    int n, k;

    cout << "Enter size of integer array: ";
    cin >> n;

    int intArr[100];

    cout << "Enter integer array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> intArr[i];

    cout << "Enter size of floating-point array: ";
    cin >> n;

    float floatArr[100];

    cout << "Enter floating-point array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> floatArr[i];

    int intSize;
    cout << "Enter size of integer array again for first-k operation: ";
    cin >> intSize;

    int arr2[100];

    cout << "Enter integer array elements:\n";
    for (int i = 0; i < intSize; i++)
        cin >> arr2[i];

    cout << "Enter k: ";
    cin >> k;

    cout << "\n--- Results ---\n";


    cout << "Sum of floating-point array = "
         << process(floatArr, n) << endl;

    cout << "Sum of first " << k << " elements = "
         << process(arr2, intSize, k) << endl;

    cout << "Sum of integer array = "
         << process(arr2, intSize) << endl;

    return 0;
}