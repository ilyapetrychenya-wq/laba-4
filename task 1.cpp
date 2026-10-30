#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int n, t, col = 0, sum = 0, b = 0, nom = 0;
    cout << "Введите количество рейсов(1-20) ";
    cin >> n;
    if (n < 1 || n>20)
        cout << "\nОшибка ввода";
    cout << "\nВведите отклонение от расписания(-10 - 180) ";
    for (int i = 1; i <= n; ++i)
    {
        cin >> t;
        if (t < -10 || t > 180) {
            cout << "Ошибка ввода";
            return 1;
        }
        if (t > 0)
        {
            col++;
            sum += t;
        }
        if (t > b)
        {
            b = t;
            nom = i;
        }
    }
    cout << "\nКоличество опоздавших рейсов: " << col << "\nСуммарные минуты опоздания: " << sum << "\nСамое большое опоздания: " << b << "\nНомер его рейса: " << nom;
}