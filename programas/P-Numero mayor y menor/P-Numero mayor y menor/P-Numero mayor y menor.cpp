#include <iostream>
#include <cstdio>

static void IngresarNumeros(short* Nums, short cantNums) {
	int i = 0, NMayor = 0, NMenor = 0; //Declaraci�n e inicializaci�n de variables.
	 
	do { //Ciclo para ingresar valores en arreglo, si el valor es incorrecto al tipo del arreglo, no incrementa el contador i.
		printf("%d. Digita un n�mero: ", (i + 1)); std::cin >> Nums[i];

		if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																				//en cin hasta el pr�ximo salto de l�nea.
		}
		else
		{
			if (i == 0) { //Inicializa valor mayor y menor.
				NMayor = Nums[i];
				NMenor = Nums[i];
			}

			if (Nums[i] > NMayor) { NMayor = Nums[i]; } //Va actualizando cual es el n�mero mayor y menor.
			if (Nums[i] < NMenor) { NMenor = Nums[i]; }

			i++; //Incrementa contador.
		}
	} while (i < cantNums);

	system("cls");
	std::cout << "Los n�meros ingresados fueron:\n\n";
	for (i = 0; i < cantNums; i++) {
		printf("%d - %d\n", (i + 1), Nums[i]);
	}
	printf("\nEl n�mero mayor es %d, y el menor es %d.", NMayor, NMenor);

	system("pause");
}

int main()
{
    short cantNums;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucci�n para utilizar caracteres en espa�ol.

    std::cout << "�Cu�ntos elementos tendr� el arreglo?: "; std::cin >> cantNums;

	if (std::cin.fail()) //Si se ingres� un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el pr�ximo salto de l�nea.
		main(); //Llamada recursiva.
	}
	else
	{
		short* Nums = new short[cantNums]; //Declara arreglo puntero din�mico.
		IngresarNumeros(Nums, cantNums);
	}
}