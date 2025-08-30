#include <iostream>
using namespace std;
class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(){
        length=0;
        breadth=0;
    }
    Rectangle(int l,int b){
        length=l;
        breadth=b;
    }
    Rectangle(int side){
        length=side;
        breadth=side;
    }
    int area(){
        return length*breadth;
    }
};
int main(){
    Rectangle r1;
    cout<<r1.area()<<endl;
    Rectangle r2(5,10);
    cout<<r2.area()<<endl;
    Rectangle r3(5);
    cout<<r3.area()<<endl;
}