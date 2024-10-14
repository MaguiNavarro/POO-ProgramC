#include "Tecnico.h"
#include <iostream>


Tecnico::Tecnico(float sueldoBasico, float compensacionSalarial, float porcentajeJubilacion)
    : Categoria(sueldoBasico), compensacionSalarial(compensacionSalarial), porcentajeJubilacion(porcentajeJubilacion) {}

float Tecnico::calcularSueldoBruto(int antiguedad) const {
    return (antiguedad > 5) ? sueldoBasico + compensacionSalarial : sueldoBasico;
}

float Tecnico::calcularAporteJubilatorio(float sueldoBruto)const {
     
     return sueldoBruto * porcentajeJubilacion;
} 

void Tecnico::mostrarDetalles( Empleado empleado) const {
    int antiguedad = empleado.getAntiguedad();
    float sueldoBruto = calcularSueldoBruto(antiguedad);
    float aporteJubilatorio = calcularAporteJubilatorio(sueldoBruto);
    float obraSocial = calcularObraSocial(sueldoBruto);
    float sueldoNeto = calcularSueldoNeto(sueldoBruto, aporteJubilatorio);

    std::cout << "DNI: " << empleado.getDni() << ", Nombre: " << empleado.getNombre()
              << ", Antigüedad: " << antiguedad << ", Sueldo Bruto: $" << std::fixed << sueldoBruto
              << ", Aporte Jubilatorio: $" << aporteJubilatorio
              << ", Obra Social: $" << obraSocial
              << ", Sueldo Neto: $" << sueldoNeto << std::endl;
}