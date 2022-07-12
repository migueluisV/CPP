#include <iostream>
#include "Figuras.h"

int main()
{
    short Op;
    Figuras figura; //Declaraci�n de objeto Figuras.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci�n para utilizar caracteres en espa�ol.

    std::cout << "Selecciona una opci�n del men�:\n\n";
    std::cout << "1) Dibujar tri�ngulo.\n2) Dibujar rect�ngulo.\n3) Dibujar cuadrado.\n4) Salir.\n";
    std::cout << "Opci�n: "; std::cin >> Op;

	if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el pr�ximo salto de l�nea.
		main(); //Llamada recusriva
	}
	else
	{
		switch (Op) {
            case 1:
                figura.DibujarTriangulo();
                break;
            case 2:
                figura.DibujarRectangulo();
                break;
            case 3:
                figura.DibujarCuadrado();
                break;
            case 4:
                exit(-1); //Salida del programa.
                break;
            default:
                std::cout << "Opci�n no v�lida. ";
                system("pause");
                main();
		}
	}
}