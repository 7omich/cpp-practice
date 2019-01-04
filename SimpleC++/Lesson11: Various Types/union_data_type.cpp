#include <iostream>
using namespace std;

union Year {
    int ad;
    int gengo;
};

int main() {
    Year myyear;

    cout << "西暦を入力してください。\n";
    cin >> myyear.ad; // e.g. 2019

    cout << "西暦は" << myyear.ad << "です。\n"; // 2019
    cout << "元号も" << myyear.gengo << "です。\n"; // 2019

    cout << "元号を入力してください。\n";
    cin >> myyear.gengo; // e.g. 31

    cout << "元号は" << myyear.gengo << "です。\n"; // 31
    cout << "西暦も" << myyear.ad << "です。\n"; // 31

    return 0;
}
