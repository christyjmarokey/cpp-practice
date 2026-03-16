#include <iostream>
#include <string>
using namespace std;

class Dog {
public:
    string type;
    bool gender;
    int weight;
    Dog(string t, bool g, int w) {
        type = t;
        gender = g;
        weight = w;
    }
    void printData(){
        cout << "Type: " << type << endl;
        cout << "Gender: " << gender << endl;
        cout << "Weight: " << weight << endl;
    }
    void printBark(){
        cout << "Woop woop woop!" << endl;
    }
};

int main() {
    Dog dog1("Bulldog", true, 30);
    Dog dog2("Poodle", false, 20);
    dog1.printData();
    dog1.printBark();
    dog2.printData();
    dog2.printBark();
    return 0;
}