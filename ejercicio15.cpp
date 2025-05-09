#include <iostream>
using namespace std;
int main (){ 
    int tipo;
    string motivo;
    int multa;
    char gravedad;
    int sumaL = 0, sumaM = 0, sumaG = 0;
    int clausuraFabrica = 0;

    for (int i = 1; i <= 5; i++){
        cout << i << endl;
        //tipo de infraccion
        cout << "Ingresar tipo de infraccion:" << endl;
        cin >> tipo;
        if (tipo >= 1 && tipo <= 4){
            cout << "Tipo de infraccion: " << tipo << endl;
        }
            else{
                cout << "Tipo no valido." << endl;
        }
        
        //motivo de la multa
        cout << "Ingresar motivo de la multa:" << endl;
        cin >> motivo;
        cout << "Motivo: " << motivo << endl;

        //valor de la multa
        cout << "Ingresar valor de la multa:" << endl;
        cin >> multa;
        cout << "Valor: " << multa << endl;
        
        //gravedad de la multa
        cout << "Ingresar gravedad:" << endl;
        cin >> gravedad;
        switch (gravedad){
        case 'M':
            sumaM += multa;
            break;
        case 'L':
            sumaL += multa;
            break;
        case 'G': 
            sumaG += multa;
            if (tipo == 3 || tipo == 4){
                clausuraFabrica++;
            }
            
            break;
        default:
            cout << "Nivel no valido." << endl;
            break;
        }                  
    }
    cout << "VALOR TOTAL DE M: " << sumaM << endl;
    cout << "VALOR TOTAL DE L: " << sumaL << endl;
    cout << "VALOR TOTAL DE G: " << sumaG << endl;
    if (clausuraFabrica == 3){
        cout << "CLAUSURAR FABRICA" << endl;
    }
    
    return 0;
}