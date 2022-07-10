#include "CaliAl.h"
#include <iostream>

void CaliAl::IngresoDatos(float cal[], std::string nom[], int cont)
{
	int i;

	if (cont == 5) //Condición para salir del método recursivo.
	{
		Prom = AcumCali / 5;
		for (i = 0; i < 5; i++) //Clasificación de datos ingresados.
		{
			if (cal[i] > CaliMax)
				CaliMax = cal[i];
		}

		CaliMen = CaliMax;
		for (i = 0; i < 5; i++)
		{
			if (cal[i] < CaliMen)
				CaliMen = cal[i];
		}

		Despliegue(cal, nom);
	}
	else
	{
		std::cout << (cont + 1) << ". Ingresa una calificaci" << char(162) << "n: "; std::cin >> cal[cont];
		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato.\n";
			system("pause");
			std::cin.clear(); //Limpia el buffer de cin.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																				//en cin hasta el próximo salto de línea.
			IngresoDatos(cal, nom, cont); //Llamada recursiva.
		}
		else
		{
			std::cout << (cont + 1) << ". Ingresa un nombre: "; std::cin >> nom[cont];

			AcumCali += cal[cont]; //Clasificación de datos ingresados.
			if (cal[cont] > 0.0 && cal[cont] <= 10.0)
			{
				CalVali++;
				if (cal[cont] > 6.0 && cal[cont] <= 10.0)
					CaliApro++;
				else if (cal[cont] <= 6.0 && cal[cont] > 0.0)
					CaliRepro++;
			}
			else
				CalInvali++;

			cont++; //Incrementa contador.
			IngresoDatos(cal, nom, cont); //Llamada recursiva.
		}
	}
}

void CaliAl::Despliegue(float cal[], std::string nom[])
{
	int i;

	std::cout << "\nLos alumnos ingresados son:\n\n";
	for (i = 0; i < 5; i++)
	{
		std::cout << (i + 1) << " - " << nom[i] << ", con calificaci" << char(162) << "n de " << cal[i] << ".\n";
	}

	std::cout << "Hubo un total de " << CalVali << " calificaciones v" << char(160) << "lidas y " << CalInvali << " inv" << char(160) << "lidas.\n";
	std::cout << "Hubo un total de " << CaliApro << " calificaciones aprobatorias y " << CaliRepro << " reprobatorias.\n";
	std::cout << "La calificaci" << char(162) << "n mayor fue " << CaliMax << " y la menor es " << CaliMen << ".\n";
	std::cout << "El promedio es de " << Prom << ".";
}