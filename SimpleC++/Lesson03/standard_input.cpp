#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    const int multiplier = 10;

    cout << "整数を2つ入力してください。\n";

    cin >> num1 >> num2;

    cout << "10倍した結果は：" << num1 * multiplier << " と " << num2 * multiplier << '\n';

    return 0;
}
