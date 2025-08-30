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
    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student* s1 = new Student("Shaina", 19);

    cout << "Student details (dynamic allocation):" << endl;
    s1->show();
    delete s1;

    return 0;
}
