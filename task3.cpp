#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int k;
    do {
       cout << "Введите количество мест (1 - 3): ";
       cin >> k;
    } while (k < 1 || k > 3);
    double m = 0;
    bool val = false;
    do {
        val = true; 
        m = 0; 
        cout << "\nВведите массу " << k << " мест багажа \n";
        double m1;
        cout << "Введите массу 1 ( 1 -10): ";
        cin >> m1;
        if (m1 < 1.0 || m1 > 10.0) {
            cout << "Ошибка!\n";
            val = false;
        }
        else {
            m += m1;
        }
        if (val && k >= 2) {
            double m2;
            cout << "Введите массу 2 ( 1 - 10): ";
            cin >> m2;
            if (m2 < 1.0 || m2 > 10.0) {
                cout << "Ошибка!\n";
                val = false;
            }
            else {
                m += m2;
            }
        }
        if (val && k == 3) {
            double m3;
            cout << "Введите массу 3 ( 1 - 10 ): ";
            cin >> m3;
            if (m3 < 1.0 || m3 > 10.0) {
                cout << "Ошибка!\n";
                val = false;
            }
            else {
                m += m3;
            }
        }
        if (val) {
            if (m > 20.0) {
                cout << "Ошибка!\n";
                val = false;
            }
        }
        if (!val) {
            cout << "Правила нарушены!\n";
        }

    } while (!val); 
    double lim = 20.0 - m;
    cout << "\nБагаж принят" << endl;
    cout << "Общая масса: " << m << " кг." << endl;
    cout << "Оставшийся лимит: " << lim << " кг." << endl;
    return 0;
}
