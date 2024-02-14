#include <iostream>
using namespace std;

struct Rectangle {
    double length;
    double width;
    void calculateArea() {
        cout << length * width;
}
};

int main() {
    Rectangle r1;
    r1.length = 15;
    r1.width = 5;
    r1.calculateArea();
    return 0;
}
