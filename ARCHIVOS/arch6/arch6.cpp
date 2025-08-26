#include <iostream>
#include <stdio.h>
using namespace std;

struct Alumno{
    string nombre;  
    string apellido;
    int legajo;
    int dni;
    int fechaN;
};

void cargarAlumno (Alumno alumnos[]){
    for (int i = 0; i < 3; i++){
        cout << "Alumno #" << i+1 << endl;
        cout << "ingrese nombre: ";
        cin >> alumnos[i].nombre;
        cout << endl << "ingrese apellido: ";
        cin >> alumnos[i].apellido;
        cout << endl << "ingrese legajo: ";
        cin >> alumnos[i].legajo;       
        cout << endl << "ingrese numero de documento: ";
        cin >> alumnos[i].dni;
        cout << endl << "ingrese fecha de nacimiento: ";
        cin >> alumnos[i].fechaN;
    }
}

void mostrarAlumno (Alumno alumnos[]){
    for (int i = 0; i < 3; i++){
        cout << "Alumno #" << i+1;
        cout << endl <<"nombre: " << alumnos[i].nombre;
        cout << endl << "apellido: " << alumnos[i].apellido;
        cout << endl << "legajo: " << alumnos[i].legajo;
        cout << endl << "numero de documento: " << alumnos[i].dni;
        cout << endl << "fecha de nacimiento: " << alumnos[i].fechaN;
        cout << endl;
    } 
} 

void archAlumnos (Alumno alumnos[]){
    FILE* al = fopen("listaAlumnos.bin", "wb");
    if (al == NULL) {
        cout << "Error al abrir el archivo para lectura." << endl;
        return;
    }
    fwrite(alumnos, sizeof(Alumno), 3, al);
    fclose(al);

    al = fopen("listaAlumnos.bin", "rb");
    if (al == NULL) {
        cout << "Error al abrir el archivo para lectura." << endl;
        return;
    }
    Alumno leidos[3];
    while (fread(leidos, sizeof(Alumno), 3, al)){
        mostrarAlumno (leidos);
    }
    fclose(al);
}

int main(){
    Alumno alumnos[3];
    cargarAlumno (alumnos);
    archAlumnos (alumnos);
    mostrarAlumno (alumnos);

    return 0;
}