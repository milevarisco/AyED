#include <iostream>
using namespace std;

int factorial(int num){
    if (num == 0 || num == 1){
        return 1;
    }else{
        return num * factorial(num - 1);
    }
}

int main(){
    int numero;
    
    cout << "Ingrese un numero para calcular su factorial: " << endl;
    cin >> numero;
    factorial(numero);

    cout << numero << "!= " << factorial(numero) << endl;

    return 0;
}