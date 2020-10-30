#include <iostream>
#include <ctime>
#include <clocale>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int a, b, c, h, f, o;
    a = 1;
    c = 5;
    o = 0;
    cout << "Приветствую тебя загадай число от одного до ста" << endl;
    for (int i = 1; i <= c; i++)
    {
        if ((a == 1) || (a == 0))
        {
            srand(time(0));
            b = 1 + rand() % 100;
        }
        cout << "Как думаете что я загадал?" << endl;
        if (a == 5)
        {
            cin >> h;
            cout << endl;
            if (h == b)
            {
                cout << "Да вы экстрасенс!" << endl << "Сыграем еще раз?(1-Да)" << endl;
                cin >> f;
                if (f == 1)
                {
                    c = c * 2;
                    a = 0;
                }
            }
            else
            {
                cout << "Вам не повезло я загадал:" << b << endl << "сыграем еще разок?(1-Да)" << endl;
                cin >> f;
                if (f == 1)
                {
                    c = (c * 2) + 1;
                    a = 0;
                }
            }
        }
        else
        {
            cin >> h;
            cout << endl;
            o++;
            if (h == b)
            {
                cout << "Вау! Вы угадали" << endl << "Сыграем еще?(1-Да)" << endl;
                cin >> f;
                if (f == 1)
                {
                    c = o + 5;
                    a = 0;
                }

            }
            else
            {
                if (h > b)
                {
                    cout << "Слишком высоко" << endl;
                }
                else
                {
                    cout << "Нет побробуй больше" << endl;
                }
            }
        }
        a++;
    }
}
