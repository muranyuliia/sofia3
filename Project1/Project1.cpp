// Lab_03_3.cpp
   // < Осоховська Софія >
   // Лабораторна робота No 3.3
   // Розгалуження, задане графіком функції.
   // Варіант 0.1
#include <iostream>
#include <cmath>
using namespace std;
int main() {
    double x;  // вхідний аргумент
    double R; // вхідний параметр
    double y; // результат обчислення виразу
    const double pi = 3.14159265358979323846;
    cout << "R="; cin >> R; cout << "x="; cin >> x;
    // розгалуження в повній формі
    if (x <= -1)
        y = 1 / tan(45 * pi / 180) * x + 1;
    else
        if (-1 < x && x <= 1)
            y = 0;
        else
            if (1 < x && x <= 1 + 2 * R)
                y = sqrt(-pow(x, 2) - 1 + 2 * x + 2 * x * R - pow(R, 2));
            else
                if (1 + 2 * R < x)
                    y = -((x - 1 + 2 * R) / (6 + 2 * R));
                else
                    cout << endl;
    cout << "y = " << y << endl;
    cin.get();
    return 0;

}