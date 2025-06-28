/* Se leen datos de notas obtenidas por los alumnos de una cátedra y se desea informar
− el promedio de las notas obtenidas por los alumnos
− el nombre, tipo y número de documento y número de legajo (padrón) de los alumnos que hayan aprobado con nota igual o mayor que siete.
− Los datos del/los alumnos con peor nota.
La secuencia finaliza con el alumno Wolf Roberto que debe ser procesado */
#include <iostream>
using namespace std;

struct Alumno{
    double notas[4];
    double promedio;
    string nombre;
    string apellido;
    int legajo;
    string tipoDocumento;
    int documento;
};

int cantElementos(Alumno v[], int tam){
    int i = 0;
    while (i < tam && v[i].legajo != 0 ){
       i++;
    }
    return i;
}

void aprobadosf(Alumno alumnos[], int tam, Alumno alumnosAprobados[]){
    int k = 0;
    for (int i = 0; i < tam; i++){
        bool condicion = true;
        for (int j = 0; j < 4; j++){
            if(alumnos[i].notas[j] <= 7){
                condicion = false;
            }
        }
       if (condicion){
        alumnosAprobados[k] = alumnos[i];
        k++;
       }
    }
}

double promedio(double notas[]){
    double suma = 0;
    for (int i = 0; i < 4; i++){
        suma += notas[i];
    }

    return suma/4;
}

void cargarAlumno (Alumno &alumno){
    cout << "ingrese apellido: ";
    cin >> alumno.apellido;
    cout << endl << "ingrese nombre: ";
    cin >> alumno.nombre;
    cout << endl << "ingrese legajo: ";
    cin >> alumno.legajo;
    cout << endl << "ingrese tipo de documento: ";
    cin >> alumno.tipoDocumento;
    cout << endl << "ingrese numero de documento: ";
    cin >> alumno.documento;
    cout << "ingrese las notas bimestrales: " << endl;
    for (int i = 0; i < 4; i++){
        cout << "nota " << i +1 << ": ";
        cin >> alumno.notas[i];
    }
    alumno.promedio = promedio(alumno.notas);
}

void mostrarAlumno(Alumno &alumno){
    cout << "apellido: ";
    cout << alumno.apellido;
    cout << endl << "nombre: ";
    cout << alumno.nombre;
    cout << endl << "legajo: ";
    cout << alumno.legajo;
    cout << endl << "tipo de documento: ";
    cout << alumno.tipoDocumento;
    cout << endl << "numero de documento: ";
    cout << alumno.documento;
    cout << "notas bimestrales: " << endl;
    for (int i = 0; i < 4; i++){
        cout << "nota " << i << ": ";
        cout << alumno.notas[i];
    }
    cout << alumno.promedio << endl;
}

int main(){
    Alumno a1, a2, a3;
    Alumno alumnos[3] = {a1, a2, a3};
    for (int i = 0; i < 3; i++){
        cargarAlumno(alumnos[i]);
    }
    
    Alumno aprobados[3]; 
    aprobadosf(alumnos, 3, aprobados);
    int tam = cantElementos(aprobados, 3);
    for (int i = 0; i < tam; i++){
        mostrarAlumno(aprobados[i]);
    }

    return 0;
}