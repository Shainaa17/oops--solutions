#include <iostream>
using namespace std;
class Counter {
private:
    static int count;
public:
    static void increment() {
        count++;
    }
    static void displayCount() {
        cout << "Count: " << count << endl;
    }
};
int Counter::count = 0;
int main() {
    Counter::displayCount();
    Counter::increment();
    Counter::displayCount();
}
