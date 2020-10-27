#include <iostream>

using namespace std;

int main()
{
    double x, v, t;
    cin >> x >> v >> t;

   cout << x + (v * t) - ((9.8 * t * t) / 2);
}

