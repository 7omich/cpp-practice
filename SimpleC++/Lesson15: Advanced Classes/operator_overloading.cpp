#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    Point(int a = 0, int b = 0) { x = a; y = b; }
    Point operator+(Point p);
    friend Point operator+(int a, Point p);
    Point operator++();
    Point operator++(int d);
    void showPoint();
};

Point Point::operator+(Point p) {
    Point tmp;
    tmp.x = x + p.x;
    tmp.y = y + p.y;
    return tmp;
}

// Don't need scope resolution operator.
Point operator+(int a, Point p) {
    Point tmp;
    tmp.x = a + p.x;
    tmp.y = a + p.y;
    return tmp;
}

Point Point::operator++() {
    x++;
    y++;
    return *this;
}

// d is dummy argument.
Point Point::operator++(int d) {
    Point p = *this;
    x++;
    y++;
    return p;
}

void Point::showPoint() {
    cout << "x: " << x << ", y: " << y << "\n";
}

int main() {
    Point p1(1, 2);
    Point p2(3, 6);
    Point p3;
    Point p4;

    p1.showPoint();
    p2.showPoint();
    p3 = p1 + p2;
    p3.showPoint();
    p4 = 3 + p1;
    p4.showPoint();
    ++p4;
    p4.showPoint();
    p4++;
    p4.showPoint();

    return 0;
}
