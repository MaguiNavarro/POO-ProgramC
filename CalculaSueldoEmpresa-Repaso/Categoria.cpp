#include "Categoria.h"

// Constructor
Categoria::Categoria(float sueldoBasico) : sueldoBasico(sueldoBasico) {}

// Destructor
Categoria::~Categoria() {}

// Implementación de los métodos no virtuales
float Categoria::calcularObraSocial(float sueldoBruto) const {
    return sueldoBruto * 0.03;
}

float Categoria::calcularSueldoNeto(float sueldoBruto, float aporteJubilatorio) const {
    return sueldoBruto - aporteJubilatorio - calcularObraSocial(sueldoBruto);
}