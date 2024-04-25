#include<iostream>
using namespace std;

int main (){
    int a, b,c, d;

    cout << "Ingresa el primer numero";
    cin >> a;

    cout << "Ingresa el segundo numero";
    cin >> b;

    cout << "Ingresa el tercero numero";
    cin >> c;

    cout << "Ingresa el cuarto numero";
    cin >> d;

    if(a <= b){
        if(b<=c){
            if(c<=d){
                cout << "Conjunto Ordenado";
                return 0;
            }
        }
    }
    cout << "Conjunto Desordenado";
    return 0;
}
