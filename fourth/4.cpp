#include <iostream>
using namespace std;
class Student {
private:
    int RollNo;
    string Name;
public:
    void GetDetails() {
        cout << "Enter student roll number: ";
        cin >> RollNo;
        cout << "Enter name of the student: ";
        cin >> Name;
    }
    void DisplayDetails() {
        cout << RollNo << "\t" << Name << "\t";
    }
    int getRollNo() { return RollNo; }
    string getName() { return Name; }
};
class Marks : public Student {
private:
    int Subject1, Subject2;
public:
    void GetMarks() {
        cout << "Enter the marks of subject 1: ";
        cin >> Subject1;
        cout << "Enter the marks of subject 2: ";
        cin >> Subject2;
    }
    void DisplayMarks() {
        cout << Subject1 << "\t" << Subject2 << "\t";
    }
    int getSubject1() { return Subject1; }
    int getSubject2() { return Subject2; }
};
class Result : public Marks {
private:
    int TotalMarks;
public:
    void CalculateResult() {
        TotalMarks = getSubject1() + getSubject2();
    }
    void DisplayResult() {
        string status = (TotalMarks >= 60) ? "PASSED" : "FAILED";
        cout << TotalMarks << "\t" << status << endl;
    }
};
int main() {
    int n;
    cout << "Enter the number of students: ";
    cin >> n;
    Result students[100]; 
    for (int i = 0; i < n; i++) {
        students[i].GetDetails();
        students[i].GetMarks();
        students[i].CalculateResult();
    }
    cout << "\nRollNo\tName\tSubject1\tSubject2\tTotal\tResult" << endl;
    cout << "-------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) {
        students[i].DisplayDetails();
        students[i].DisplayMarks();
        students[i].DisplayResult();
    }
    cout << "-------------------------------------------------------------" << endl;

    return 0;
}
