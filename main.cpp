#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

int main() {
    int choice;
    double a, b;
    ofstream history("history.txt", ios::app);

    cout << "Калькулятор v4 (с историей)\n";

    do {
        cout << "\nВыберите операцию:\n";
        cout << "1 - сложение\n2 - вычитание\n3 - умножение\n4 - деление\n";
        cout << "5 - степень\n6 - квадратный корень\n0 - выход\n";
        cout << "Ваш выбор: ";
        cin >> choice;

        if (choice == 0) break;

        double res = 0;
        bool ok = true;

        if (choice == 6) {
            cout << "Введите число: ";
            cin >> a;
            if (a < 0) { cout << "Ошибка!\n"; ok = false; }
            else res = sqrt(a);
        } else {
            cout << "Введите два числа: ";
            cin >> a >> b;

            switch (choice) {
                case 1: res = a + b; break;
                case 2: res = a - b; break;
                case 3: res = a * b; break;
                case 4: if (b == 0) { cout << "Ошибка!\n"; ok = false; } else res = a / b; break;
                case 5: res = pow(a, b); break;
                default: cout << "Неверный выбор!\n"; ok = false;
            }
        }

        if (ok) {
            cout << "Результат: " << res << endl;
            history << "Операция " << choice << " -> " << res << endl;
        }
    } while (choice != 0);

    history.close();
    cout << "Выход.\n";
    return 0;
}
