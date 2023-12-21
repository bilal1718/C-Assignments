#include <iostream>
using namespace std;

void doubleElements(int myArray[], int n) {
    for (int i = 0; i < n; i++) {
        myArray[i] *= 2;
        cout <<  "The value after doubling: " << myArray[i] << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;

    int* myArray = new int[n];

    for (int i = 0; i < n; i++) {
        cout << "Enter the value of index " << i << " : ";
        cin >> myArray[i];
    }
    cout << endl;
        cout << " *********************************** "<<endl;
     for (int i = 0; i < n; i++) {
        cout << "The value before doubling: " << myArray[i] << endl;
    }
    cout << endl;
        cout << " *********************************** "<<endl;
    doubleElements(myArray, n);

    delete[] myArray;

    return 0;
}
