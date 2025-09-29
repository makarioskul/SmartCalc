#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Калькулятор v1 (базовый)\n";
    cout << "Введите выражение (например: 2 + 3): ";

    cin >> a >> op >> b;

    if (op == '+') cout << "Результат: " << a + b << endl;
    else if (op == '-') cout << "Результат: " << a - b << endl;
    else if (op == '*') cout << "Результат: " << a * b << endl;
    else if (op == '/') {
        if (b == 0) cout << "Ошибка: деление на ноль!" << endl;
        else cout << "Результат: " << a / b << endl;
    } else {
        cout << "Неизвестная операция!" << endl;
    }

    return 0;
}
