
#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    Arreglo<string> arreglo2;

    arreglo2.insertar_inicio("Hola");
    arreglo2.insertar_inicio("adios");
    arreglo2.insertar_final("final");
    arreglo2.insertar_final("inicio");
    arreglo2.mostrar();
    arreglo2.insertar("Posicion", 2);
    arreglo2.mostrar();

    arreglo2.eliminar_inicio();
    arreglo2.eliminar_final();
    arreglo2.mostrar();

    arreglo2.eliminar(1);

    arreglo2.mostrar();

    return 0;
}