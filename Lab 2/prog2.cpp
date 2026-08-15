/*
2. Square Calculator
Create a class named Square that stores the side of a square. Write member functions to:
1. Read the side length.
2. Calculate the area.
3. Calculate the perimeter.
4. Display the results.
*/

#include <iostream>
using namespace std;

class Square{
    float side;

public:
    void readSide(){
        cout << "Enter the side of the square: ";
        cin >> side;
    }
    float area(){
        return side * side;
    }
    float perimeter(){
        return 4 * side;
    }
    void display(){
        cout << "\nArea = " << area() << endl;
        cout << "Perimeter = " << perimeter() << endl;
    }
};

int main(){
    Square s;
    s.readSide();
    s.display();
    return 0;
}
