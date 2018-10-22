#include "ArchivoDeFigurasGeometricas2D.h"

#include <iostream>

const std::string ArchivoDeFigurasGeometricas2D::NOMBRE_DEL_ARCHIVO =
		"./src/modelos/archivo_de_figuras_geometricas_2D/figuras.txt";

std::string ArchivoDeFigurasGeometricas2D::TIPOS_DE_FIGURAS = "ABC";

ArchivoDeFigurasGeometricas2D::ArchivoDeFigurasGeometricas2D() {
	this->rutaDeEntrada.open(NOMBRE_DEL_ARCHIVO);
	assert(rutaDeEntrada.is_open());
	constructorDeFiguras = new ConstructorDeFigurasGeometricas2D*[TIPOS_DE_FIGURAS.size()];
	constructorDeFiguras[0] = new Circulo();
	constructorDeFiguras[1] = new Rectangulo();
	constructorDeFiguras[2] = new Cuadrado();
}

void ArchivoDeFigurasGeometricas2D::convertirArchivoHaciaLista(
		ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	while(!rutaDeEntrada.eof()){
		char tipoDeFigura;
		rutaDeEntrada >> tipoDeFigura;
		unsigned posicion = this->obtenerPosicion(tipoDeFigura);
		figuras.agregar(constructorDeFiguras[posicion]->construir(rutaDeEntrada));
	}
}


unsigned ArchivoDeFigurasGeometricas2D::obtenerPosicion(
		char tipoDeFigura) {
	unsigned i = 0;
	while(TIPOS_DE_FIGURAS[i] != tipoDeFigura){
		++i;
	}
	return i;
}

ArchivoDeFigurasGeometricas2D::~ArchivoDeFigurasGeometricas2D() {
	rutaDeEntrada.close();
	for (unsigned i = 0; i < TIPOS_DE_FIGURAS.size(); ++i) {
		delete constructorDeFiguras[i];
	}
	delete [] constructorDeFiguras;
}
