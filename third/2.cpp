#include <iostream>
using namespace std;
class Rectangle {
    private:
    int length, breadth;
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
    //default constructor
    // Rectangle(int l = 0, int b = 0) {
    //     length = l;
    //     breadth = b;
    // }
    int area() {
        return length * breadth;
    }
    ~Rectangle() {
        cout<<"deconstructor called"<<endl;
    }
};

int main() {
    Rectangle rect[3] = {
         Rectangle(), 
         Rectangle(5), 
         Rectangle(4, 6) };
    for (int i = 0; i < 3; i++) {
        cout << "Area of Rectangle = " << rect[i].area() << endl;
    }

    return 0;
}

//deconstructors are called when the object goes out of scope (or explicitly deleted if dynamically allocated with new).
