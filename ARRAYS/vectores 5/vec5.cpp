/*Hacer un programa que permita realizar la suma y el producto de dos vectores. 
El usuario deberá poder elegir el tamaño del vector (entre 2 y 10valores).*/
#include <iostream>
using namespace std;

void sumaYproducto(int vec1[], int vec2[], int tam, int suma[], int producto[]){
    for (int i = 0; i < tam; i++){
        suma[i] = vec1[i] + vec2[i];
        producto[i] = vec1[i] * vec2[i];
    }
}

int main() {
    
    int vec1[] = {3, 4, 5, 6, 8, 9};
    int vec2[] = {6, 7, 8, 9, 10};
    int suma[10];
    int producto[10];
    int tam;
    
    while (tam < 2 || tam > 10){
        cout << "ingrese el tamaño del vector (entre 2 y 10 valores): "; 
        cin >> tam;  
    }
    
    sumaYproducto(vec1, vec2, tam, suma, producto);
    cout << "vec1 + vec2 = ";
    for (int i = 0; i < tam; i++){
        cout << suma[i] << " ";
    }
    cout << endl << "vec1 * vec2 = ";
    for (int i = 0; i < tam; i++){
        cout << producto[i] << " ";
    }
    
    return 0;
}