#include <iostream>
using namespace std;
int var = 10;
int main() {
int var = 20; 
cout << "Global variable : "<<::var<<endl; 
cout << "Local variable  :"<<var; 
}