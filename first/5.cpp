#include <iostream>
using namespace std;
class Student{
private :
    string name;
    int roll;
    string degree;
    string hostel;
    float cg;
    
    void updateDegree(){
        cout<<"Enter updated degree : ";
        cin >>degree;
    }    

    void updatecg(){
        cout<<"Enter update CGPA : ";
        cin>>cg;
    }

public:
    void addDetails() {
        cout << "Enter your name: ";
        cin >> name;
        cout << "Enter roll no: ";
        cin >> roll;
        cout << "Enter degree: ";
        cin >> degree;
        cout << "Enter hostel: ";
        cin >> hostel;
        cout << "Enter current CGPA: ";
        cin >> cg;
    }

    void updateDetails() {
        updateDegree(); 
    }

    void updateCGPA()
    {
        updatecg();
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
int main() {
    Student s;
    s.addDetails();
    s.updateDetails();
    s.updateCGPA();
    s.updateHostel();
    s.displayDetails();
    return 0;
}
