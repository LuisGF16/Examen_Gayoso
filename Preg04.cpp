#include<iostream>
#include <stdlib.h>
using namespace std;
int main(){
    setlocale(LC_ALL, "");
    double Ga, Don;
    cout << "Ingrese la ganancia: " << endl;
    cin >> Ga;
    if( Ga >= 0 && Ga <= 1000){
        Don = Ga * 5 / 100;
    }
    if( Ga > 1000 && Ga <= 1500){
        Don = Ga * 7 / 100;
    }
    if( Ga > 1500 && Ga <= 2000){
        Don = Ga * 8 / 100;
    }
    if( Ga > 2000 && Ga <= 5000){
        Don = Ga * 10 / 100;
    }
    if( Ga > 5000){
        Don = Ga * 15 / 100;
    }
    cout << "Importe a donar :" << Don << endl;
    return 0;
}
