#include<iostream>
using namespace std;

int main(){
    int n;

    cout << "Ingresa un numero: ";
    cin >> n;

    if(n > 0){
        cout << "El numero es positivo";
    }else if(n == 0){
        cout << "El numero es igual a 0";
    }else {
        cout << "El numero es negativo";
    }
}
