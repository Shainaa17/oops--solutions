#include <iostream>
using namespace std;

class B; 
class A {
private:
    int value;
public:
    A(int x) { 
        value = x; 
    }
    void show() { 
        cout << "A: " << value << endl; 
    }

    friend void swapValues(A &objA, B &objB);
};

class B {
private:
    int value;
public:
    B(int y) { value = y; }
    void show() { cout << "B: " << value << endl; }

    friend void swapValues(A &objA, B &objB);
};

void swapValues(A &objA, B &objB) {
    int temp = objA.value;
    objA.value = objB.value;
    objB.value = temp;
}

int main() {
    A obj1(5);
    B obj2(6);
    cout << "Before swapping:" << endl;
    obj1.show();
    obj2.show();
    swapValues(obj1, obj2);
    cout << "After swapping:" << endl;
    obj1.show();
    obj2.show();

    return 0;
}
