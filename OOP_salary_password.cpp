#include <iostream>
using namespace std;

class Lecturer {
public:
string name;
Lecturer(string n): name{n}, salary{100} {}
void setSalary(int s){
    int n_tries = 1;
    string p_word = "qwer123";
    string userinput;
    while (n_tries > 0){
        cout << "Enter the Password" << endl;
        cin >> userinput;
        if (userinput == p_word){
            cout << "Password Accepted and Access granted" << endl;
            salary = s;
            return;
        }
        else{
            n_tries--;
            if (n_tries > 0){
            cout << "Password is wrong " << n_tries <<" tries left" << endl;
            }
            else{
                cout << "Passowrd is wrong and no more tries" << endl;
            }
        }
    }
}
int getSalary() {return salary;}
private:
int salary;
};
int main() {
Lecturer prof1("Nguyen");
cout << prof1.name << endl;
cout << prof1.getSalary() << endl;
prof1.setSalary(200);
cout << prof1.getSalary() << endl;
return 0;
}