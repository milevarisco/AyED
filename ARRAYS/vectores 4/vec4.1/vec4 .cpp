#include <iostream>
using namespace std;

void invertir(int vec[], int i, int tam){
    int aux;
    
    if (i < tam/2){
        aux = vec[i];
        vec[i] = vec[tam - 1 - i];
        vec[tam - 1- i] = aux;
        invertir(vec, i + 1, tam);
    }
    

}


int main(){
    int vec[] = {8, 7, 10, 74, 1, 20};
    
    cout << "Vector original: ";
    for (int i = 0; i < 6; i++){
        cout << vec[i] << " ";
    }
    
    cout << endl << "Vector invertido: ";
    invertir(vec, 0, 6);
    for (int i = 0; i < 6; i++){
    cout << vec[i] << " ";;
    }
    
    return 0;
}