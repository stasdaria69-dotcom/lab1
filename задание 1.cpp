#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Rus");
    int m;
    cout << "Введите расстояние в метрах: ";
    cin >> m;
    int km = m / 1000;
    int rm = m % 1000;
    cout << "Результат: " << km << " км и " << rm << " м." << endl;
    return 0;
}
