#include <iostream>
using namespace std;
union Value{
    float a;
    int b;
    char c;
};
void printValue(float a,int b,char c){
    cout << "The type is " << a << endl;
    cout << "The type is " << b << endl;
    cout << "The type is " << c << endl;
}
int main(){
    Value v1;
    v1.a=1.2;
    v1.b=14;
    v1.c='a';
    printValue(v1.a,v1.b,v1.c);
    return 0;
}