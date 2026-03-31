#include <iostream>
using namespace std;

class Student {
    public:
    string name;
    Student (string n, string addr): name {n}, address{addr} {}
    void setPhoneNumber(string p) {
        phoneNumber = p;
    }
    protected:
        string phoneNumber;
    private:
        string address = "Unknown";
};

class Graduate : public Student {
    public:
        string job;
        Graduate (string n, string addr): Student (n, addr) {}
        void displayPhoneNumber() {
            cout << phoneNumber << endl;
        }
    
};

int main() {
    Graduate grad1("Anna", "Kufstein 1234");
    grad1.job = "engineer";
    cout << grad1.name << " is a " << grad1.job << endl;
    grad1.setPhoneNumber("123456789");
    grad1.displayPhoneNumber();
    return 0;
}