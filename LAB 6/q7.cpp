#include <iostream>
using namespace std;
class InventoryItem {
    int productID, quantity;
    double unitPrice;
public:
    InventoryItem(int id, double price, int qty) {
        productID = id;
        unitPrice = price;
        quantity = qty;
    }
    InventoryItem operator+(const InventoryItem& item) const {
        if (productID != item.productID ||
            unitPrice != item.unitPrice) {
            cout << "Incompatible inventory items." << endl;
            return InventoryItem(-1, 0, 0);
        }
        return InventoryItem(productID, unitPrice,
                             quantity + item.quantity);
    }
    void display() const {
        if (productID == -1) {
            cout << "Invalid inventory item." << endl;
            return;
        }

        cout << "Product ID: " << productID << endl;
        cout << "Unit price: Rs. " << unitPrice << endl;
        cout << "Quantity: " << quantity << endl;
    }
};

int main() {
    int id1, id2, q1, q2;
    double p1, p2;

    cout << "Enter first item (ID price quantity): ";
    cin >> id1 >> p1 >> q1;

    cout << "Enter second item (ID price quantity): ";
    cin >> id2 >> p2 >> q2;

    if (p1 < 0 || p2 < 0 || q1 < 0 || q2 < 0) {
        cout << "Price and quantity cannot be negative." << endl;
        return 0;
    }

    InventoryItem i1(id1, p1, q1);
    InventoryItem i2(id2, p2, q2);

    cout << "\nFirst item:" << endl;
    i1.display();

    cout << "\nSecond item:" << endl;
    i2.display();

    cout << "\nCombined inventory:" << endl;
    InventoryItem result = i1 + i2;
    result.display();

    cout << "\nOriginal first item:" << endl;
    i1.display();

    return 0;
}
