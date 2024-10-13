#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include "Categoria.h"

class Administrativo : public Categoria {
public:
    Administrativo(float sueldoBasico);
    float calcularSueldoBruto(int antiguedad) const override;
    float calcularAporteJubilatorio(float sueldoBruto) const override;
    void mostrarDetalles(const Empleado empleado) const override;
};

#endif  ADMINISTRATIVO_H