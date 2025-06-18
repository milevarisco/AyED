#include <iostream>
using namespace std;

void calculoMayor(float &mayor, float n1, float n2){
    
    if (n1 > n2){
        mayor = n1;
    }else{
        mayor = n2;
   }

}

int main(){
   float n1, n2, mayor;
   
    cout << "ingrese dos numeros: " << endl;
    cin >> n1 >> n2;
    calculoMayor(mayor, n1, n2);
    cout << "El numero mayor entre " << n1 << " y " << n2 << " es: " << mayor << endl;
    
    return 0;
}