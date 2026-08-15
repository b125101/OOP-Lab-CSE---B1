/*
6. Dynamic Array of Objects – Product Details
Create a class named Product containing:
• Product ID
• Product Name
• Price
• Quantity
Dynamically allocate memory for n Product objects. Accept the details of all products
and display the total cost of each product as well as the overall inventory value.
*/

#include <iostream>
#include <string>
using namespace std;

class Product {
    int productID;
    string name;
    float price;
    int quantity;

public:
    void input() {
        cout << "Enter Product ID: ";
        cin >> productID;
        cin.ignore();
        cout << "Enter Product Name: ";
        getline(cin, name);
        cout << "Enter Price: ";
        cin >> price;
        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    float cost() {
        return price * quantity;
    }
    void display() {
        cout << productID << "\t"
             << name << "\t"
             << price << "\t"
             << quantity << "\t"
             << cost() << endl;
    }
};

int main() {
    int n;
    float total = 0;
    cout << "Enter number of products: ";
    cin >> n;
    Product *p = new Product[n];
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of Product " << i + 1 << ":\n";
        p[i].input();
    }
    cout << "\nID\tName\tPrice\tQuantity\tCost\n";
    for (int i = 0; i < n; i++) {
        p[i].display();
        total += p[i].cost();
    }
    cout << "\nOverall Inventory Value = " << total << endl;
    delete[] p;

    return 0;
}