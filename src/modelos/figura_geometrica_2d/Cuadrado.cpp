#include "Cuadrado.h"

Cuadrado::Cuadrado() : Cuadrado(1){
}

Cuadrado::Cuadrado(double lado) : Cuadrilatero("Cuadrado", lado) {
}

double Cuadrado::calcularSuperficie() {
	return this->lado * this->lado;
}

double Cuadrado::calcularPerimetro() {
	return (double)CANTIDAD_DE_LADOS * this->lado;
}

FiguraGeometrica2D* Cuadrado::construir(std::ifstream& rutaDeEntrada) {
	double lado;
	rutaDeEntrada >> lado;
	return new Cuadrado(lado);
}

Cuadrado::~Cuadrado() {
}

