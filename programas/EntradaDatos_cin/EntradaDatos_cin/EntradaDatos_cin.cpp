#include <iostream>

//Programa simple que muestra otra forma de ingresar datos por medio de cin
//de manera constante dentro de un ciclo, util para arreglos o casos como el
//siguiente.

//El flujo de datos de cin tiene varios estados:
//- bad:    ocurre un error durante el flujo de datos y se pierde parte de los
//          mismos. Si bad tiene valor 1, es que ocurrió un error, si
//          tiene 0, es que todo está bien.
//- good:   el flujo de datos es exitoso. Si good tiene valor 1, es que todo
//          está bien, 0 representa lo contrario.
//- fail:   ocurre un error durante el flujo de datos pero no se pierde nada
//          de los mismos. Si fail tiene valor 1, es que ocurrió un error, si
//          tiene 0, es que todo está bien.
//Es por eso que se entra al ciclo, cuando se ingresa la primer calificación,
//el flujo de datos tiene un valor good de 1, fail y bad de 0, en caso de que
//se presione S u otra literal, el flujo tendrá un valor good de 0, fail y bad
//de 1, será entonces que desplegará la calificación mayor.

int main()
{
    int cali, calir_mayor = -1;
    std::cout << "Introduzca calificacion (S para terminar): "; //Introduce el primer valor
    while (std::cin >> cali) //Si la flujo de datos es exitosa, continua el ciclo
    {
        if (cali > calir_mayor)
            calir_mayor = cali;
        std::cout << "Introduzca calificacion (S para terminar): "; //Introduce los siguientes valores
    }
    std::cout << "La calificación mayor es: " << calir_mayor << "\n";
}