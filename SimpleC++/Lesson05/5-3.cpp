#include <iostream>
using namespace std;

int main() {
    int score;

    cout << "成績を1~5の5段階で入力してください。\n";
    cin >> score;

    switch (score) {
    case 1:
        cout << "成績は" << score << "です。もっとがんばりましょう。\n";
        break;
    case 2:
        cout << "成績は" << score << "です。もう少しがんばりましょう。\n";
        break;
    case 3:
        cout << "成績は" << score << "です。さらに上をめざしましょう。\n";
        break;
    case 4:
        cout << "成績は" << score << "です。たいへんよくできました。\n";
        break;
    case 5:
        cout << "成績は" << score << "です。たいへん優秀です。\n";
        break;
    default:
        cout << "不正な値が入力されています。\n";
        break;
    }

    return 0;
}
