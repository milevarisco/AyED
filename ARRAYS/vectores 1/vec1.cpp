#include <iostream>
using namespace std;

int main(){
    cout << "Ingrese 10 valores:" << endl;

    int valores[10];
    for (int i = 0; i < 10; i++){
        cout << "valor " << i + 1 << ": ";
        cin >> valores[i];
    }
    
    cout << "Valores en sentido inverso:" << endl;
    for (int i = 9; i >= 0; i--){
        cout << valores[i] << endl;
    }
    
    return 0;
}