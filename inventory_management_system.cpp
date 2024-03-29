#include <iostream>
using namespace std;

class Product {
private:
    string name;
    double price;
    int quantityInStock;

public:
    Product() {
        name = "";
        price = 0.0;
        quantityInStock = 0;
    }

    Product(string n, double p, int q) {
        name = n;
        price = p;
        quantityInStock = q;
    }

    void updateQuantity(int quantity) {
        quantityInStock += quantity;
    }

    void setName(string n) {
        name = n;
    }

    void setPrice(double p) {
        price = p;
    }

    void setQuantity(int q) {
        quantityInStock = q;
    }

    friend ostream & operator << (ostream & print, Product p) {
        print << "Name: " << p.name << ", Price: " << p.price << ", Quantity in Stock: " << p.quantityInStock << endl;
        return print;
    }

    friend class InventoryManager;
};

class InventoryManager {
private:
    static int totalProducts;

public:
    static void displayTotalProducts() {
        cout << "Total Products in Inventory: " << totalProducts << endl;
    }

    friend void updateInventory(Product& p, int quantity);
};

int InventoryManager::totalProducts = 0;

void updateInventory(Product& p, int quantity) {
    p.updateQuantity(quantity);
    InventoryManager::totalProducts += quantity;
}

int main() {
    int choice;
    Product product1;
    Product product2;
    Product product3;
    Product product4;

    do {
        cout << "---------------------------------------------" << endl;
        cout << "  Inventory Management System   " << endl << endl;
        cout << " 1-  Add new product " << endl;
        cout << " 2-  Update Quantity" << endl;
        cout << " 3-  Total Number of Products In Inventory" << endl;
        cout << " 4-  Details of All Products In Inventory" << endl;
        cout << " 5-  Exit " << endl;
        cout << "------------------------------------------------------------------------------" << endl;

        cout << "Enter your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                product1.setName("Product1");
                product1.setPrice(120);
                product1.setQuantity(5);
                cout << "Product1 Added successfully" << endl;

                product2.setName("Product2");
                product2.setPrice(140);
                product2.setQuantity(15);
                cout << "Product2 Added successfully" << endl;

                product3.setName("Product3");
                product3.setPrice(120);
                product3.setQuantity(5);
                cout << "Product3 Added successfully" << endl;

                product4.setName("Product4");
                product4.setPrice(140);
                product4.setQuantity(15);
                cout << "Product4 Added successfully" << endl;
                break;

            case 2:
                updateInventory(product1, 20);
                cout << "Product1 Quantity Updated" << endl;
                updateInventory(product2, -10);
                cout << "Product2 Quantity Updated" << endl;
                updateInventory(product3, 5);
                cout << "Product3 Quantity Updated" << endl;
                updateInventory(product4, -2);
                cout << "Product4 Quantity Updated" << endl;
                break;

            case 3:
                InventoryManager::displayTotalProducts();
                break;

            case 4:
                cout << product1 << endl;
                cout << product2 << endl;
                cout << product3 << endl;
                cout << product4 << endl;
                break;

            case 5:
                cout << "Good Bye " << endl;
                break;

            default:
                cout << "Enter the valid choice: ";
                break;
        }
    } while (choice != 5);

    return 0;
}
