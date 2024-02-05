#include <iostream>
using namespace std;
struct Employee{
    string name;
    int employee_id;
    string department;
    float salary;
};
void newEmployee(Employee &e1){
   cout <<" Enter the name: "<< endl;
    cin >> e1.name;
    cout <<" Enter the id: "<< endl;
    cin >> e1.employee_id;
    cout <<" Enter the department: "<< endl;
    cin >> e1.department;
    cout <<" Enter the salary: "<< endl;
    cin >> e1.salary;
}
void displayEmployeeDetails(Employee &e1,int id){
    if(e1.employee_id==id){
       cout << "The employee name is " << e1.name << endl;
    cout << "The employee department is " << e1.department << endl;
    cout << "The employee salary is " << e1.salary << endl;
    }else{
        cout << "Employee not found: Enter correct id";
    }
}
int main(){
    Employee e1;
    int employeeSalary[3];
    int n=3;
    int id;
    for(int i=0; i<n; i++){
       newEmployee(e1);
       employeeSalary[i]=e1.salary;
    }
    int sum=0;
   cout << "Enter the employee id: "<< endl;
   cin >> id;
   displayEmployeeDetails(e1,id);
   char choice;
   cout << "Do you want to see total salary of all employees? ";
   cin >> choice;
   if(choice='y'){
   for(int i=0; i<n; i++){
   sum+= employeeSalary[i];
   }
    cout << sum;
   }else{
   cout <<"Good Bye!";
   }
    return 0;
}
