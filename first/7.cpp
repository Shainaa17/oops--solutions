#include <iostream>
using namespace std;

class Complex {
private:
    float real;
    float imaginary;

public:
    void set() {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imaginary;
    }

    void display() {
        if (imaginary >= 0)
            cout << real << " + " << imaginary << "i" << endl;
        else
            cout << real << " - " << -imaginary << "i" << endl;
    }

    Complex Sum(Complex c2) {
        Complex result;
        result.real = real + c2.real;
        result.imaginary = imaginary + c2.imaginary;
        return result;
    }
};

int main() {
    Complex c1, c2, c3;
    cout << "Enter first complex number:";
    c1.set();
    cout << "Enter second complex number:";
    c2.set();
    c3 = c1.Sum(c2);
    cout << "First complex number is: ";
    c1.display();
    cout << "Second complex number is: ";
    c2.display();
    cout << "Sum is: ";
    c3.display();
    return 0;
}

