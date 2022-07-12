#include <iostream>
#include <cstdio>

static std::string ParImpar(int Num) {
	if ((Num % 2) == 0)
		return "es par.";
	else
		return "es impar.";
}

int main()
{
	int Num;
	short Op;

	std::locale::global(std::locale("spanish")); //Instrucci�n para utilizar caracteres en espa�ol.

	do {
		system("cls"); //Limpia la terminal.

		std::cout << "Ingresa un n�mero: "; std::cin >> Num;

		if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																				//en cin hasta el pr�ximo salto de l�nea.
			Op = 1;
		}
		else {
			std::cout << "El n�mero ingresado " + ParImpar(Num) + "\n";
			
			std::cout << "\n�Desea ingresar otro n�mero? Si[1]: "; std::cin >> Op;
		}
	} while (Op == 1);
}