#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 0;

    cout << "int型のサイズ: " << sizeof(int) << "byte\n";
    cout << "long double型のサイズ: " << sizeof(long double) << "byte\n";
    cout << "変数aのサイズ: " << sizeof(a) << "byte\n";
    cout << "式a+bのサイズ: " << sizeof(a) << "byte\n";

    return 0;
}
