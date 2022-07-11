#include <iostream>
#include <cstdio>

static void Despliegue(short Edad) {
	short Dias, Meses;

	Dias = Edad * 365;
	Meses = Edad * 12;

	printf("Has vivido %d años, que son %d meses o %d días.", Edad, Meses, Dias);
}

int main()
{
    short Edad;

	system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    std::cout << "Ingresa una edad: "; std::cin >> Edad;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. Presiona cualquier tecla para continuar...\n";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el próximo salto de línea.
		main(); //Llamada recursiva al método main.
	}
	else
		Despliegue(Edad);
}