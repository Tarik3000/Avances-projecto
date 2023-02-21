// ConsoleApplication6.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	int opc,num,ann,pres,cion ;
	char nom(20), gen(20), clas(20), cons(20), des(40);
	cout << "\t \t \t--MENU DE OPCIONES--" << endl;
	cout << "\t \t \t 1-Agregar articulo" << endl;
	cout << "\t \t \t 2-Modificar articulo" << endl;
	cout << "\t \t \t 3-Eliminar articulo" << endl;
	cout << "\t \t \t 4-Articulos vigentes" << endl;
	cout << "\t \t \t 5-Limpiar pantalla" << endl;
	cout << "\t \t \t 6-Salir" << endl;
	cin >> opc;
	switch (opc)
		case 1:
	{
		cout << "ingrese numero de articulo" << endl;
		cin >> num;
		cout << "ingrese nombre del articulo" << endl;
		cin >> nom;
		//cout << "ingrese fecha de lanzamiento" << endl;
		//cin >> ann;
		//cin >> gen;
		//cout << "ingrese clasificacion" << endl;
		//cin >> clas;
		//cout << "ingrese consola" << endl;
		//cin >> cons;
		//cout << "ingrese descripcion" << endl;
		//cin >> des;
		//cout << "ingrese precio unitario" << endl;
		//cin >> pres;
		cout << "presione 1 para regresar al menu, 2 para no hacerlo" << endl;
		cin >> cion;
		if (cion == 1)
		{
			system("pause");
				return main();
		}
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:
			system("cls");
			return main();
			break;
		case 6:
			exit(1);
			break;
	}
}	

