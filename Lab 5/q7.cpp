#include <iostream>
#include <cmath>
using namespace std;

int nearValue(int a, int b)
{
    if (abs(a) <= abs(b))
        return a;
    else
        return b;
}

float nearValue(float a, float b)
{
    if (fabs(a) <= fabs(b))
        return a;
    else
        return b;
}
int nearValue(int arr[], int size)
{
    int nearest = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (abs(arr[i]) < abs(nearest))
            nearest = arr[i];
    }
    return nearest;
}
int main()
{
    int a=10, b=20;
    float x=10, y=20;
    int n;
    //
         << nearValue(a, b) << endl;

    cout << "\nEnter two floating-point values: ";
    cin >> x >> y;


    cout << "Floating-point value closer to zero = "
         << nearValue(x, y) << endl;

    cout << "\nEnter size of integer array: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Array element closest to zero = "
        << nearValue(arr, n) << endl;

    return 0;
}