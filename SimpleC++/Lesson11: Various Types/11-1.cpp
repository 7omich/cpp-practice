#include <iostream>
using namespace std;

struct Person {
    int age;
    double weight;
    double height;
};

void show(Person person);

int main() {
    Person person1;
    Person person2;

    cout << "年齢を入力してください。\n";
    cin >> person1.age;
    cout << "体重を入力してください。\n";
    cin >> person1.weight;
    cout << "身長を入力してください。\n";
    cin >> person1.height;

    cout << "年齢を入力してください。\n";
    cin >> person2.age;
    cout << "体重を入力してください。\n";
    cin >> person2.weight;
    cout << "身長を入力してください。\n";
    cin >> person2.height;

    show(person1);
    show(person2);

    return 0;
}

void show(Person person) {
    cout << "年齢" << person.age << "体重" << person.weight << "身長" << person.height << "です。\n";
}
