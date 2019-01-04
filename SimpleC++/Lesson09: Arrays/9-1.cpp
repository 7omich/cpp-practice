#include <iostream>
using namespace std;

int max(int x[]);

int main() {
    int scores[5];

    cout << "テストの点数を入力してください。\n";
    for (int i = 0; i < 5; i++) {
        cin >> scores[i];
    }

    cout << "最高点は" << max(scores) << "点です。\n";

    return 0;
}

int max(int x[]) {
    int ans = x[0];

    for (int i = 1; i < 5; i++) {
        if (x[i] > ans) {
            ans = x[i];
        }
    }

    return ans;
}
