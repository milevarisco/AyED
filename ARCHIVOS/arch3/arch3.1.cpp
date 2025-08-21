#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    FILE *f1, *f2;

    f1 = fopen ("arch1.bin", "wb");
    int v1[] = {53, 54, 78};
    fwrite (v1, sizeof(int), 3, f1);
    fclose(f1);
    f2 = fopen ("arch2.bin", "wb");
    int v2[] = {78,79,100,200};
    fwrite (v2, sizeof(int), 4, f2);
    fclose (f2);

    FILE *f3;
    int x1, x2;

    f1 = fopen ("arch1.bin", "rb");
    f2 = fopen ("arch2.bin", "rb");
    f3 = fopen ("arch3.bin", "wb");
    fread (&x1, sizeof(int), 1, f1);
    fread (&x2, sizeof(int), 1, f2);

    while (1){
        if (x1 < x2){
            fwrite (&x1, sizeof(int), 1, f3);
            if (fread (&x1, sizeof(int), 1, f1) != 1){ 
                fwrite (&x2, sizeof(int), 1, f3);
                break;
            }  
        } else{
            fwrite (&x2, sizeof(int), 1, f3);
            if (fread (&x2, sizeof(int), 1, f2) != 1){ 
                fwrite (&x1, sizeof(int), 1, f3);
                break;
            }
        }
    }
    while (fread (&x1, sizeof(int), 1, f1)){
        fwrite (&x1, sizeof(int), 1, f3);
    }
    while (fread (&x2, sizeof(int), 1, f2)){
        fwrite (&x2, sizeof(int), 1, f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);

    //corrobor
    f3 = fopen ("arch3.bin", "rb");
    while (fread (&x2, sizeof(int), 1, f3)){
        cout << x2 << endl;
    }
    
    return 0;
}