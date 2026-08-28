#include <iostream>
using namespace std;

void update(int &num, int amount)
{
    num += amount;
}

void update(float &num, float amount)
{
    num += amount;
}

void update(int arr[], int size, int amount)
{
    for (int i = 0; i < size; i++)
        arr[i] += amount;
}
int main()
{
    int num, amount;
    float decimal, fAmount;
    int n;
    cout << "Enter integer: ";
    cin >> num;
    cout << "Enter amount to increase: ";
    cin >> amount;
    cout << "Before update: " << num << endl;
    update(num, amount);
    cout << "After update: " << num << endl;
    cout << "\nEnter floating-point value: ";
    cin >> decimal;
    cout << "Enter amount to increase: ";
    cin >> fAmount;
    cout << "Before update: " << decimal << endl;
    update(decimal, fAmount);
    cout << "After update: " << decimal << endl;
    cout << "\nEnter size of integer array: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    cout << "Enter amount to increase each element: ";
    cin >> amount;
    cout << "Before update:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    update(arr, n, amount);
    cout << "\nAfter update:\n";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}