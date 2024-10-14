#include "Empleado.h"
#include "Administrativo.h"
#include "Tecnico.h"
#include "Planilla.h"

int main() {
    Planilla planilla(10, 2024);

    Empleado admin1(12345678, "Juan Perez", "Calle Falsa 123", "01/01/1980", 2010);
    Empleado tecnico1(87654321, "Ana Lopez", "Av Siempre Viva 456", "02/02/1985", 2008);

    Categoria* categoriaAdmin = new Administrativo(50000);
    Categoria* categoriaTecnico = new Tecnico(60000, 5000, 0.12);

    planilla.agregarEmpleado(&admin1, categoriaAdmin);
    planilla.agregarEmpleado(&tecnico1, categoriaTecnico);

    planilla.listarEmpleados();
    planilla.calcularTotales();

    delete categoriaAdmin;
    delete categoriaTecnico;

 }

