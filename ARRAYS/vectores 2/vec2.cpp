#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

void mayorMenor(int vec[], int tam, int &mayor, int &menor){
    mayor = vec[0];
    menor = vec[0];

    for (int i = 1; i < tam; i++){
        if(vec[i] > mayor){
            mayor = vec[i];
        }else if(vec[i] < menor){
            menor = vec[i];
        }
    }
}

float promedio(int vec[], int tam){
    float sum = 0;
    
    for (int i = 0; i < tam; i++){
        return (sum+= vec[i])/tam;
    }
}

int CercanoProm(int vec[], int tam){
    float prom = promedio(vec, tam);
    float distMin = abs(vec[0] - prom);
    int mc = vec[0];

    for (int i = 0; i < tam; i++){
        distMin = abs(vec[i] - prom);
        
        return mc = vec[i];
    }
}

int main (){
    cout << "Ingrese 15 valores:" << endl;

    int vec[15];
    for (int i = 0; i < 15; i++){
        cout << "Valor " << i + 1 << ": ";
        cin >> vec[i];
    }

    int mayor, menor;

    mayorMenor(vec, 15, mayor, menor);
    cout << "El mayor es: " << mayor << endl;
    cout << "El menor es: " << menor << endl;
    cout << "El promedio es: " << promedio(vec, 15) << ". El numero mas cercano al promedio es: " << CercanoProm(vec, 15) << endl;

    return 0;
}