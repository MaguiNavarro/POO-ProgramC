#include "Planilla.h"
#include <iostream>
using namespace std;

Planilla::Planilla(int mes, int anio) : mes(mes), anio(anio) {}


void Planilla::agregarEmpleado(Empleado* empleado, Categoria* categoria) {
    empleados.push_back(empleado);
    categorias.push_back(categoria);
}


void Planilla::listarEmpleados() const {
    cout << "Planilla del mes: " << mes << "/" << anio << endl;
    for (size_t i = 0; i < empleados.size(); ++i) {
        categorias[i]->mostrarDetalles(*empleados[i]);
    }
}

void Planilla::calcularTotales() const {
    float totalSueldoBruto = 0, totalAporte = 0, totalObraSocial = 0, totalSueldoNeto = 0;
    for (size_t i = 0; i < empleados.size(); ++i) {
        int antiguedad = empleados[i]->getAntiguedad();
        float sueldoBruto = categorias[i]->calcularSueldoBruto(antiguedad);
        float aporteJubilatorio = categorias[i]->calcularAporteJubilatorio(sueldoBruto);
        float obraSocial = categorias[i]->calcularObraSocial(sueldoBruto);
        float sueldoNeto = categorias[i]->calcularSueldoNeto(sueldoBruto, aporteJubilatorio);

        totalSueldoBruto += sueldoBruto;
        totalAporte += aporteJubilatorio;
        totalObraSocial += obraSocial;
        totalSueldoNeto += sueldoNeto;
    }

     cout << "\nTotales: \n";
    cout << "Sueldo Bruto Total: $" << totalSueldoBruto << endl;
    cout << "Aporte Jubilatorio Total: $" << totalAporte << endl;
    cout << "Obra Social Total: $" << totalObraSocial << endl;
    cout << "Sueldo Neto Total: $" << totalSueldoNeto << endl;
}