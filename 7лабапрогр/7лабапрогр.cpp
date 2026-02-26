#include <iostream>
#include <locale>
using namespace std;

struct MARSH {
    string nach;
    string kon;
};

int main() {
    setlocale(LC_ALL, "RUSSIAN");
    MARSH s[8];
    for (int i = 0; i < 8; i++) {
        cout << "Введите начало маршрута номер " << i+1 << ": ";
        cin >> s[i].nach;
        cout << "Введите конец маршрута номер " << i+1 << ": ";
        cin >> s[i].kon;
    }
    int n;
    cout << "Введите номер маршрута: ";
    cin >> n;
    if (n <= 8) {
        cout << "Начало и конец вашего маршрута: " << s[n - 1].nach << ", " << s[n - 1].kon;
    }
    else {
        cout << "Такого маршрута не существует";
    }
}