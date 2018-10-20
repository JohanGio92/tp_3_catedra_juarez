#include "Cuadrado.h"

Cuadrado::Cuadrado() : Cuadrilatero(){
}

Cuadrado::Cuadrado(double lado) : Cuadrilatero(lado) {
}

double Cuadrado::calcularSuperficie() {
	return this->lado * this->lado;
}

double Cuadrado::calcularPerimetro() {
	return (double)CANTIDAD_DE_LADOS * this->lado;
}

Cuadrado::~Cuadrado() {
}

