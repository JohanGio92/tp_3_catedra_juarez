#include "Circulo.h"

const double Circulo::PI = 3.1416;

Circulo::Circulo() :
		Circulo(1) {
}

Circulo::Circulo(double radio) :
		FiguraGeometrica2D("Circulo"), radio(radio){
}

double Circulo::calcularSuperficie() {
	return PI * radio * radio;
}

double Circulo::calcularPerimetro() {
	return 2 * PI * radio;
}

FiguraGeometrica2D* Circulo::construir(std::ifstream& rutaDeEntrada) {
	double radio;
	rutaDeEntrada >> radio;
	return new Circulo(radio);
}

Circulo::~Circulo() {
}

