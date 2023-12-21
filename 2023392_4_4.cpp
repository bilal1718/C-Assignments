#include <iostream>
#include <string>
using namespace std;
void reverseString(char* str) {
    int length = static_cast<int>(string(str).length());
    for (int i = 0, j = length - 1; i < j; ++i, --j) {
        char temp = *(str + i);
        *(str + i) = *(str + j);
        *(str + j) = temp;
    }
}
int main() {
    cout << "Enter a string: ";
    string userInput;
    getline(cin, userInput);
    char* dynamicString = new char[userInput.length() + 1];
    copy(userInput.begin(), userInput.end(), dynamicString);
    dynamicString[userInput.length()] = '\0';
    reverseString(dynamicString);
    cout << "Reversed string: " << dynamicString << endl;
    delete[] dynamicString;
    return 0;
}
