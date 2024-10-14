#ifndef PLANILLA_H
#define PLANILLA_H
#include <vector>
#include "Empleado.h"
#include "Categoria.h"

class Planilla
{
private:
  int mes, anio;
  vector<Empleado*> empleados;
 vector <Categoria*> categorias;
public:
    Planilla(int mes, int anio);
    void agregarEmpleado(Empleado* empleado, Categoria* categoria);
    void listarEmpleados() const;
    void calcularTotales() const;
};




#endif 