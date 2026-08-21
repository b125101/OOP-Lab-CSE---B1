// Q3. Compare Two Digital Cameras - Friend Function
#include <iostream>
#include <string>
using namespace std;

class Camera {
private:
    string brand;
    string model;
    float megapixels;
    float storageCapacity; // in GB

public:
    void inputData() {
        cout << "Enter Brand: ";
        cin >> brand;
        cout << "Enter Model: ";
        cin >> model;
        cout << "Enter Megapixels: ";
        cin >> megapixels;
        cout << "Enter Storage Capacity (GB): ";
        cin >> storageCapacity;
    }

    void display() const {
        cout << "Brand: " << brand << ", Model: " << model
             << ", Megapixels: " << megapixels
             << "MP, Storage: " << storageCapacity << "GB\n";
    }

    friend void compareCamera(const Camera &c1, const Camera &c2);
};

// Friend function definition
void compareCamera(const Camera &c1, const Camera &c2) {
    cout << "\n----- Camera Comparison -----\n";
    const Camera *better;

    if (c1.megapixels > c2.megapixels) {
        better = &c1;
    } else if (c2.megapixels > c1.megapixels) {
        better = &c2;
    } else {
        // same megapixels, compare storage
        better = (c1.storageCapacity >= c2.storageCapacity) ? &c1 : &c2;
    }

    cout << "The better camera is:\n";
    better->display();
    cout << "-------------------------------\n";
}

int main() {
    cout << "Enter details for Camera 1:\n";
    Camera cam1;
    cam1.inputData();

    cout << "\nEnter details for Camera 2:\n";
    Camera cam2;
    cam2.inputData();

    compareCamera(cam1, cam2);

    return 0;
}
