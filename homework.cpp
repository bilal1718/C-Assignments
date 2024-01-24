#include <iostream>
using namespace std;

struct course {
    string name;
    int code;
    int credit_hours;
    string instructor;
    char grade;
    void Display_Course_Details();
};

struct student {
    string name;
    int reg_num;
    int batch;
    course c2[4];
};

void course::Display_Course_Details() {
    cout << "Course Name: " << name << endl;
    cout << "Course Code: " << code << endl;
    cout << "Credit Hours: " << credit_hours << endl;
    cout << "Instructor: " << instructor << endl;
    cout << "Grade: " << grade << endl;
}

void displayStudentData(const student s) {
    cout << "Name: " << s.name << endl;
    cout << "Registration Number: " << s.reg_num << endl;
    cout << "Batch: " << s.batch << endl;
}

int main() {
    student s1;
    s1.name = "Muhammad Bilal";
    s1.reg_num = 2023392;
    s1.batch = 33;
    s1.c2[0] = {"OOPS", 112, 3, "Sir Said Nabi", 'A'};
    s1.c2[1] = {"HM", 102, 2, "Sir Jadoon", 'A'};
    s1.c2[2] = {"PH", 101, 3, "Sir Tahir Naseem", 'B'};
    s1.c2[3] = {"MT", 101, 3, "Sir Fahad Sikander", 'A'};
    displayStudentData(s1);
    cout << endl;
    for (int i = 0; i < 4; i++) {
        s1.c2[i].Display_Course_Details();
        cout << endl;
    }

    return 0;
}
