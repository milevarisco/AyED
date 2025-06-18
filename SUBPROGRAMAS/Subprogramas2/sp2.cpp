#include <iostream>
using namespace std;

void moduloProcedimiento(float &num) {
   if (num < 0){
        num = (-1) * num;
   }
   
    return;
}

int main() {
    
    float numero;
   
    cout << "Ingrese un numero: " << endl;
    cin >> numero;

    cout << "|" << numero << "| = ";
    moduloProcedimiento(numero);
    cout << numero << endl;
   
    return 0;
}