#include <iostream>
#include <limits> //Librería necesaria para cceder a numeric_limits

//Programa que ingresa un número a una variable int por medio de std::cin y
//verifica que la entrada en cin sea númerica. El tipo de dato puede cambi-
//arse a otro numérico.

void TipoDato_Correcto(int correcto) //Procedimiento que ingresa un valor y verificar que sea el tipo de dato correcto
{
    int n; //Declara el tipo de dato de la variable, este puede cambiar a float, double u otro numérico

    while (correcto == 0) //Ciclo que se repite si el número ingresado está es de un tipo de dato distinto a int
    {
        system("cls"); //Limpia la consola

        std::cout << "Ingresa un caracter: "; std::cin >> n;
        if (std::cin.fail()) //Si el flujo de cin falla (tipo de dato distinto al de la variable)
        {
            std::cout << "Entrada no valida.\n";
            system("pause"); //Detiene el programa hasta que se presione una tecla
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
                                                                                //en cin hasta el próximo salto de línea
        }
        else
        {
            std::cout << "Entrada de tipo de dato correcta. El numero es: " << n << "\n";
            correcto = 1; //Sale del ciclo
        }
    }
}

//int main()
//{
//    TipoDato_Correcto(0); //Llama al procedimiento de ingresar un número, 0 para iniciar el ciclo
//
//    return 0;
//}

void TipoDato_Correcto() //Procedimiento que ingresa un valor y verificar que sea el tipo de dato correcto
{
    int n; //Declara el tipo de dato de la variable, este puede cambiar a float, double u otro numérico

    system("cls"); //Limpia la consola

    std::cout << "Ingresa un caracter: "; std::cin >> n;
    if (std::cin.fail()) //Si el flujo de cin falla (tipo de dato distinto al de la variable)
    {
        throw "Entrada no valida.\n";
    }
    std::cout << "Entrada de tipo de dato correcta. El numero es: " << n << "\n";
}

int main()
{
    int n, correcto = 0;

    while (correcto == 0) //Ciclo que se repite si el número ingresado está es de un tipo de dato distinto a int
    {
        system("cls"); //Limpia la consola

        try
        {
            std::cout << "Ingresa un caracter: "; std::cin >> n;
            if (std::cin.fail()) //Si el flujo de cin falla (tipo de dato distinto al de la variable)
            {
                throw 20;
            }
            std::cout << "Entrada de tipo de dato correcta. El numero es: " << n << "\n";
            correcto = 1; //Sale del ciclo
        }
        catch (int e)
        {
            std::cout << "Entrada no valida.\n";
            system("pause"); //Detiene el programa hasta que se presione una tecla
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //Ignora el resto de caracteres ingresados
                                                                                //en cin hasta el próximo salto de línea
        }
    }

    return 0;
}