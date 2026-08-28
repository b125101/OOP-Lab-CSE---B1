#include <iostream>
using namespace std;

void inspect(int num)
{
    cout << "Value of integer variable = " << num << endl;
}

void inspect(int *ptr)
{
    cout << "Value stored at pointer = " << *ptr << endl;
}

void inspect(int *ptr, int size)
{
    cout << "Array elements: ";
    for (int i = 0; i < size; i++)
    {
        cout << *(ptr + i) << " ";
    }
    cout << endl;
}
int main()
{
    int num;
    int n;
    cout << "Enter an integer: ";
    cin >> num;
    int *ptr = &num;
    cout << "\n--- Results ---\n";
    inspect(num);
    inspect(ptr);
    cout << "\nEnter size of array: ";
    cin >> n;
    int arr[100];
    cout << "Enter array elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    inspect(arr, n);
    return 0;
}