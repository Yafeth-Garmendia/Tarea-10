#include <iostream>

using namespace std;

 extern void agregarProducto(string descripcion, int cantidad, double precio);

void productos(int opcion)
{
	system("cls");

int opcionProducto = 0;	
	switch(opcion)
	{
		case 1:
		{
	
			cout << "BEBIDAS CALIENTES" << endl; 
			cout << "*****************" << endl;
			cout << "1 - Capuccino" << endl; 
			cout << "2 - Expresso" << endl; 
			cout << endl;
			
			cout << "Ingrese una opcion ";
			cin >> opcionProducto;
			     
		{switch(opcionProducto)
			{ 
				case 1:
					 agregarProducto ("1  Capuccino - L 40.00", 1, 40);
					  break;
				case 2:
					 agregarProducto ("Expresso - L 30.00", 1, 30);
					  break;
					
				default:
					{
						cout << "opcion no valida";
					    return;
					    break;
					}
						
					
				}
			}
			
			cout << endl;
			cout << "Producto agregado"<< endl << endl;
			system("pause");
			
			break;
		}
	
		case 2:
		{
	
			cout << "BEBIDAS FRIAS" << endl; 
			cout << "*************" << endl;
			cout << "1 - Granita de cafe" << endl; 
			cout << "2 - Granita de frutas" << endl;
			cout << "3 - Licuados" << endl; 
			cout << endl;
			
			cout << "Ingrese una opcion ";
			cin >> opcionProducto;
			     
		{switch(opcionProducto)
			{ 
				case 1:
					 agregarProducto ("1  Granita de cafe - L 40.00", 1, 40);
					  break;
				case 2:
					 agregarProducto ("1 Granita de frutas - L 50.00", 1, 50);
					  break;
				case 3:
					 agregarProducto ("1 Licuados - L 35.00", 1, 35);
					  break;
					
				default:
					{
						cout << "opcion no valida";
					    return;
					    break;
					}
						
					
				}
			}
			
			cout << endl;
			cout << "Producto agregado"<< endl << endl;
			system("pause");
			
			break;
		}
			case 3:
		{
	
			cout << "REPOSTERIA" << endl; 
			cout << "**********" << endl;
			cout << "1 - Pastel 3 leches" << endl; 
			cout << "2 - Pastelitos con relleno" << endl;
			cout << "3 - Donas" << endl; 
			cout << endl;
			
			cout << "Ingrese una opcion ";
			cin >> opcionProducto;
			     
		{switch(opcionProducto)
			{ 
				case 1:
					 agregarProducto ("1  Pastel 3 leches - L 30.00", 1, 30);
					  break;
				case 2:
					 agregarProducto ("1 Pastelitos con relleno - L 15.00", 1, 15);
					  break;
				case 3:
					 agregarProducto ("1 Donas - L 25.00", 1, 25);
					  break;
					
				default:
					{
						cout << "opcion no valida";
					    return;
					    break;
					}
						
					
				}
			}
			
			cout << endl;
			cout << "Producto agregado"<< endl << endl;
			system("pause");
			
			break;
		}
	}
}	
