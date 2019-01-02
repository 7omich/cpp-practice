#include <iostream>
using namespace std;

int square(int x);

int main() {
    int input;

    cout << "整数を入力してください。\n";
    cin >> input;
    cout << input << "の2乗は" << square(input) << "です。\n";

    return 0;
}

int square(int x) {
    return x * x;
}
