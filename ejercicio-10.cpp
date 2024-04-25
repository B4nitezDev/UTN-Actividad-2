#include<iostream>
using namespace std;

int main (){
int a,b,c,d,e,Min, Max;

cout<< "Ingresa el primer numero: ";
cin>> a;

cout<< "Ingresa el segundo numero: ";
cin>> b;

cout<< "Ingresa el tercer numero: ";
cin>> c;

cout<< "Ingresa el cuato numero: ";
cin>> d;

cout<< "Ingresa el quinto numero: ";
cin>> e;

if(a>b){
    Max=a;
    Min=b;
}else{
    Max=b;
    Min=a;
}
if(c>Max){
    Max=c;
}else{
    if(c<Min){
        Min=c;
    }
}
if(d > Max){
    Max = d;
}else{
    if(d<Min){
        Min=d;
    }
}
if(e>Max){
    Max=e;
}else{
    if(e<Min){
        Min=e;
    }
}

cout << "El menor es: " << Min << " El mayor es: " << Max;

return 0;
}
