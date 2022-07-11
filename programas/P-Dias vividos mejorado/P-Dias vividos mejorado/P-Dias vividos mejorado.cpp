#include <iostream>
#include <cstdio>

static void Despliegue(short Edad) {
	short Dias, Meses;

	Dias = Edad * 365;
	Meses = Edad * 12;

	printf("Has vivido %d a�os, que son %d meses o %d d�as.", Edad, Meses, Dias);
}

int main()
{
    short Edad;

	system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci�n para utilizar caracteres en espa�ol.

    std::cout << "Ingresa una edad: "; std::cin >> Edad;

	if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. Presiona cualquier tecla para continuar...\n";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el pr�ximo salto de l�nea.
		main(); //Llamada recursiva al m�todo main.
	}
	else
		Despliegue(Edad);
}