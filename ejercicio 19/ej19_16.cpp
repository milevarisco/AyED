#include <iostream>
using namespace std;
int main (){

    int valor;
    int valoresPositivos = 0;

    do{
        cout << "Igresar valor:" << endl;
        cin >> valor;
        valoresPositivos++;
   
    } while (valor >= 0);
    cout << "Cantidad de valores positivos:" << valoresPositivos << endl;

    return 0;
}