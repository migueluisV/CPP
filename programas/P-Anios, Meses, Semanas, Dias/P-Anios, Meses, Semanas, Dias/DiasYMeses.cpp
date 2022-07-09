#include "DiasYMeses.h"
#include <iostream>

int Anios, Dias, Semanas, Meses;

void DiasYMeses::Calculo()
{
	Anios = Dias / 365;
	Meses = Dias / 30;
	Semanas = (Dias % 30) / 7;
}

void DiasYMeses::Iniciar()
{
	system("cls");

	std::cout << "Ingresa un n�mero entero para trabajarlo como d�as: "; std::cin >> Dias;

	if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato.\n";
		system("pause");
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el pr�ximo salto de l�nea.
		Iniciar();
	}
	else
		Calculo();
}

void DiasYMeses::Despliegue()
{
	std::cout << Dias << " d�as son: " << Anios << " a�os, " << Meses << " meses, " << Semanas << " semanas y " << (Dias % 30 / 7) << " d�as.";
}