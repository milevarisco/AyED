/* Confeccionar un subprograma que, dados dos vectores de números enteros 
liste el contenido de ambos pero en forma ordenada. Utilice el algoritmo de apareo */

#include <iostream>
using namespace std;

void apareo(int vec1[], int tam1, int vec2[], int tam2, int vecR[]){
    int i = 0, j = 0, r = 0;
    
    while (i < tam1 && j < tam2){
        if (vec1[i] < vec2[j]){
            vecR[r] = vec1[i];
            i++;
        }else{
            vecR[r] = vec2[j];
            j++;
        }  
        r++;
    }
    for (int cont = i; cont < tam1; cont++){
        vecR[r] = vec1[cont];
        r++; 
    }
    for (int cont = j; cont < tam2; cont++){
        vecR[r] = vec2[cont];
        r++;
    }
}

int main(){
    int tam1 = 5;
    int tam2 = 5;
    int vec1[tam1] = {1,3,5,7,9};
    int vec2[tam2] = {2, 4, 6, 8, 10};
    int vecR[tam1 + tam2];
    
    apareo(vec1, tam1, vec2, tam2, vecR);
    for(int elemento : vecR){
        cout << elemento << endl;

    }
    
    return 0;
}