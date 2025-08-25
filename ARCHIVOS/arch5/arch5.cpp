#include <iostream>
#include <stdio.h>
using namespace std;

void invertir(FILE* f1, FILE* f2, FILE* f3){

    //"invierto archivos" (hago q lea f1 y f2 de atras para adelante)
    fseek(f1, 0, SEEK_END);                    //posiciono el cursos al final de cada archivo(ultimo byte)
    fseek(f2, 0, SEEK_END);
    int cant1 = ftell(f1)/sizeof(int);        //me dice la cant de bytes que tiene cada archivo
    int cant2 = ftell(f2)/sizeof(int);
    
    fseek(f1, (-1)*sizeof(int), SEEK_END);     //lo pongo al principio del ultimo elemento, lo lleva -x posiciones para atras, asi lee el ultimo elemento
    fseek(f2, (-1)*sizeof(int), SEEK_END);

    //apareo
    int x1, x2;
    fread (&x1, sizeof(int), 1, f1);
    fread (&x2, sizeof(int), 1, f2);
    
    while(cant1 && cant2){
        if (x1 > x2){
            fwrite(&x1, sizeof(int), 1, f3);
            fseek(f1, (-2) * sizeof(int), SEEK_CUR);
            fread (&x1, sizeof(int), 1, f1);
            cant1--;

        } else {
            fwrite(&x2, sizeof(int), 1, f3);
            fseek(f2, (-2)*sizeof(int), SEEK_CUR);
            fread (&x2, sizeof(int), 1, f2);
            cant2--;
        } 
    }
    while (cant1){
        fwrite (&x1, sizeof(int), 1, f3);
        fseek(f1, (-2)*sizeof(int), SEEK_CUR);
        fread (&x1, sizeof(int), 1, f1);
        cant1--;
    }
    while (cant2){
        fwrite (&x2, sizeof(int), 1, f3);
        fseek(f2, (-2)*sizeof(int), SEEK_CUR);
        fread (&x2, sizeof(int), 1, f2);
        cant2--;
    }
}


int main(){
    FILE *f1, *f2;

    f1 = fopen ("arch1.bin", "wb");
    int v1[] = {53, 55, 78};
    fwrite (v1, sizeof(int), 3, f1);
    fclose(f1);
    f2 = fopen ("arch2.bin", "wb");
    int v2[] = {78,79,100,200};
    fwrite (v2, sizeof(int), 4, f2);
    fclose (f2);

    FILE *f3;

    f1 = fopen ("arch1.bin", "rb");
    f2 = fopen ("arch2.bin", "rb");
    f3 = fopen ("arch3.bin", "wb");
    
    invertir(f1, f2, f3);
   
    fclose(f1);
    fclose(f2);
    fclose(f3);

    //corrobor
    int x2;
    f3 = fopen ("arch3.bin", "rb");
    while (fread (&x2, sizeof(int), 1, f3)){
        cout << x2 << endl;
    }
    
    return 0;
}