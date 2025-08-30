#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int age;
public:
    Student(string n, int a) {
        name = n;
        age = a;
    }
    friend class Teacher;  
};

class Teacher {
public:
    void showStudent(Student s) {
        cout << "Student Name: " << s.name << endl;
        cout << "Student Age: " << s.age << endl;
    }
};

int main() {
    Student s1("Shaina", 19);
    Teacher t1;

    t1.showStudent(s1);

    return 0;
}
