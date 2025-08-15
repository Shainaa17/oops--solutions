#include <iostream>
using namespace std;
inline int cube(int x){
    return x*x*x;
}
int main(){
    int num;
    cout<<"enter a number";
    cin>>num;
    cout<<"cube of number is : ";
    cout<<cube(num);
}