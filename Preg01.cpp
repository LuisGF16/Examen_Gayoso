#include <iostream>
using namespace std;

int main(){
	
	int x, a, b;
	
	cout << "Ingrese Numero 1: "; cin >> a;
	cout << "Ingrese Numero 2: "; cin >> b;
	cout << endl;

	cout << "Los valores cambiados son: ";
	
	x = a;
	a = b;
	b = x;
	
	cout << "Numero 1 ahora es " << a << endl;
	cout << "Numero 2 ahora es " << b << endl;
	
	return 0;
	
}
