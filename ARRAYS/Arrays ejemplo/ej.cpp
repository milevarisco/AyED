#include <iostream>
using namespace std;

int main(){
    int vec[5];
    for (int i = 0; i < 5; i++){
        cout << "posicion " << i << ": ";
        cin >> vec[i];
    }

    cout << "vector completo:" << endl;
    for (int i = 0; i < 5; i++){
        cout << vec[i] << " ";
    }

    return 0;
}

