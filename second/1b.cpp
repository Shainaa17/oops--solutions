#include <iostream>
using namespace std;
class Box
{
public:
    int length;
    void setLength(int l)
    {
        length = l;
    }
    void display()
    {
        cout << "Length: " << length << endl;
    }
};
Box modifyByValue(Box *b)
{
    b->length += 5; 
    return *b;     
}
int main()
{
    Box box1;
    box1.setLength(10);
    cout << "Original: "<<endl;
    box1.display();
    Box box2 = modifyByValue(&box1);
    cout << "After modifyByValue (box2): ";
    box2.display();
    cout << "after by pass-by-reference: ";
    box1.display();
    return 0;
}