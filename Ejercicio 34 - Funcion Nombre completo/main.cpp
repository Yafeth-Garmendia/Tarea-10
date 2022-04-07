#include <iostream>

using namespace std;

string nombreCompleto(string nombre, string apellido)
{
	return nombre + " " + apellido;
}

int main(int argc, char** argv) 
{
	string primerNombre = "";
	string primerApellido = "";
	
	cout << "Ing;rese su primer nombre: ";
	cin >> primerNombre;
	cout << "Ing;rese su primer apellido: ";
	cin >> primerApellido;
	
	cout << endl;
	
	cout << "Nombre completo: " 
	<< nombreCompleto(primerNombre, primerApellido);
	
	return 0;
}
