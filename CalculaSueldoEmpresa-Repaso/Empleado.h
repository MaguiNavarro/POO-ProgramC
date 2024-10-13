#include <iostream>
using namespace std;


class Empleado
{
 protected:
    string  Nombre, Direccion, fechaNacimiento;
    long int Dni;
    float sueldoBasico;
    int anioIngreso;

public:

    Empleado(long int dni, string nombre, string direccion, string fechaNac, int anioI);
    string getNombre();
    long int getDni();
    int getAntiguedad();


};



