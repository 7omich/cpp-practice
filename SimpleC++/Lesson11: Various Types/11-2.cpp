#include <iostream>
using namespace std;

struct Person {
    int age;
    double weight;
    double height;
};

void show(Person p);
void aging(Person* p);

int main() {
    Person person;

    cout << "年齢を入力してください。\n";
    cin >> person.age;
    cout << "体重を入力してください。\n";
    cin >> person.weight;
    cout << "身長を入力してください。\n";
    cin >> person.height;

    show(person);
    aging(&person);

    cout << "1年経過しました。\n";
    show(person);

    return 0;
}

void show(Person p) {
    cout << "年齢" << p.age << "体重" << p.weight << "身長" << p.height << "です。\n";
}

void aging(Person* p) {
    p -> age++;
}
