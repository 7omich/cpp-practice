#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int input;

    cout << "テストの点数を入力してください。（0で終了）\n";

    do {
        cin >> input;
        sum += input;
    } while (input);

    cout << "テストの合計点は" << sum << "点です。\n";

    return 0;
}
