#include <iostream>
using namespace std;
namespace Print{
    void show(){
        cout<<"Hello World"<<endl;
    }
}
namespace Var{
    int x=10;
    void display(){
        cout<<"Number is : "<<x;
    }
}
int main(){
    Print :: show();
    Var :: display();
    return 0;
}
// #include <iostream>
// using namespace std;

// namespace First {
//     int x = 10;
//     void show() {
//         cout << "Namespace First, x = " << x << endl;
//     }
// }

// namespace Second {
//     int x = 20;
//     void show() {
//         cout << "Namespace Second, x = " << x << endl;
//     }
// }

// int main() {
//     First::show();
//     Second::show();

//     cout << "First::x + Second::x = " << First::x + Second::x << endl;
//     return 0;
// }
