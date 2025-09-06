#include <iostream>
using namespace std;

class TIME {
    int hours, minutes, seconds;

public:
    TIME() {
        hours = 0;
        minutes = 0;
        seconds = 0;
    }
    TIME(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }
    TIME(const TIME &t) {
        hours = t.hours;
        minutes = t.minutes;
        seconds = t.seconds;
    }
    void read() {
        cout << "Enter time (hh mm ss): ";
        cin >> hours >> minutes >> seconds;
    }
    void display() {
        cout << (hours < 10 ? "0" : "") << hours << ":"
             << (minutes < 10 ? "0" : "") << minutes << ":"
             << (seconds < 10 ? "0" : "") << seconds << endl;
    }
    friend TIME difference(TIME t1, TIME t2);
};
TIME difference(TIME t1, TIME t2) {
    TIME diff;

    int totalSec1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    int totalSec2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;

    int diffSec = abs(totalSec1 - totalSec2);

    diff.hours = diffSec / 3600;
    diffSec %= 3600;
    diff.minutes = diffSec / 60;
    diff.seconds = diffSec % 60;

    return diff;
}

int main() {
    TIME t1, t2;

    cout << "Enter first time:\n";
    t1.read();
    cout << "Enter second time:\n";
    t2.read();

    cout << "\nFirst Time: ";
    t1.display();
    cout << "Second Time: ";
    t2.display();

    TIME diff = difference(t1, t2);
    cout << "\nDifference between times: ";
    diff.display();

    TIME t3 = t1; 
    cout << "\nCopied Time (using copy constructor): ";
    t3.display();

    return 0;
}