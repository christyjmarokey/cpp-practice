#include <iostream>
#include <string>
using namespace std;

class month {
    public:
        int monthNumber;
        string monthName;
        month (){
            monthNumber = 0;
            monthName = "";
        }
        month (int m){
            monthNumber = m;
            monthName = getMonthName(m);
        }
        month (string mN){
            monthName = mN;
            monthNumber = getMonthNumber(mN);
        }
        void printData(){
            cout << "Month Number: " << monthNumber << endl;
            cout << "Month Name: " << monthName << endl;
        }
        private:
        string getMonthName(int m){
            switch(m){
                case 1: return "January";
                case 2: return "February";
                case 3: return "March";
                case 4: return "April";
                case 5: return "May";
                case 6: return "June";
                case 7: return "July";
                case 8: return "August";
                case 9: return "September";
                case 10: return "October";
                case 11: return "November";
                case 12: return "December";
                default: return "Invalid month number";
            }
        }
        int getMonthNumber(string mN){
            if(mN == "January") return 1;
            else if(mN == "February") return 2;
            else if(mN == "March") return 3;
            else if(mN == "April") return 4;
            else if(mN == "May") return 5;
            else if(mN == "June") return 6;
            else if(mN == "July") return 7;
            else if(mN == "August") return 8;
            else if(mN == "September") return 9;
            else if(mN == "October") return 10;
            else if(mN == "November") return 11;
            else if(mN == "December") return 12;
            else return -1; // Invalid month name
        }
};

int main() {
    month month0, month1(5), month2("July");

    month1.printData();
    month2.printData();

    return 0;
}