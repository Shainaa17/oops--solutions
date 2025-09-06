// Create a class DOB to represent the date of birth in YEAR, MONTH and DAY. Define a copy
// constructor in the class. Define the member functions to read and display the objects of class
// DOB. Define a member function to compute age based on the given object of class DOB. NOTE:
// Assume the current date is 08 July-2021

#include <iostream>
using namespace std;
class DOB{
    public:
    int year,month,day;
    DOB(){
        year=0;
        month=0;
        day=0;
    }
    DOB(int y,int m,int d){
        year=y;
        month=m;
        day=d;
    }
    DOB(const DOB &d){
        year=d.year;
        month=d.month;
        day=d.day;
    }
    void read(){
        cout<<"Enter year, month, day"<<endl;
        cin>>year;
        cin>>month;
        cin>>day;
    }
    void display(){
        cout<<"Date of birth is : "<<day<<"-"<<month<<"-"<<year<<endl;
    }
    void computeAge(){
        int cy=2021;
        int cm=7;
        int cd=8;
        int ay=cy-year;
        int am=cm-month;
        int ad=cd-day;
        if(ad<0){
            ad+=30;
            cm--;
        }
        if(am<0){
            am+=12;
            ay--;
        }
        cout << "Age: " << ay << " years, "
            << am<< " months, "
            << ad << " days" << endl;
    }
};
int main(){
    DOB d1;
    d1.read();
    d1.display();
    d1.computeAge();
    DOB d2=d1;
    d2.display();
    d2.computeAge();
}

// #include <iostream>
// using namespace std;

// class DOB {
//     int year, month, day;

// public:
//     DOB() {
//         year = 0;
//         month = 0;
//         day = 0;
//     }
//     DOB(int y, int m, int d) {
//         year = y;
//         month = m;
//         day = d;
//     }
//     DOB(const DOB &d) {
//         year = d.year;
//         month = d.month;
//         day = d.day;
//     }
//     void read() {
//         cout << "Enter year, month, day: ";
//         cin >> year >> month >> day;
//     }
//     void display() {
//         cout << "Date of Birth: " << day << "-" << month << "-" << year << endl;
//     }
//     void computeAge() {
//         int cYear = 2021, cMonth = 7, cDay = 8; 
//         int ageYear = cYear - year;
//         int ageMonth = cMonth - month;
//         int ageDay = cDay - day;
//         if (ageDay < 0) {
//             ageDay += 30; 
//             ageMonth--;
//         }
//         if (ageMonth < 0) {
//             ageMonth += 12;
//             ageYear--;
//         }
//         cout << "Age: " << ageYear << " years, "
//              << ageMonth << " months, "
//              << ageDay << " days" << endl;
//     }
// };

// int main() {
//     DOB dob1;
//     dob1.read();
//     dob1.display();
//     dob1.computeAge();
//     DOB dob2 = dob1;
//     cout << "\nCopied Object using Copy Constructor:" << endl;
//     dob2.display();
//     dob2.computeAge();

//     return 0;
// }
