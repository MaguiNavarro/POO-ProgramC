
#include "Administrativo.h"

Administrativo::Administrativo(float sueldoBasico) : Categoria(sueldoBasico) {}

float Administrativo::calcularSueldoBruto(int antiguedad) const {
    return sueldoBasico + (sueldoBasico * 0.02 * antiguedad);
}

float Administrativo::calcularAporteJubilatorio(float sueldoBruto) const {
    return sueldoBruto * 0.11; // 11% de aporte jubilatorio
}
void Administrativo::mostrarDetalles(Empleado empleado) const {
    int antiguedad = empleado.getAntiguedad();
    float sueldoBruto = calcularSueldoBruto(antiguedad);
    float aporteJubilatorio = calcularAporteJubilatorio(sueldoBruto);
    float obraSocial = calcularObraSocial(sueldoBruto);
    float sueldoNeto = calcularSueldoNeto(sueldoBruto, aporteJubilatorio);

    std::cout << "DNI: " << empleado.getDni() << ", Nombre: " << empleado.getNombre()
              << ", Antiguedad: " << antiguedad << ", Sueldo Bruto: $" << std::fixed  << sueldoBruto
              << ", Aporte Jubilatorio: $" << aporteJubilatorio
              << ", Obra Social: $" << obraSocial
              << ", Sueldo Neto: $" << sueldoNeto << std::endl;
}