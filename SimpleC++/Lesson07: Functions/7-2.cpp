#include <iostream>
using namespace std;

double square(double x);

int main() {
    double input;

    cout << "小数を入力してください。\n";
    cin >> input;
    cout << input << "の2乗は" << square(input) << "です。\n";

    return 0;
}

double square(double x) {
    return x * x;
}
