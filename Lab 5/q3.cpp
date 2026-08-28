#include <iostream>
#include <cstring>
using namespace std;
void check(int num)
{
    if (num > 0)
        cout << "The number is positive." << endl;
    else if (num < 0)
        cout << "The number is negative." << endl;
    else
        cout << "The number is zero." << endl;
}
void check(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
        cout << "The character is uppercase." << endl;
    else if (ch >= 'a' && ch <= 'z')
        cout << "The character is lowercase." << endl;
    else
        cout << "The character is not an alphabet." << endl;
}
void check(char arr[], char target)
{
    bool found = false;

    for (int i = 0; arr[i] != '\0'; i++)
    {
        if (arr[i] == target)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Character '" << target << "' is present in the array." << endl;
    else
        cout << "Character '" << target << "' is not present in the array." << endl;
}
int main()
{
    int num;
    char ch;
    char arr[100];
    char target;

    cout << "Enter an integer: ";
    cin >> num;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "Enter a character array/string: ";
    cin >> arr;

    cout << "Enter character to search: ";
    cin >> target;

    cout << "\n--- Results ---\n";

    check(num);
    check(ch);
    check(arr, target);

    return 0;
}