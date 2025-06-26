#include <iostream>
using namespace std;

void invertir(int vec[], int tam){
    for (int i = tam - 1 ; i >= 0; i--){
       cout << vec[i] << " ";
    }
}

int main(){
    int vec[] = {8, 7, 10, 74, 1, 20};
    
    cout << "Vector original: ";
    for (int i = 0; i < 6; i++){
        cout << vec[i] << " ";
    }
    
    cout << endl << "Vector invertido: ";
    invertir(vec, 6);
    
    return 0;
}