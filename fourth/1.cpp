#include <iostream>
using namespace std;

class Base {
public:
    int pub = 1;
protected:
    int prot = 2;
private:
    int priv = 3;
};
class DerivedPublic : public Base {
public:
    void show() {
        cout << "\n[Public Inheritance]" << endl;
        cout << "pub = " << pub << endl;    
        cout << "prot = " << prot << endl;  
        // cout << priv; 
    }
};
class DerivedProtected : protected Base {
public:
    void show() {
        cout << "\n[Protected Inheritance]" << endl;
        cout << "pub = " << pub << endl;    
        cout << "prot = " << prot << endl;  
    }
};
class DerivedPrivate : private Base {
public:
    void show() {
        cout << "\n[Private Inheritance]" << endl;
        cout << "pub = " << pub << endl;    // ✅ accessible
        cout << "prot = " << prot << endl;  // ✅ accessible
    }
};

int main() {
    DerivedPublic d1;
    d1.show();
    cout << "Outside access to d1.pub = " << d1.pub << endl; // ✅ still public
    DerivedProtected d2;
    d2.show();
    DerivedPrivate d3;
    d3.show();

    return 0;
}
