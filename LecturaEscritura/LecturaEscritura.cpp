// LecturaEscritura.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	char Nombre[51];
	int Edad;

	cout << "Teclee su nombre (puede incluir espacios):";
	cin.get(Nombre,50);

	cout << "Proporciona su edad:";
	cin >> Edad;

	cout << "Hola " << Nombre << " de " << Edad << " de edad" << endl;

	system("PAUSE");

    return 0;
}

