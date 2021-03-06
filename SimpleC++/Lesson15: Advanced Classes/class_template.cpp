#include <iostream>
using namespace std;

template <class T>
class Array {
private:
    T data[5];
public:
    void setData(int index, T d);
    T getData(int index);
};

template <class T>
void Array<T>::setData(int index, T d) {
    if (index < 0 || index > 4) {
        cout << "配列の範囲を超えています。\n";
    } else {
        data[index] = d;
    }
}

template <class T>
T Array<T>::getData(int index) {
    if (index < 0 || index > 4) {
        cout << "配列の範囲を超えています。\n";
        return data[0];
    } else {
        return data[index];
    }
}

int main() {
    cout << "int型の配列を作成します。\n";
    Array<int> i_array;
    i_array.setData(0, 80);
    i_array.setData(1, 60);
    i_array.setData(2, 58);
    i_array.setData(3, 77);
    i_array.setData(4, 57);

    for (int i = 0; i < 5; i++) {
        cout << i_array.getData(i) << "\n";
    }

    cout << "double型の配列を作成します。\n";
    Array<double> d_array;
    d_array.setData(0, 35.5);
    d_array.setData(1, 45.6);
    d_array.setData(2, 26.8);
    d_array.setData(3, 76.2);
    d_array.setData(4, 85.5);

    for (int i = 0; i < 5; i++) {
        cout << d_array.getData(i) << "\n";
    }

    return 0;
}
