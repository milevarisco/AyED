#include <isotream>
using namespace std;

//punto 4
struct Encomienda {
    int num;
    float peso;
    char direcDest[201];  //200 + 1 por el '\0'
    char nombre[51];
    char apellido[51];
    int entregaPautada;
    bool entregado = false;
};

int tam = 1000;
Encomienda encomiendas[tam];

//punto 5
void entrega(Encomienda encomiendas[], int tam, int fechaEntrega){
    for (int i = 0; i < tam; i++){
        if (encomiendas[i].entregaPautada < fechaEntrega){
            encomiendas[i].entregado = true;
        } 
    }
}
