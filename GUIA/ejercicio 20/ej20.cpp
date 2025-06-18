#include <iostream>
using namespace std;
int main (){
    int valor;
    int mayor = 0;

    for (int i = 1; i <= 10; i++){
        cout << "Ingresar valor: " << endl;
        cin >> valor;
        if (valor > mayor){
            mayor = valor;
        }
    }
    cout << "El valor mayor es: " << mayor << endl;

    return 0;
}