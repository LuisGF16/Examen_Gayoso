#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "");
    int Ho, Ip;
    cout << "Ingrese el número de horas(valor entero): " << endl;
    cin >> Ho;
    if( Ho <= 4){
        Ip = 6;
    }
    if( Ho > 4){
        Ip = (Ho - 4)* 2 + 6;
    }
    cout << "El importe a pagar es: " << Ip << endl;
    return 0;
}
