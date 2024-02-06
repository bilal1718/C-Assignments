
#include <iostream>
using namespace std;

 void Find_min_max(int arr[], int size,int * max,int * min){
     for(int i=0; i<size; i++){
        if(arr[i] > *max){
            *max=arr[i];
        }
    };
     for(int i=0; i<size; i++){
        if(arr[i] < *min){
            *min=arr[i];
        }
    };
    cout <<"Maximum is:  " << *max << endl;
    cout <<"Minimum is: " << *min << endl;
}
int main() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        cout << "Enter the value of index " << i << " : ";
        cin >> arr[i];
    }
    int max = arr[0];
    int min = arr[0];
    Find_min_max(arr, 10, &max, &min);
    return 0;
}
