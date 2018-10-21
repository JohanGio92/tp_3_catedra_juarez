#include "Rectangulo.h"

Rectangulo::Rectangulo() : Rectangulo(1, 1) {
}

Rectangulo::Rectangulo(double altura, double base) : Cuadrilatero(altura), base(base){
}

double Rectangulo::calcularSuperficie() {
	return (CANTIDAD_DE_LADOS * (lado + base))/2;
}

double Rectangulo::calcularPerimetro() {
	return lado * base;
}

Rectangulo::~Rectangulo() {
}

