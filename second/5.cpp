#include<iostream>
using namespace std;
int var = 10;

class ClassName {
public:
    static int var;
};

int ClassName::var = 20;

int main() {
    int var = 15;

    cout <<"Global :"<< ::var;
    cout <<"Static: "<<ClassName::var;
    cout <<"Local: "<< var;
}
