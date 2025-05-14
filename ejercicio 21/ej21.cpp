#include <iostream>
using namespace std;
int main (){
    int i, n;
    int valor, 
        mayor, 
        menor;
    int posMayor, 
        posMenor;
    
    cout << "Ingrese la cantidad de numeros a leer: " << endl;
    cin >> n;
    for (i = 1; i <= n; i++){
        cout << "Ingrese un valor: " << endl;
        cin >> valor;
        if (valor > mayor || i == 1){
            mayor = valor;
            posMayor = i;
        }
        if (valor < menor || i == 1){
            menor = valor;
            posMenor = i;
        }
    }
    cout << "Numero mayor es: " << mayor << ". Y esta en la posicion " << posMayor << " del conjunto." << endl;
    cout << "Numero menor es: " << menor << ". Y esta en la posicion " << posMenor << " del conjunto." << endl;

    return 0;
}