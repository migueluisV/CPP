#include <iostream>
#include <cstdio>

static void IngresarNumeros(short* Nums, short cantNums) {
	int i = 0, NMayor = 0, NMenor = 0; //Declaración e inicialización de variables.
	 
	do { //Ciclo para ingresar valores en arreglo, si el valor es incorrecto al tipo del arreglo, no incrementa el contador i.
		printf("%d. Digita un número: ", (i + 1)); std::cin >> Nums[i];

		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																				//en cin hasta el próximo salto de línea.
		}
		else
		{
			if (i == 0) { //Inicializa valor mayor y menor.
				NMayor = Nums[i];
				NMenor = Nums[i];
			}

			if (Nums[i] > NMayor) { NMayor = Nums[i]; } //Va actualizando cual es el número mayor y menor.
			if (Nums[i] < NMenor) { NMenor = Nums[i]; }

			i++; //Incrementa contador.
		}
	} while (i < cantNums);

	system("cls");
	std::cout << "Los números ingresados fueron:\n\n";
	for (i = 0; i < cantNums; i++) {
		printf("%d - %d\n", (i + 1), Nums[i]);
	}
	printf("\nEl número mayor es %d, y el menor es %d.", NMayor, NMenor);

	system("pause");
}

int main()
{
    short cantNums;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    std::cout << "¿Cuántos elementos tendrá el arreglo?: "; std::cin >> cantNums;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el próximo salto de línea.
		main(); //Llamada recursiva.
	}
	else
	{
		short* Nums = new short[cantNums]; //Declara arreglo puntero dinámico.
		IngresarNumeros(Nums, cantNums);
	}
}