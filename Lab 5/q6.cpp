#include <iostream>
using namespace std;

int information(char arr[])
{
    int length = 0;

    while (arr[length] != '\0')
        length++;

    return length;
}

int information(char arr[], char target)
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
            count++;
    }
    return count;
}

int information(char arr[], char target, int k)
{
    int count = 0;
    for (int i = 0; i < k && arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
            count++;
    }
    return count;
}
int main()
{
    char arr[100];
    char target;
    int k;
    cout << "Enter a string: ";
    cin >> arr;
    cout << "Enter character to count: ";
    cin >> target;
    cout << "Enter k: ";
    cin >> k;
    cout << "\n--- Results ---\n";
    cout << "Length = " << information(arr) << endl;
    cout << "Total occurrence of '" << target << "' = "
         << information(arr, target) << endl;
    cout << "Occurrence in first " << k << " positions = "
         << information(arr, target, k) << endl;
    return 0;
}