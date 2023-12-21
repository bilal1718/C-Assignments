#include <iostream>
using namespace std;


int calculateAverage(int sum, int subjects=3){
    double average=sum/subjects;
    return average;
}
void calculateGrade(int average){
    char Grade;
    if(average >=90 && average <=100){
        Grade='A';
    }else if(average >=80 && average <=89){
        Grade='B';
    }else if(average >=70 && average <=79){
        Grade='C';
    }else if(average >=60 && average <=69){
        Grade='D';
    }else if(average < 60){
        Grade='F';
    }else{
        cout << "Marks are incorrect"<<endl;
    }
    cout << "Grade: "<<Grade << endl;
}
int main(){
    int numstud;
    const int max_students=100;
    int sum;
    cout << "Enter the number of students: ";
    cin >> numstud;
     if (numstud <= 0 || numstud > max_students) {
        cout << "Invalid number of students. Exiting." << endl;
        return 1;
    }
    int students[max_students][3]={};
    for(int i=0; i<numstud; i++){
    sum = 0;
        for(int j=0; j<3; j++){
        cout << "Enter the numbers of subject " << j +1 <<" of student " << i+1 <<" : " ;
         cin >> students[i][j];
         sum +=students[i][j];
        }
        double average=calculateAverage(sum,3);
        cout << "Average of " << " student "<< i+1 << " is : " <<average<< endl;
        calculateGrade(average);
    }
    return 0;

}