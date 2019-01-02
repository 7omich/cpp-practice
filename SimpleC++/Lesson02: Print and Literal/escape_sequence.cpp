#include <iostream>
using namespace std;

int main() {
    cout << "Backslash の表示：" << '\\' << '\n';
    cout << "Single quote の表示：" << '\'' << '\n';
    cout << "「A」（8進数文字コード101）の表示：" << '\101' << '\n';
    cout << "「a」（16進数文字コード61）の表示：" << '\x61' << '\n';
    cout << "10進数における「10」の表示：" << 10 << '\n';
    cout << "8進数における「10」の表示：" << 010 << '\n';
    cout << "16進数における「10」の表示：" << 0x10 << '\n';

    return 0;
}
