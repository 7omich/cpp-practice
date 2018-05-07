#include <iostream>
using namespace std;

int main() {
    int a1 = 0;
    int b1 = 0;

    int a2 = 0;
    int b2 = 0;

    b1 = a1++;
    cout << "代入後にa1をインクリメントするので b1 = " << b1 << '\n';

    b2 = ++a2;
    cout << "代入前にa2をインクリメント済みなので b2 = " << b2 << '\n';

    return 0;
}
