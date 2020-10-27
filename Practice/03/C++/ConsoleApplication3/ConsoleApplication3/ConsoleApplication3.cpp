#include <iostream>

using namespace std;
int main()
{
    setlocale(LC_ALL, "RU");
    int nail;
    int bain;
    cin >> nail >> bain;
    if (bain != 0) {
        cout << nail + bain << endl << nail - bain << endl << nail * bain << endl << nail / bain << endl;
    }
    else cout << nail + bain << endl << nail - bain << endl << nail * bain << endl << "Делить на 0 нельзя" << endl;
    double nail2;
    double bain2;
    cin >> nail2 >> bain2;
    if (bain2 != 0) {
        cout << nail2 + bain2 << endl << nail2 - bain2 << endl << nail2 * bain2 << endl << nail2 / bain2 << endl;
    }
    else cout << nail2 + bain2 << endl << nail2 - bain2 << endl << nail2 * bain2 << endl << "Делить на 0 нельзя" << endl;

}
