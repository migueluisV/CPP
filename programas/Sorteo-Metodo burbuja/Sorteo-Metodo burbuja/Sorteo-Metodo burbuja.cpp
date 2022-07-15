#include <iostream>

static void BurbujaSimple() {
	std::string Nombres[10];
	std::string aux;
	int i, j;

	system("cls"); //Limpia la terminal.

	std::cout << "Ordenamiento de burbuja simple\n\n";
	std::cout << "Ingresa 10 nombres:\n";
	for (i = 0; i < 10; i++) {
		printf("%d- ", (i + 1)); std::cin >> Nombres[i];
	}

	//Ordenamiento de burbuja simple descendente.
	for (i = 0; i < 10; i++) {
		for (j = 0; j < 9; j++) {
			if (Nombres[j].compare(Nombres[j + 1]) < 0) {
				aux = Nombres[j];
				Nombres[j] = Nombres[j + 1];
				Nombres[j + 1] = aux;
			}
		}
	}

	//Despliegue de resultados
	std::cout << "\nNombres ordenados descendentemente:\n";
	for (i = 0; i < 10; i++) {
		printf("%d - %s\n", (i + 1), Nombres[i].c_str());
	}

	system("pause"); //Pausa el flujo del programa.;
}

static void BurbujaMejorada() {
	int i, j, cont = 0;
	float aux;
	bool bandera = true;
	float Calificaciones[10];

	system("cls"); //Limpia la terminal.

	std::cout << "Ordenamiento de burbuja simple\n\n";
	std::cout << "Ingresa 10 números:\n";

	do {
		printf("%d- ", cont + 1); std::cin >> Calificaciones[cont];

		if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
		{
			std::cout << "Error de formato. ";
			system("pause"); //Pausa el flujo del programa.
			std::cin.clear(); //Limpia el buffer de cin.
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																				//en cin hasta el próximo salto de línea.
		}
		else
			cont++;
	} while (cont <= 9);

	//Ordenamiento de burbuja mejorado descendente.
	for (i = 0; (i < 9) && (bandera == true); i++) {
		bandera = false;
		for (j = 0; j < 10 - i - 1; j++) {
			if (Calificaciones[j] < Calificaciones[j + 1]) {
				bandera = true;
				aux = Calificaciones[j];
				Calificaciones[j] = Calificaciones[j + 1];
				Calificaciones[j + 1] = aux;
			}
		}
	}

	//Despliegue de resultados
	std::cout << "\nNúmeros ordenados descendentemente:\n";
	for (i = 0; i < 10; i++) {
		printf("%d - %f\n", (i + 1), Calificaciones[i]);
	}

	system("pause"); //Pausa el flujo del programa.
}

static void BurbujaOptimizada() {
	std::string NombresMascotas[10];
	std::string aux;
	bool ordenado;
	int i, j;

	system("cls"); //Limpia la terminal.

	std::cout << "Ordenamiento de burbuja optimizado\n\n";
	std::cout << "Ingresa 10 nombres para mascotas:\n";
	for (i = 0; i < 10; i++) {
		printf("%d- ", (i + 1)); std::cin >> NombresMascotas[i];
	}

	//Ordenamiento de burbuja optimizado ascendente.
	i = 1;
	do {
		i++;
		ordenado = true;
		for (j = 0; j < 9; j++) {
			if (NombresMascotas[j].compare(NombresMascotas[j + 1]) > 0) {
				ordenado = false;
				aux = NombresMascotas[j];
				NombresMascotas[j] = NombresMascotas[j + 1];
				NombresMascotas[j + 1] = aux;
			}
		}
	} while (i < 10 && ordenado != true);

	//Despliegue de resultados
	std::cout << "\nNombres ordenados ascendentemente:\n";
	for (i = 0; i < 10; i++) {
		printf("%d - %s\n", (i + 1), NombresMascotas[i].c_str());
	}

	system("pause"); //Pausa el flujo del programa.;
}

int main()
{
    int Op;

    system("cls"); //Limpia la terminal.
    std::locale::global(std::locale("spanish")); //Instrucción para utilizar caracteres en español.

    std::cout << "Ordenamiento de burbuja y sus tipos\n\n";
    std::cout << "-Menú-\n1) Burbuja simple.\n2) Burbuja mejorada.\n3) Burbuja optimizada.\n4) Salir.\n";
    std::cout << "Selecciona una opción: "; std::cin >> Op;

	if (std::cin.fail()) //Si se ingresó un tipo de dato incorrecto en la variable.
	{
		std::cout << "Error de formato. ";
		system("pause"); //Pausa el flujo del programa.
		std::cin.clear(); //Limpia el buffer de cin.
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
																			//en cin hasta el próximo salto de línea.
		main();
	}
	else
	{
		switch (Op) {
			case 1:
				BurbujaSimple();
				break;
			case 2:
				BurbujaMejorada();
				break;
			case 3:
				BurbujaOptimizada();
				break;
			case 4:
				exit(-1); //Salida del programa
				break;
			default:
				std::cout << "Selecciona una opción del menú mostrado. ";
				system("pause"); //Pausa el flujo del programa.
				main();
		}
	}
}