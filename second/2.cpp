#include <iostream>
using namespace std;
class Rectangle{
    public:
    int length;
    int breadth;
    void getData(){
        cout<<"Enter  Length: ";
        cin>>length;
        cout<<"Enter breadth: ";
        cin>>breadth;
    }
    void display(){
        cout<<"Length: "<<length<<endl;
        cout<<"Breadth: "<<breadth<<endl;
    }
};
int main(){
    Rectangle r[2];
    cout<<"Enter deatils of rectangles"<<endl;
    for(int  i=0;i<2;i++){
        r[i].getData();
    }
    cout<<"The areas of rectangles are as follows: "<<endl;
    for(int i=0;i<2;i++){
        r[i].display();
        cout<<"The area is: "<<r[i].length*r[i].breadth<<endl;
    }
    return 0;
}
