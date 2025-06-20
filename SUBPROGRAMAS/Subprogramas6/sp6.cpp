#include <iostream>
#include <conio.h>
#include <cctype>
using namespace std;

int calcular(int n1, int n2, char operacion){
    switch (tolower(operacion)){
        case 'a':
        cout << "Ingrese dos números: " << endl;
            cin >> n1 >> n2;
            return n1 + n2;
        break;
        case 'b':
        cout << "Ingrese dos números: " << endl;
            cin >> n1 >> n2;
            return n1 - n2;
        break;
        case 'c':
        cout << "Ingrese dos números: " << endl;
            cin >> n1 >> n2;
            return n1 * n2;
        break;
        case 'd':
        cout << "Ingrese dos números: " << endl;
            cin >> n1 >> n2;
            if (n2 != 0){
                return n1/n2;
            }
        break;
        default:
            cout << "te pedi a, b, c, d, o esq. no " << operacion << endl;
        break;
    }
    return 0;
}

int main(){
    int n1, n2;

    cout << "Elija una opcion: " << endl;
    cout << "A) Suma" << endl;
    cout << "B) Resta" << endl;
    cout << "C) Multiplicacion" << endl;
    cout << "D) Division" << endl;
    cout << "Toque Esc para salir" << endl;
    int tecla = getch();
    
    if (tecla != 27){

        int resultado = calcular(n1, n2, tecla);
        cout << resultado << endl;
    }
    
    return 0;
}