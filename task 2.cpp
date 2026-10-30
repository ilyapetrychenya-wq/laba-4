#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int m, dp = 0, mest = 0, b=0;
    cout <<  "Введите масссы багажа ";
    while (cin >> m, m != -1)
    {
        if (m < 0 || m>50)
        {
            cout << "\nОшибка ввода \n";
            continue;
        }
        if (m > 20)
        {
            dp += (m - 20) * 4;
            mest++;
        }
        if (m > b)
            b = m;
    }
    cout << "\nобщий сбор: " << dp << "\n Количество мест с доплатой: " << mest << "\nНаибольшая доплата за место: " << (b-20)*4;
}