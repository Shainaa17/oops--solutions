#include <iostream>
using namespace std;
class Shaina {
public:
    void display() const; 
};
void Shaina::display() const {
    cout << "Hello World!" << endl;
    //cannot modify data here due to const
}

int main() {
    Shaina s;
    s.display();
    return 0;
}
