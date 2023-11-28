#include <iostream>
using namespace std;
void table(int tableNum,int start,int end){
    for(int i=start; i<=end; i++){
        cout <<tableNum<<" X "<<i<<" = "<<tableNum * i<<endl;
    }
}

int main(){
    int tableNum,start,end;
    cout << "Enter the table number: ";
    cin>>tableNum;
    cout << "Enter the starting point: ";
    cin>>start;
    cout << "Enter the ending point: ";
    cin>>end;
    table(tableNum,start,end);

}