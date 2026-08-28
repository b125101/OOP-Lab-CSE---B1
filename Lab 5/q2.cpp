#include <iostream>
using namespace std;
int area(int side)
{
    return side * side;
}
int area(int length, int breadth)
{
    return length * breadth;
}
float area(float radius)
{
    return 3.14159 * radius * radius;
}
int main()
{
    int side, length, breadth;
    float radius;
    cout << "Enter side of square: ";
    cin >> side;
    cout << "Enter length of rectangle: ";
    cin >> length;
    cout << "Enter breadth of rectangle: ";
    cin >> breadth;
    cout << "Enter radius of circle: ";
    cin >> radius;
    cout << "\n--- Areas ---\n";
    cout << "Area of square = " << area(side) << endl;
    cout << "Area of rectangle = " << area(length, breadth) << endl;
    cout << "Area of circle = " << area(radius) << endl;
    return 0;
}