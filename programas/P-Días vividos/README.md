`10/07/2022 7:26pm`

## Bienvenidos
Este programa fue realizado en Visual Studio Community 2019, con el paquete de trabajo *Desarrollo para el escritorio con C++*.
## Estructura de la carpeta
Esta carpeta contiene dos subfolders y un archivo, los cuales son:
- `Debug`: contiene el archivo ejecutable en consola del proyecto, además de un fichero *.pdb*.
- `P-Días vividos`: contiene el código fuente *.cpp*, clases creadas y otros ficheros importantes.
- `P-Días vividos.sln`: es el fichero que abre Visual Studio para trabajar y compilar el código fuente.
## Descripción del programa
El objetivo de este programa es repasar el uso de funciones, procedimientos y una alternativa al método *std::cout* de la biblioteca
*iostream* para desplegar valores en la terminal o pantalla, en esta ocasión, utilizamos la biblioteca **cstdio** y su función **printf()**,
esta función te permite desplegar expresiones, cadenas o contenido en base a un formato dado por variables.

*Nota*: debido a la configuración de Visual Studio Community 2019 en esta máquina, no se desplegan los caracteres del idioma español,
como lo pueden ser la ñ y letras con acentos, la función *printf* no está excenta de este error, por lo que se utiliza la función **char()**
para desplegar dichos caracteres.