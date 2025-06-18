#include <iostream>
using namespace std;
int main (){
    
    string nombre = "", nombreMayor = "", nombreMenor = "";
    int fecha, fechaMayor, fechaMenor;
    int i = 1;

    cout << "Ingresar nombre" << endl;
    cin >> nombre;

    while (nombre != "FIN" && nombre != "fin"){
        cout << "Fecha de nacimiento: " << endl;
        cin >> fecha;

        if (fecha > fechaMayor || i == 1){
            fechaMayor = fecha;
            nombreMayor = nombre;
        }
        if (fecha < fechaMenor || i == 1){
            fechaMenor = fecha;
            nombreMenor = nombre;
        }   
        i++;
        cout << "Ingresar nombre" << endl;
        cin >> nombre;
    }
    if (i > 1){
        cout << nombreMayor << " es la persona mas joven y nacio en " << fechaMayor << endl;
        cout << nombreMenor << " es la persona mas vieja y nacio en " << fechaMenor << endl;
    }else{
        cout << "No se ingresaron datos." << endl;
    }
    
    return 0;
} 