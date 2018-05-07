#include <iostream>
using namespace std;

int main() {
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

    cout << "科目1の点数を入力してください。\n";
    cin >> sub1;
    cout << "科目2の点数を入力してください。\n";
    cin >> sub2;
    cout << "科目3の点数を入力してください。\n";
    cin >> sub3;
    cout << "科目4の点数を入力してください。\n";
    cin >> sub4;
    cout << "科目5の点数を入力してください。\n";
    cin >> sub5;

    int sum = sub1 + sub2 + sub3 + sub4 + sub5;
    cout << "5科目の合計点は" << sum << "点です。\n";
    cout << "5科目の平均点は" << sum / 5.0 << "点です。\n";

    return 0;
}
