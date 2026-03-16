#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Enter the number of students: ";
    int numStudents;
    string name;
    double grade;
    cin >> numStudents;
    for (int i=0; i<numStudents; i++) {
        cout << "Enter the name of student " << (i+1) << ": ";
        cin >> name;
        cout << "Enter the grade of " << name << ": ";
        cin >> grade;
    }
            cout << "Student: " << name << ", Grade: " << grade << endl;
    return 0;
}