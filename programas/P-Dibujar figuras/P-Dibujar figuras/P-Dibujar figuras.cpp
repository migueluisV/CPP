#include <iostream>
#include "Figuras.h"

int main()
{
    short Op;
    Figuras figura; //Declaración de objeto Figuras.

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    std::cout << "Selecciona una opción del menú:\n\n";
    std::cout << "1) Dibujar triángulo.\n2) Dibujar rectángulo.\n3) Dibujar cuadrado.\n4) Salir.\n";
    std::cout << "Opción: "; std::cin >> Op;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el próximo salto de línea.
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
                std::cout << "Opción no válida. ";
                system("pause");
                main();
		}
	}
}