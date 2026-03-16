#include <iostream>
#include <string>
using namespace std;
class Car {
    public:
    string brand;
    string model;
    int year;
    int price;
    Car (string b, string m, int y, int p):
    brand{b}, model{m},year{y},price{p}{}
    void printPublicData(){
        cout << brand << "," << model << "," << year << "," << price << endl;
    }
};
int main(){
    Car car1("BMW","X1", 2022, 100000);
    Car car2("Benz", "C Class", 2024 , 1000);
    car1.printPublicData();
    car2.printPublicData();
    return 0;
}