#include <iostream>

using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << a << endl << b << endl;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << a << endl << b << endl;

}
