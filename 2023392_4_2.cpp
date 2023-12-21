#include <iostream>
#include <string>
using namespace std;
bool isPalindrome(const string word, int start, int end){
    if (start >= end) {
        return true;
    }
    while (start < end && !isalpha(word[start])) {
        start++;
    }
    while (start < end && !isalpha(word[end])) {
        end--;
    }

    if (tolower(word[start]) != tolower(word[end])) {
        return false;
    }
    return isPalindrome(word,start+1,end-1);
}
int main(){
    string word;
    cout << "Enter a string: ";
    getline(cin,word);
    if(isPalindrome(word,0,word.length()-1)){
        cout << "It is a palindrome";
    }else{
        cout << "It is not a palindrome";
    }
}