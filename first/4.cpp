#include <iostream>
using namespace std;
struct Student
{
    string name;
    int roll;
    string degree;
    string hostel;
    float cg;

    void addDetails()
    {
        cout << "enter your name : ";
        cin >> name;
        cout << "enter roll no : ";
        cin >> roll;
        cout << "enter degree : ";
        cin >> degree;
        cout << "enter hostel : ";
        cin >> hostel;
        cout << "enter current CGPA : ";
        cin >> cg;
    }

    void updateDetails()
    {
        cout << "enter updated degree : ";
        cin >> degree;
    }

    void updateCGPA()
    {
        cout << "enter updated cgpa : ";
        cin >> cg;
    }

    void updateHostel()
    {
        cout << "enter updated hostel : ";
        cin >> hostel;
    }

    void displayDetails()
    {
        cout << "Details of student are : " << endl;
        cout << "Name is : " << name<<endl;
        cout << "Roll no. is : " << roll<<endl;
        cout << "Degree is : " << degree<<endl;
        cout << "Hostel is : " << hostel<<endl;
        cout << "Current CGPA is : " << cg<<endl;
    }
};

int main()
{
    Student s;
    s.addDetails();
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();
    return 0;
}