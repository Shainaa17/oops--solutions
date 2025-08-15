#include <iostream>
using namespace std;
class Shaina{
public:
static int value;
};
int Shaina::value = 100;
int main(){
    cout<<"value of static member is : "<<Shaina::value;
}