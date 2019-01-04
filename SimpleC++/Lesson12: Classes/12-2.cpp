#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    void setX(int a);
    void setY(int b);
    int getX() { return x; }
    int getY() { return y; }
};

void Point::setX(int a) {
    if (0 <= a && a <= 10) {
        x = a;
    } else {
        x = 0;
    }
}

void Point::setY(int b) {
    if (0 <= b && b <= 10) {
        y = b;
    } else {
        y = 0;
    }
}

int main() {
    Point p;
    int input1, input2;

    cout << "X座標を入力してください。\n";
    cin >> input1;
    p.setX(input1);

    cout << "Y座標を入力してください。\n";
    cin >> input2;
    p.setY(input2);

    cout << "座標は (" << p.getX() << ", " << p.getY() << ") です。\n";

    return 0;
}
