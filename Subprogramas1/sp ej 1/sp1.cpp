#include <iostream>
using namespace std;

float modulo(float num) {
    if (num < 0) {
        return (-1) * num;
    }else {
        return num;
    }
}

int main (){
    float num;
    cout << "ingrese un numero: " << endl;
    cin >> num;
    cout << "Su modulo es: " << modulo(num) << endl;
    
    return 0;
}


