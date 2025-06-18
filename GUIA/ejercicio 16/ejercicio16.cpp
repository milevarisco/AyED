#include <iostream>
using namespace std;
int main(){

    int valor;
    int valoresPositivos = 0;

    for (; valor >= 0; valoresPositivos++){
       
        cout << "Igresar valor:" << endl;
        cin >> valor;

    }
    cout << "Cantidad de valores positivos:" << valoresPositivos << endl;

    return 0;
}