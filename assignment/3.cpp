#include <iostream>
using namespace std;
class Tf; //forward declaration

class Tc{
    public:
    int c;
    Tc(){
        c=0;
    }
    void set(){
        cout<<"Enter temperature : "<<endl;
        cin>>c;
    }
    void get(){
        cout<<"Temp is : "<<c<<endl;
    }

    friend Tc addTemp(Tc,Tf);
};
class Tf{
    public:
    int f;
    Tf(){
        f=0;
    }
    void set(){
        cout<<"Enter temperature : "<<endl;
        cin>>f;
    }
    void get(){
        cout<<"Temp is : "<<f<<endl;
    }

    friend Tc addTemp(Tc,Tf);
};

Tc addTemp(Tc t1, Tf t2) {
    Tc temp;
    int result = (t2.f - 32) / 1.8;
    temp.c = t1.c + result;
    return temp;
}

int main(){
    Tc obj1;
    Tf obj2;
    obj1.set();
    obj1.get();
    obj2.set();
    obj2.get();

    Tc result = addTemp(obj1, obj2); 
    cout << "After adding (in Celsius): ";
    result.get();

    return 0;
}