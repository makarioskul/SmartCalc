#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;

    cout << "Калькулятор v3 (меню)\n";

    do {
        cout << "\nВыберите операцию:\n";
        cout << "1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\n";
        cout << "5 - степень\n6 - квадратный корень\n0 - выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 0) break;

        if (choice == 6) {
            cout << "Введите число: ";
            cin >> a;
            if (a < 0) cout << "Ошибка!\n";
            else cout << "Результат: " << sqrt(a) << endl;
        } else {
            cout << "Введите два числа: ";
            cin >> a >> b;

            switch (choice) {
                case 1: cout << "Результат: " << a + b << endl; break;
                case 2: cout << "Результат: " << a - b << endl; break;
                case 3: cout << "Результат: " << a * b << endl; break;
                case 4: 
                    if (b == 0) cout << "Ошибка: деление на ноль!\n";
                    else cout << "Результат: " << a / b << endl;
                    break;
                case 5: cout << "Результат: " << pow(a, b) << endl; break;
                default: cout << "Неверный выбор!\n";
            }
        }
    } while (choice != 0);

    cout << "Выход.\n";
    return 0;
}
