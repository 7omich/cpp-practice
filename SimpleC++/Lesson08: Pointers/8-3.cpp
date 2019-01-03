#include <iostream>
using namespace std;

void add(int& x1, int& x2, int a);

int main() {
    int x1;
    int x2;
    int a;

    cout << "2科目分の点数を入力してください。\n";
    cin >> x1;
    cin >> x2;
    cout << "加算する点数を入力してください。\n";
    cin >> a;
    cout << a << "点加算しましたので\n";

    add(x1, x2, a);
    cout << "科目1は" << x1 << "点となりました。\n";
    cout << "科目2は" << x2 << "点となりました。\n";

    return 0;
}

void add(int& x1, int& x2, int a) {
    x1 += a;
    x2 += a;
}
