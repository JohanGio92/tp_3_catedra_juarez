#include <iostream>

#include "modelos/figura_geometrica_2d/Cuadrado.h"

int main() {
	Cuadrado cuadrado(5);
	std::cout << cuadrado.calcularPerimetro() << std::endl;
	return 0;
}
