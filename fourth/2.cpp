#include <iostream>
using namespace std;
class Number {
protected:
    int num;
public:
    void read() {
        cout << "Enter a number: ";
        cin >> num;
    }
};
class Square : public Number {
public:
    void getSquare() {
        cout << "Square of " << num << " = " << (num * num) << endl;
    }
};
class Cube : public Number {
public:
    void getCube() {
        cout << "Cube of " << num << " = " << (num * num * num) << endl;
    }
};
int main() {
    Square s;
    Cube c;
    cout << "For Square calculation:" << endl;
    s.read();
    s.getSquare();
    cout << "For Cube calculation:" << endl;
    c.read();
    c.getCube();

    return 0;
}
