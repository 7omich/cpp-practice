#include <iostream>
using namespace std;

template <class T>
T squaret(T x) {
    return x * x;
}

int main() {
    int input1;
    double input2;

    cout << "整数を入力してください。\n";
    cin >> input1;
    cout << "小数を入力してください。\n";
    cin >> input2;
    cout << input1 << "の2乗は" << squaret(input1) << "です。\n";
    cout << input2 << "の2乗は" << squaret(input2) << "です。\n";

    return 0;
}
