#include <iostream>
using namespace std;
int main (){ 

    float sueldo;
    int menor1520 = 0, 
        menor2780 = 0, 
        menor5999 = 0, 
        mayor5999 = 0;

    do
    {
        cout << "Ingresar sueldo:" << endl;
        cin >> sueldo;
        if (sueldo < 1.520){
            menor1520++;
        }else if (sueldo < 2.780){
            menor2780++;
        }else if (sueldo < 5.999){
            menor5999++;
        }else {
            mayor5999++;
        }   
        
    } while (sueldo != 0);
   
    cout << "Empleados que ganan menos de $1.520: " << menor1520 << endl;
    cout << "Empleados que ganan menos de $2.780: " << menor2780 << endl;
    cout << "Empleados que ganan menos de $5.999: " << menor5999 << endl;
    cout << "Empleados que ganan mas de $5.999: " << mayor5999 << endl;
    
    return 0;
}