#include <iostream>

#include "modelos/archivo_de_figuras_geometricas_2D/ConstructorDeCirculos.h"
#include "modelos/figura_geometrica_2d/Circulo.h"
#include "modelos/figura_geometrica_2d/Cuadrado.h"
#include "utilidades/ListaEnlazada.h"

int main() {
	ConstructorDeFigurasGeometricas2D* constructorDeFiguras = new ConstructorDeCirculos();
	FiguraGeometrica2D* figura = constructorDeFiguras->construir();

	std::cout << figura->calcularPerimetro()<< std::endl;
	std::cout << figura->calcularSuperficie() << std::endl;

	delete constructorDeFiguras;
	delete figura;

	return 0;
}
