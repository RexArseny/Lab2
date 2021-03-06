﻿#include <iostream>
#include <cmath>
using namespace std;

bool isInArea(double x, double y)
{
    if (((abs(x) * abs(y)) <= 1) and !((x >= -1) and (x < 0) and (y <= 1) and (y > 0)))
        return 1;
    else
        return 0;
}

double f(double x)
{
    return x <= 3 ? (pow(x, 2) - 3 * x + 9) : 1 / (pow(x, 3) + 6);
}

int main()
{
    setlocale(LC_ALL, "ru");

    int a;
    double x, y;
    cout << "Введите 1, если нужно выполнить 1 задание. Введите 2, если нужно выполнить 2 задание." << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        cout << "Введите x и y." << endl;
        cin >> x >> y;
        cout << isInArea(x, y);
        break;
    case 2:
        cout << "Введите x." << endl;
        cin >> x;
        cout << f(x);
        break;
    }
}