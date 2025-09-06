#include <iostream>
using namespace std;
class Example{
    static int x;
    public:
        // static void display(){
        //     cout<<x<<endl;
        // }
        static void display();
};
void Example::display(){
    cout<<x<<endl;
}
int Example::x=1;
int main(){
    Example e1,e2;
    e1.display();
    e2.display();
    Example::display(); //without creating object
    return 0;
}