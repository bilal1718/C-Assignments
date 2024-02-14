#include <iostream>
#include <string>
using namespace std;

string enrdecr(string message, string key) {
    string output = message;
    for (int i = 0; i < message.length(); i++) {
        output[i] = message[i] ^ key[i % key.length()];
    }
    return output;
}
int main() {
    string message;
    string key;
    cout << "Enter the message: ";
    getline(cin, message);
    cout << "Enter the key: ";
    getline(cin, key);
    string encryptedMessage = enrdecr(message, key);
    cout << "Encrypted Message: " << encryptedMessage << endl;
    string decryptedMessage = enrdecr(encryptedMessage, key);
    cout << "Decrypted Message: " << decryptedMessage << endl;
    return 0;
}
