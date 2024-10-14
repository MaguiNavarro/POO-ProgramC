#ifndef CATEGORIA_H
#define CATEGORIA_H
#include <iostream>
#include "Empleado.h"
using namespace std;
   
class Categoria
{
private:
  protected:
    float sueldoBasico;

public:
    Categoria(float sueldoBasico);

    virtual float calcularSueldoBruto(int antiguedad) const = 0;
    virtual float calcularAporteJubilatorio(float sueldoBruto) const = 0;
    float calcularObraSocial(float sueldoBruto) const;
    float calcularSueldoNeto(float sueldoBruto, float aporteJubilatorio) const ;
     virtual void mostrarDetalles(const Empleado empleado) const = 0;
};


#endif 