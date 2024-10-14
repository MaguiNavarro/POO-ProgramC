#ifndef TECNICO_H
#define TECNICO_H

#include "Categoria.h"

class Tecnico : public Categoria {
    float compensacionSalarial;
    float porcentajeJubilacion;

public:
    Tecnico(float sueldoBasico, float compensacionSalarial, float porcentajeJubilacion);
    float calcularSueldoBruto(int antiguedad) const override;
    float calcularAporteJubilatorio(float sueldoBruto) const override;
    void mostrarDetalles(Empleado empleado) const override;
};

#endif 