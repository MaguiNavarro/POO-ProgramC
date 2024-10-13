#include <iostream>
#include "Empleado.h"
using namespace std;


Empleado :: Empleado(long int dni, string nomb, string direccion, string fechaNac, int fechaI){
        Dni= dni;
        Nombre= nomb;
        Direccion= direccion;
        fechaNacimiento= fechaNac;
        anioIngreso= fechaI;

}
long int Empleado ::  getDni() { 
    return Dni; 
 }
string Empleado:: getNombre() { return Nombre; }
int Empleado:: getAntiguedad(){
     int anioActual = 2024;  // Supongamos que es el año actual
     int anioIngreso = anioIngreso;

 return anioActual - anioIngreso;
}

