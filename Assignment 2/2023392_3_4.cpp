#include <iostream>
using namespace std;
int main(){
    int n,r,fact=1,div=1;
    cout << "Enter the value of N: ";
    cin>>n;
    cout << "Enter the value of r: ";
    cin>>r;
    int division=n-r;
    for(int i=1; i<=n; i++){
        fact*= i;
    }
    for(int i=1; i<=division; i++){
        div*= i;
    }
     cout << (fact/div);
}