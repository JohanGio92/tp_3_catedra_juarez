#include <iostream>

#include "modelos/figura_geometrica_2d/Circulo.h"
#include "modelos/figura_geometrica_2d/Cuadrado.h"
#include "utilidades/ListaEnlazada.h"

int main() {
	Circulo circulo(4);
	Cuadrado cuadrado(5);
	ListaEnlazada<int> lista;
	lista.agregar(5);
	std::cout << lista[0] << std::endl;
	std::cout << circulo.calcularPerimetro() << std::endl;
	return 0;
}
