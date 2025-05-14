#include <iostream>
using namespace std;
int main (){ 

    int m;
    int i = 1;

    cout << "Ingresar un valor:" << endl;
    cin >> m;
    cout << "Primeros" << m << " multiplos de 3:" << endl;

do
{
    int mult3 = 3*i;

    if (mult3 % 5 != 0){
    cout << mult3 << endl;
    } else m++;
} while (i <= m && m > 0);

    return 0;
}