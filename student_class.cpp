#include <iostream>
using namespace std;

class student {
    public:
        string name;
        student () : name("Undefined"), birthyear {0}, phonenumber{""} {} //default constructor
        student (string n, int b, string p) : name(n), birthyear(b), phonenumber(p) {} //parameterized constructor
        
        void printPublicData(){
        cout << "Student: " << name << ". " << "Birth year: " << birthyear << ". " << "Phone number: " << phonenumber << "." << endl;
        }

    protected:
        int birthyear;

    private:
        string phonenumber;

    };

int main() {
    student student1;
    cout << student1.name << endl;
    student student2 ("Paul", 2000, "+ 0123456");
    //cout << student2.name << endl;
    student2.printPublicData ();
    //cout << student1.birthyear << endl; 
    //cout << student1.phonenumber << endl; 
} 