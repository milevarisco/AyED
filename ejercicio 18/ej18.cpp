#include <iostream>
using namespace std;
int main (){ 

int m;

cout << "Ingresar un valor:" << endl;
cin >> m;
cout << "Primeros" << m << " multiplos de 3:" << endl;

for (int i = 1; i <= m && m > 0; i++){
  int mult3 = 3*i;
  if (mult3 % 5 != 0){
    cout << mult3 << endl;
  } else m++;
}

    return 0;
}