#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    int birthYear;
    string studyProgram;
    Student(string n, int bY, string sP) {
        name = n;
        birthYear = bY;
        studyProgram = sP;
    }
    void printPublicData() {
        cout << "Name: " << name << endl;
        cout << "Birth Year: " << birthYear << endl;
        cout << "Study Program: " << studyProgram << endl;
    }
};
int main(){
    Student student1("Alice", 2000, "Computer Science");
    Student student2("Bob", 1999, "Mathematics");
    student1.printPublicData();
    student2.printPublicData();
    return 0;
}