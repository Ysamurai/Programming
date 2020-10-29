#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    double point1, point2, point3;
    char f;
    cout << "Введите вещественное число затем знак операции затем вещественное число" << endl;
    cin >> point1 >> f >> point2;
    switch (f)
    {
    case '+':
    {
        point3 = point1 + point2;
        cout << point3;
    }
    break;
    case '-':
    {
        point3 = point1 - point2;
        cout << point3;
    }
    break;
    case '*':
    {
        point3 = point1 * point2;
        cout << point3;
    }
    break;
    case '/':
        if (point2 == 0)
        {
            cout << "Решение невозможно";
        }
        else
        {
            point3 = point1 / point2;
            cout << point3;
        }
        break;
    default:
        cout << "Введите корректный знак вычислений";
    }
    return 0;
}