#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b = 0;

    cout << "int型のサイズ: " << sizeof(int) << "byte\n"; // 4 bytes
    cout << "long double型のサイズ: " << sizeof(long double) << "byte\n"; // 8 bytes
    cout << "変数aのサイズ: " << sizeof(a) << "byte\n"; // 4 bytes
    cout << "式a+bのサイズ: " << sizeof(a) << "byte\n"; // 4 bytes

    return 0;
}
