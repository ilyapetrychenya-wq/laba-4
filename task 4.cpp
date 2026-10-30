#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "Russian");
    int g, t;
    do {
        cout << "Введите количество выходов g ( 2 - 8): ";
        cin >> g;
    } while (g < 2 || g > 8);
    do {
        cout << "Введите количество интервалов t ( 2 - 6): ";
        cin >> t;
    } while (t < 2 || t > 6);

    cout << "\nтаблица состояний:\n";
    cout << "Инт.\\Вых.\t";
    for (int cg = 1; cg <= g; ++cg) {
        cout << "Вых " << cg << "\t";
    }
    cout << "Кол-во C\n";
    int tcc = 0; 
    for (int ct = 1; ct <= t; ++ct) {
        cout << "Инт " << ct << "\t\t";
        int rc = 0; 
        for (int cgc = 1; cgc <= g; ++cgc) {
            if ((cgc + ct) % 4 == 0) {
                cout << "C\t";
                rc++;   
                tcc++; 
            }
            else {
                cout << "O\t";
            }
        }
          cout << rc << "\n";
    }
    cout << "Общее число состояний 'C': " << tcc << "\n";
    return 0;
}
