#include <iostream>
#include <cmath>
using namespace std;

void raices(int &x1, int &x2, int a, int b, int c){
    int r = pow(b, 2), n = sqrt((pow(b, 2) - 4 * a * c));
    if ((r - (4 * a * c))>= 0){
        x1 = (-b + n)/2 * a;
        x2 = (-b - n)/2 * a;
    }else{
        cout << "No existen las raices." << endl;
    }
    
}

int main(){
    int x1, x2;
    int a, b, c;
    
    cout << "Ingrese a, b y c respectivamente: " << endl;
    cin >> a >> b >> c;
    raices(x1, x2, a, b, c);
    cout << "x1= " << x1 << endl;
    cout << "x2= " << x2 << endl;

    return 0;
}