#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Rus");
    double x, result;

    cout << "Введите x: ";
    cin >> x;

    if (x < 0) {
        result = x * x;
        cout << "Выбрана ветвь: x < 0 (x * x)" << endl;
    }
    else if (x == 0) {
        result = 1;
        cout << "Выбрана ветвь: x == 0 (1)" << endl;
    }
    else { // x > 0
        result = 1.0 / x;  
        cout << "Выбрана ветвь: x > 0 (1 / x)" << endl;
    }

    cout << "Результат: " << result << endl;

    return 0;
}
