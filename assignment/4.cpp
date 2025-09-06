#include <iostream>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    int marks[5];
     Student() {
        roll = 0;
        name = "";
        for (int i = 0; i < 5; i++) marks[i] = 0;
    }
    Student(int r, string n,int m[5]){
        roll=r;
        name=n;
        for(int i=0;i<5;i++){
            marks[i]=m[i];
        }
    }

    void average(Student s[5]) {
        int sum[5] = {0}; 
        for (int i = 0; i < 5; i++) {           
            for (int j = 0; j < 5; j++) {      
                sum[j] += s[i].marks[j];
            }
        }
        cout << "\nAverage marks in each subject:" << endl;
        for (int j = 0; j < 5; j++) {
            cout << "Subject " << (j + 1) << " : " << (sum[j] / 5.0) << endl;
        }
    }
};


int main(){
    cout<<"Enter names and marks of all students : "<<endl;
    string name;
    int roll;
    int marks[5];
    Student stu[5]; //default constructor needs to be added
    for(int i=0;i<5;i++){
        cout<<"Enter name : "<<endl;
        cin>>name;
        cout<<"Enter roll no. : "<<endl;
        cin>>roll;
        cout<<"enter marks in five subjects : "<<endl;
        for(int j=0;j<5;j++){
            cin>>marks[j];
        }
        stu[i]=Student(roll,name,marks);
    }
    stu[0].average(stu); //how to call
}

