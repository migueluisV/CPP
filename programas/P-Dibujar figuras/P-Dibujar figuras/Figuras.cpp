#include <iostream>
#include <cstdio>
#include "Figuras.h"

void Figuras::DibujarTriangulo() {
	short Altura, R, C, B;

	system("cls"); //Limpia la terminal.

	std::cout << "Altura del tri�ngulo (n�mero entero): "; std::cin >> Altura;

	if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el pr�ximo salto de l�nea.
		DibujarTriangulo(); //Llamada recursiva.
	}
	else
	{
		std::cout << "Tri�ngulo:\n\n";
		for (R = 1; R <= Altura; R++) { //Bucle para la altura.
			for (B = 1; B <= (Altura - R); B++) { //Bucle para los espacios en blanco.
				std::cout << " ";
			}

			for (C = 1; C <= (R * 2) - 1; C++) { //Bucle para los asteriscos que conforman al tri�ngulo.
				std::cout << "*";
			}
			std::cout << "\n";
		}

		system("pause"); //Pausa el flujo del programa.
	}
}

void Figuras::DibujarRectangulo() {
	short Base, Altura, R, C;

	system("cls"); //Limpia la terminal.

	std::cout << "Altura del rect�ngulo (n�mero entero): "; std::cin >> Altura;
	std::cout << "Base del rect�ngulo (n�mero entero): "; std::cin >> Base;

	if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el pr�ximo salto de l�nea.
		DibujarRectangulo(); //Llamada recursiva.
	}
	else
	{
		std::cout << "Rect�ngulo:\n\n";
		for (R = 1; R <= Altura; R++) { //Bucle para la altura
			for (C = 1; C <= Base; C++) { //Bucle para la anchura
				std::cout << "*  ";
			}
			std::cout << "\n";
		}

		system("pause"); //Pausa el flujo del programa.
	}
}

void Figuras::DibujarCuadrado() {
	short Lado, R, C;

	system("cls"); //Limpia la terminal.

	std::cout << "Lado del cuadrado (n�mero entero): "; std::cin >> Lado;

	if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el pr�ximo salto de l�nea.
		DibujarCuadrado(); //Llamada recursiva.
	}
	else
	{
		std::cout << "Cuadrado:\n\n";
		for (R = 1; R <= Lado; R++) { //Bucle para la un lado
			for (C = 1; C <= Lado; C++) { //Bucle para un lado
				std::cout << "* ";
			}
			std::cout << "\n";
		}

		system("pause"); //Pausa el flujo del programa.
	}
}