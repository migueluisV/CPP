#include <iostream>
#include <cstdio> //Biblioteca para utilizar función "printf".

static int DiasVividos(short Edad) {
    return Edad * 365;
}

static void IngresoEdad() {
	short Edad;

	system("cls"); //Limpia la terminal.

	std::cout << "Ingresa tu edad: "; std::cin >> Edad;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato.\n";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el próximo salto de línea.
		IngresoEdad();
	}
	else
		printf("Has vivido %d d%cas.", DiasVividos(Edad), char(161)); //Utilización de la biblioteca "cstdio" y su función "printf",
																	  //para imprimir cadenas con un formato dado por variables.
}

int main()
{
    IngresoEdad();
}