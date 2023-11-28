#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 0 and 1 are not prime numbers
    }
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) {
            return false; // If num is divisible by any number from 2 to sqrt(num), it's not prime
        }
    }
    return true;
}

int main() {
    int start_num, end_num;
    cout << "Enter the first number: ";
    cin >> start_num;
    cout << "Enter the second number: ";
    cin >> end_num;

    cout << "Prime numbers in the range " << start_num << " to " << end_num << ": ";
    for (int i = start_num; i <= end_num; i++) {
        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    return 0;
}
