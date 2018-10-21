#include "ArchivoFigurasGeometricas2D.h"
#include <iostream>

const std::string ArchivoFigurasGeometricas2D::NOMBRE_DEL_ARCHIVO =
		"./src/modelos/archivo_de_figuras_geometricas_2D/figuras.txt";

std::string ArchivoFigurasGeometricas2D::TIPOS_DE_FIGURAS = "ABC";

ArchivoFigurasGeometricas2D::ArchivoFigurasGeometricas2D() {
	this->rutaDeEntrada.open(NOMBRE_DEL_ARCHIVO);
	assert(rutaDeEntrada.is_open());
	constructorDeFiguras = new ConstructorDeFigurasGeometricas2D*[TIPOS_DE_FIGURAS.size()];
	constructorDeFiguras[0] = new Circulo();
	constructorDeFiguras[1] = new Rectangulo();
	constructorDeFiguras[2] = new Cuadrado();
}

void ArchivoFigurasGeometricas2D::convertirArchivoHaciaLista(
		ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	while(!rutaDeEntrada.eof()){
		char tipoDeFigura;
		rutaDeEntrada >> tipoDeFigura;
		std::cout << tipoDeFigura << std::endl;
		unsigned posicion = this->obtenerPosicion(tipoDeFigura);
		figuras.agregar(constructorDeFiguras[posicion]->construir(rutaDeEntrada));

	}
}


unsigned ArchivoFigurasGeometricas2D::obtenerPosicion(
		char tipoDeFigura) {
	unsigned i = 0;
	while(TIPOS_DE_FIGURAS[i] != tipoDeFigura){
		++i;
	}
	return i;
}

ArchivoFigurasGeometricas2D::~ArchivoFigurasGeometricas2D() {
	rutaDeEntrada.close();
	for (unsigned i = 0; i < TIPOS_DE_FIGURAS.size(); ++i) {
		delete constructorDeFiguras[i];
	}
	delete [] constructorDeFiguras;
}
