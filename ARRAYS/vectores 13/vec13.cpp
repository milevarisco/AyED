/* 13. Dado un vector de 20 posiciones (números enteros), genere un programa que permita realizar las siguientes operaciones.
− Ingresar un elemento al final de la cola (primera posición libre del vector), comprobando antes del ingreso que existe una posición libre, sino colocar un mensaje de aviso.
− Sacar el elemento que se encuentre en la primera posición (si no lo hubiera colocar un mensaje de aviso), corriendo luego los demás en la cola una posición hacia delante.
− Listar en cualquier momento el contenido de la cola del primero al último. */

#include <iostream>
using namespace std;

const int TAM = 20;
int cola[TAM];
int inicio = 0;
int fin = 0;

void agregarElemento() {
    if (fin < TAM) {
        cout << "Ingrese un número: ";
        cin >> cola[fin];
        fin++;
    } else {
        cout << "⚠️ La cola está llena.\n";
    }
}

void eliminarElemento() {
    if (inicio < fin) {
        cout << "Elemento eliminado: " << cola[inicio] << endl;
        for (int i = inicio; i < fin - 1; i++) {
            cola[i] = cola[i + 1];
        }
        fin--;
    } else {
        cout << "⚠️ La cola está vacía.\n";
    }
}

void listarCola() {
    if (inicio < fin) {
        cout << "Contenido de la cola: ";
        for (int i = inicio; i < fin; i++) {
            cout << cola[i] << " ";
        }
        cout << endl;
    } else {
        cout << "La cola está vacía.\n";
    }
}

int main() {
    int opcion;
    do {
        cout << "\n--- MENÚ ---\n";
        cout << "1. Agregar elemento\n";
        cout << "2. Eliminar elemento\n";
        cout << "3. Listar cola\n";
        cout << "0. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1: agregarElemento(); break;
            case 2: eliminarElemento(); break;
            case 3: listarCola(); break;
            case 0: cout << "Programa finalizado.\n"; break;
            default: cout << "Opción inválida.\n";
        }
    } while (opcion != 0);

    return 0;
}