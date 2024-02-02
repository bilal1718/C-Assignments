
#include <iostream>
using namespace std;
struct Employee{
    string name;
    int employee_id;
    string department;
    float salary;
    void newEmployee(string name,int employee_id,string department,float salary);
};
void Employee::newEmployee(string name,int employee_id,string department,float salary){
    cout << name << endl;
    cout << employee_id << endl;
    cout << department << endl;
    cout << salary << endl;
}
