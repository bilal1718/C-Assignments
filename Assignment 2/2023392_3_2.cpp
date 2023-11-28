#include <iostream>
#include <cmath>
using namespace std;

void sequence(int n) {
    for (int i = 1; i <= n; ++i) {
        cout << pow(2, i) - 2 << " , ";
    }
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    sequence(n);
    return 0;
}
