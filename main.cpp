#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "Калькулятор v2 (расширенный)\n";
    cout << "Операции: + - * / ^ s (sqrt)\n";
    cout << "Введите выражение (например: 2 ^ 3 или 9 s 0): ";

    cin >> a >> op >> b;

    if (op == '+') cout << "Результат: " << a + b << endl;
    else if (op == '-') cout << "Результат: " << a - b << endl;
    else if (op == '*') cout << "Результат: " << a * b << endl;
    else if (op == '/') {
        if (b == 0) cout << "Ошибка: деление на ноль!" << endl;
        else cout << "Результат: " << a / b << endl;
    }
    else if (op == '^') cout << "Результат: " << pow(a, b) << endl;
    else if (op == 's') { // sqrt(a), b игнорируем
        if (a < 0) cout << "Ошибка: отрицательное число!" << endl;
        else cout << "Результат: " << sqrt(a) << endl;
    }
    else cout << "Неизвестная операция!" << endl;

    return 0;
}
