#include<iostream>
#include<cmath>
using namespace std;

int main (){
    int n_one, n_two;

    cout << "Ingresa el valor del numero 1: ";
    cin >> n_one;

    cout << "Ingresa el valor del numero 2: ";
    cin >> n_two;

    int dif = n_one - n_two;

    dif = abs(dif);

    cout << "La diferencia entre los dos numeros es: " << dif << endl;

    return 0;
}
