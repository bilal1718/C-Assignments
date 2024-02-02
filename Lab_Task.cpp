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
int main(){
    Employee e1;
    e1.name="Bilal";
    e1.employee_id=1;
    e1.department="Software Engineering";
    e1.salary=10000;
    e1.newEmployee(e1.name,e1.employee_id,e1.department,e1.salary);

    return 0;
}
