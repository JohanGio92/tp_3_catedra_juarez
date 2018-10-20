#include <iostream>

#include "modelos/figura_geometrica_2d/Circulo.h"
#include "modelos/figura_geometrica_2d/Cuadrado.h"

int main() {
	Circulo circulo(4);
	Cuadrado cuadrado(5);
	std::cout << cuadrado.calcularPerimetro() << std::endl;
	std::cout << circulo.calcularPerimetro() << std::endl;
	return 0;
}
