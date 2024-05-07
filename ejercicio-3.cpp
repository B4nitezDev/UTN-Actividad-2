#include<iostream>
using namespace std;

/*
 * Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel
 * aclaratorio si el mismo es par o impar.
*/
int main(){
    int isPar;

    cout << "Ingresa el numero a comprobar: ";
    cin >> isPar;

    if(isPar % 2 == 0){
        cout << "El numero es par";
    }else {
        cout << "El numero es impar";
    }

    return 0;
}
