#include <iostream>
#include <math.h>   
using namespace std;

class Point {
    int coord[2];  

public:
    Point(int x, int y) {
        coord[0] = x;
        coord[1] = y;
    }
    void read() {
        cout << "Enter X coordinate: ";
        cin >> coord[0];
        cout << "Enter Y coordinate: ";
        cin >> coord[1];
    }
    void fun(Point &p) {
        double dist = sqrt(pow(coord[0] - p.coord[0], 2) +
                           pow(coord[1] - p.coord[1], 2));
        cout << "Euclidean Distance = " << dist << endl;
    }
};

int main() {
    Point p1(0,0), p2(3,4);
    p1.fun(p2);

    return 0;
}
