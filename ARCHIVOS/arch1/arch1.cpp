#include <iostream>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main(){
    int n;
    float valor;
    FILE *f;

    cout << "Ingrese la cantidad de valores que desea guardar: " << endl;
    cin >> n;

    if (f = fopen("archivo.bin", "wb")){
        for (int i = 0; i < n; i++){
            cout << "Ingresar valor " << i+1 << endl;
            cin >> valor;
            fwrite(&valor, sizeof(float), 1, f);
        }
        fclose(f); 
    } 
    else{
        cout << "error al crear el archivo." << endl;
        return 1;
    }

    cout << "Muestra de valores" << endl;
    if (f = fopen("archivo.bin", "rb")){
        int i = 1;
        while (fread(&valor, sizeof(float), 1, f)){
            cout << "valor #" << i++ << " = " << valor << endl;
        }
        fclose(f);
    }
    else{
        return 1;
    }

    //modificar un valor
    int pos;
    float nuevoV;

    cout << "Ingrese la posicion que desea modificar (1 a " << n << ")" << endl;
    cin >> pos;

    if (pos < 1 || pos > n){
        cout << "Posicion no valida." << endl;
        return 1;
    }

    cout << "Ingrese nuevo valor: " << endl;
    cin >> nuevoV;

    if (f = fopen("archivo.bin", "rb+")){
        fseek (f, (pos -1)* sizeof(float), SEEK_SET);
        fwrite(&nuevoV, sizeof(float), 1, f);
        fclose(f);
        cout << "valor modificado." << endl;
    }
    else {
        cout << "error al modificar el valor." << endl;
        return 1;
    }

    //mostrar contenido actualizado
    cout << "Valores actualizados" << endl;
    if (f = fopen("archivo.bin", "rb")){
        int i = 1;
        while (fread(&nuevoV, sizeof(float), 1, f)){
            cout << "Valor #" << i++ << " = " << nuevoV << endl;
        }
        fclose(f);
    }

    getch();
    return 0;
}