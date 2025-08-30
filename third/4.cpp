#include<iostream>
using namespace std;
class Student {
public:
    string name;
    int age;

    Student(string name, int age) {
        this->name = name;
        this->age = age;
        cout << "Student object created for " << this->name << endl;
    }

    void displayInfo() {
        cout << "Name: " << this->name << endl;
        cout<<"Age: " << this->age << endl;
    }
};

int main() {
    Student s1("Shaina", 19);
    Student* sptr= &s1;
    cout << "Accessing via object (dot operator):" << endl;
    s1.displayInfo();
    cout << "Accessing via pointer (arrow operator):" << endl;
    sptr->displayInfo();

    return 0;
}
