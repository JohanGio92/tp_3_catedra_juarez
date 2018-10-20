#include "Circulo.h"

const double Circulo::PI = 3.1416;

Circulo::Circulo() :
		Circulo(1) {
}

Circulo::Circulo(double radio) :
		radio(radio) {
}

double Circulo::calcularSuperficie() {
	return PI * radio * radio;
}

double Circulo::calcularPerimetro() {
	return 2 * PI * radio;
}

Circulo::~Circulo() {
}

