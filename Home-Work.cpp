#include <iostream>
using namespace std;
typedef int Code;
enum ProductCategory {
    Smartphones,
    Laptops,
    AudioDevices,
    Cameras
};

union ProductDetails {
    int storage;
    float weight;
};

struct Product {
    ProductCategory category;
    ProductDetails Storage;
    ProductDetails Weight;
    Code code;
};

int main() {
    Product product;
    int categoryInput;
    cout << "Enter the product category (0: Smartphones, 1: Laptops, 2: Audio Devices, 3: Cameras): ";
    cin >> categoryInput;
    cout << "Enter a unique product code: ";
    cin >> product.code;
    switch (categoryInput) {
        case Smartphones:
         cout << "Enter the storage for smartphone : ";
         cin >> product.Storage.storage;
         cout << "Enter the weight for smartphone : ";
         cin >> product.Weight.weight;
            break;
        case Laptops:
        cout << "Enter the storage for laptop : ";
         cin >> product.Storage.storage;
         cout << "Enter the weight for laptop : ";
         cin >> product.Weight.weight;
            break;
        case AudioDevices:
        cout << "Enter the storage for Audio Devices : ";
         cin >> product.Storage.storage;
         cout << "Enter the weight for Audio Devices : ";
         cin >> product.Weight.weight;
            break;
        case Cameras:
        cout << "Enter the storage for Cameras : ";
         cin >> product.Storage.storage;
         cout << "Enter the weight for Cameras : ";
         cin >> product.Weight.weight;
            break;
    }
    cout << "Product Information:" << endl;
    switch (categoryInput)
    {
    case 0:
        cout << "SmartPhones" << endl;
        break;
    case 1:
        cout << "Laptops" << endl;
        break;
     case 2:
        cout << "Audio Devices" << endl;
        break;

    case 3:
        cout << "Cameras" << endl;
        break;
    default:
    cout << "Invalid Input";
        break;
    }
    cout << "Storage Capacity: " << product.Storage.storage << " GB" <<endl;
    cout << "Weight: " << product.Weight.weight << " kg" << endl;
    cout << "Product Code: " << product.code << endl;
    return 0;
}
