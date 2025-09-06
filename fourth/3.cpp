#include <iostream>
using namespace std;
class Fruit {
protected:
    int count;  
public:
    Fruit() { count = 0; }
    void set(int c) { count = c; }
    int get() { return count; }
};
class Apples : public Fruit {
public:
    void show() {
        cout << "Number of Apples = " << count << endl;
    }
};
class Mangoes : public Fruit {
public:
    void show() {
        cout << "Number of Mangoes = " << count << endl;
    }
};
int main() {
    Apples a;
    Mangoes m;
    int appleCount, mangoCount;
    cout << "Enter number of apples: ";
    cin >> appleCount;
    cout << "Enter number of mangoes: ";
    cin >> mangoCount;
    a.set(appleCount);
    m.set(mangoCount);
    cout << "Basket Details" << endl;
    a.show();
    m.show();
    int total = a.get() + m.get();
    cout << "Total Fruits in Basket = " << total << endl;

    return 0;
}
