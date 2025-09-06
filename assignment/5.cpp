#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    int sal;
    Employee(){
        id=0;
        name=" ";
        sal=0;
    }
    Employee(int i,string n,int s){
        id=i;
        name=n;
        sal=s;
    }
    static void great(Employee emp[]){
        for(int i=0;i<5;i++){
            if(emp[i].sal>1000){
                cout<<"Employee : "<<emp[i].name<<endl;
            }
        }
    }
};
int main(){
    Employee emp[5];
    cout<<"Enter details of five employees"<<endl;
    for(int i=0;i<5;i++){
        cout<<"Enter name : ";
        cin>>emp[i].name;
        cout<<"Enter employee id : "<<endl;
        cin>>emp[i].id;
        cout<<"Enter employee salary : "<<endl;
        cin>>emp[i].sal;
    }
    
    Employee::great(emp);
}