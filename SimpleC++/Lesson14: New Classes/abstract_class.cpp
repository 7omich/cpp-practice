#include <iostream>
#include <typeinfo>
using namespace std;

class Vehicle {
protected:
    int speed;
public:
    void setSpeed(int s);
    virtual void show() = 0; // 純粋仮想関数（Pure Virtual Function）
};

class Car : public Vehicle {
protected:
    int num;
    double gas;
public:
    Car(int n, double g);
    void show();
};

class Plane : public Vehicle {
private:
    int flight;
public:
    Plane(int f);
    void show();
};

void Vehicle::setSpeed(int s) {
    speed = s;
    cout << "速度を" << speed << "にしました。\n";
}

Car::Car(int n, double g) {
    num = n;
    gas = g;
    cout << "ナンバー" << num << "ガソリン量" << gas << "の車を作成しました。\n";
}

void Car::show() {
    cout << "車のナンバーは" << num << "です。\n";
    cout << "車のガソリン量は" << gas << "です。\n";
    cout << "速度は" << speed << "です。\n";
}

Plane::Plane(int f) {
    flight = f;
    cout << "便" << flight << "の飛行機を作成しました。\n";
}

void Plane::show() {
    cout << "飛行機の便は" << flight << "です。\n";
    cout << "速度は" << speed << "です。\n";
}

int main() {
    Vehicle* pVc[2];

    Car car1(1234, 20.5);
    pVc[0] = &car1;
    pVc[0] -> setSpeed(60);

    Plane plane1(232);
    pVc[1] = &plane1;
    pVc[1] -> setSpeed(500);

    for (int i = 0; i < 2; i++) {
        if (typeid(*pVc[i]) == typeid(Car)) {
            cout << i + 1 << "番目のオブジェクトは" << typeid(Car).name() << "です。\n";
        } else {
            cout << i + 1 << "番目のオブジェクトは" << typeid(Car).name() << "ではありません。"
            << typeid(*pVc[i]).name() << "です。\n";
        }

        pVc[i] -> show();
    }

    return 0;
}
