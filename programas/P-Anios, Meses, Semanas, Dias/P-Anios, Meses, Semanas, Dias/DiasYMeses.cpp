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

	std::cout << "Ingresa un número entero para trabajarlo como días: "; std::cin >> Dias;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato.\n";
		system("pause");
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el próximo salto de línea.
		Iniciar();
	}
	else
		Calculo();
}

void DiasYMeses::Despliegue()
{
	std::cout << Dias << " días son: " << Anios << " años, " << Meses << " meses, " << Semanas << " semanas y " << (Dias % 30 / 7) << " días.";
}