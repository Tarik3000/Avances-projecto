#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "spanish");
	system("color 0A");


	char op;
	string articulo[3];

	for (int i = 0; i <= 2; i++)
	{
		articulo[0] = "";
	}

	do
	{
		system("cls");
		cout << "\t*** MENU ***\n\n";
		cout << "\t 1 - Agregar articulo\n";
		cout << "\t 2 - Modificar articulo\n";
		cout << "\t 3 - Eliminar articulo\n";
		cout << "\t 4 - Ver artículos\n";
		cout << "\t 5 - Limpiar pantalla\n";
		cout << "\t 3 - Salir del programa\n\n";
		cout << "\tOpción: "; cin >> op; 

		cin.ignore();

		system("cls");


		switch (op)
		{
		case 1:
			cout << "\t*** Agregar articulo ***\n\n";
			for (int i = 0; i <= 2; i++)
			{
				cout << "\t Artículo " << i + 1 << ": ";
				getline(cin, articulo[i]);
			}
			cout << "\n\tSe han guardado todos los articulos correctamente";
			Sleep(2000);

			break;

		case 2:
			break;

		case 3:
			break;

		case 4:

			if (articulo->empty())
			{
				cout << "No hay artículos aún.";
				Sleep(2000);
			}
			else
			{
				cout << "\t*** Ver articulos ***\n\n";
				for (int i = 0; i <= 2; i++)
				{
					cout << "\t Artículo " << i + 1 << ":\t" << articulo[i] << endl;
				}
				cout << "\n\t";
				system("pause");
			}
		default:
			break;

		case 5:
			system("cls");
			return main();
			break;

		case 6:
			exit(1);
			break;
		}
	} while (op != '3');



		
	system("pause");
	return 0;
}