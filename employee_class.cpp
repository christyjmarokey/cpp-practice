#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
        string name;
        Employee (string n, int s) : name(n), salary(s) {}
        friend void displaySalary (Employee emp);
    protected:
        int salary;
};

    void displaySalary (Employee emp) {
    cout << "Name: " << emp.name << " Salary: " << emp.salary << endl;
    };

class Lecturer : public Employee{
    public:
        string studyProgram;
        Lecturer (string n,int s): Employee(n, s) {}
        void setStudyProgram(string p){
            studyProgram = p;
        };
        void printPublicInfo() {
            cout << "Name: " << name << endl;
            cout << "Study Program: " << studyProgram << endl;
        }

};

int main() {
    Employee person1 ("Anonymous", 10000);
    //cout << person1.name;
    displaySalary(person1);

    Lecturer prof1("Incognito", 1500);
    //cout << prof1.name << endl;
    prof1.setStudyProgram("Drone Engineering");
    //cout << "Study Program: " << prof1.studyProgram << endl;
    prof1.printPublicInfo();
    return 0;
}