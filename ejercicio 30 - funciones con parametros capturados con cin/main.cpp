#include <iostream>

using namespace std;

int sumar(int a, int b){
	return a + b;
}

int restar(int a, int b){
	return a - b;
}

int main(int argc, char** argv)
 {
 	system("cls");
 	
 	int numero1 = 0;
 	int numero2 = 0;
 	
 	
	cout << "Ingrese el valor de a: ";
	cin >> numero1;
	cout << "Ingrese el valor de b: ";
	cin >> numero2;
	
	cout << endl;
	
	cout << "El resultado de sumar es: " << sumar(numero1, numero2);
	cout << endl;
	
	cout << "El resultado de restar es: " << restar(numero1, numero2);
	cout << endl;
	
	
	return 0;
}
