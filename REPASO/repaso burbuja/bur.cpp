/*- Permita al usuario ingresar dinámicamente una cantidad de elementos a ordenar.
- Guarde los elementos en un vector de enteros.
- Ordene el vector de menor a mayor utilizando el algoritmo de ordenamiento burbuja.
- Muestre el vector antes y después del ordenamiento.
Bonus opcional:
- Mostrá el número de intercambios realizados durante la ordenación.
- Hacé que el algoritmo detecte si el vector ya está ordenado para terminar antes (optimización clásica de burbuja).*/
#include <iostream>
using namespace std;

void burbuja(int vec[], int tam, int &intercambios){
    int aux;

    for (int i = 0; i < tam - 1; i++){
        bool ordenado = true;

        for (int j = 0; j < tam - i - 1; j++){
            if (vec[j] > vec[j +1]){
                aux = vec[j];
                vec[j] = vec[j+1];
                vec[j+1] = aux;
            
                intercambios += 1;
                ordenado = false;
            }
        }
        if (ordenado){
            break;
        }
        
    }
}

int main(){
    int vec[10];
    int tam = 10;
    int intercambios =0;
    
    cout << "Ingrese 10 elementos: " << endl;
    for (int i = 0; i < 10; i++){
        cout << "elemento " << i + 1 << ": ";
        cin >> vec[i];
    }
    cout << "vector original: ";
    for (int i = 0; i < 10; i++){
        cout << vec[i] << " ";
    }
    cout << endl << "vector ordenado: ";
    burbuja(vec, 10, intercambios);
    for (int i = 0; i < 10; i++){
        cout << vec[i] << " ";
    }
    cout << endl << "cantidad de intercambios realizados: " << intercambios;

    return 0;
}