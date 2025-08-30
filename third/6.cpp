#include <iostream>
using namespace std;

class B; 

class A {
private:
    int value;
public:
    A(int x) { value = x; }
    friend int addValues(A objA, B objB);  
};

class B {
private:
    int value;
public:
    B(int y) { value = y; }
    friend int addValues(A objA, B objB);  
};

int addValues(A objA, B objB) {
    return objA.value + objB.value;  
}

int main() {
    A obj1(15);
    B obj2(25);

    cout << "Sum = " << addValues(obj1, obj2) << endl;

    return 0;
}
