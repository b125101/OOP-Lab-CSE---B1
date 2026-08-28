#include <iostream>
using namespace std;

float evaluate(int a, int b)
{
    return (a + b) / 2.0f;
}


float evaluate(int a, int b, int c)
{
    return (a + b + c) / 3.0f;
}


float evaluate(float a, float b)
{
    return (a + b) / 2.0f;
}

float evaluate(int arr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];
    return (float)sum / size;
}

float evaluate(int *a, int *b)
{
    return (*a + *b) / 2.0f;
}
int main()
{
    int a, b, c;
    float x, y;
    int n;
    // Two integers
    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Average of two integers = "
         << evaluate(a, b) << endl;
    // Three integers
    cout << "\nEnter three integers: ";
    cin >> a >> b >> c;
    cout << "Average of three integers = "
         << evaluate(a, b, c) << endl;
    // Two floating point values
    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;
    cout << "Average of two floating-point values = "
         << evaluate(x, y) << endl;
    // Integer array
    cout << "\nEnter size of integer array: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Average of integer array = "
         << evaluate(arr, n) << endl;

    // Pointer version
    int p, q;

    cout << "\nEnter two integers for pointer evaluation: ";
    cin >> p >> q;

    cout << "Average using pointers = "
         << evaluate(&p, &q) << endl;

    return 0;
}