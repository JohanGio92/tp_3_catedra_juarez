#include "Opcion.h"

Opcion::Opcion(std::string titulo) : titulo(titulo){
	ArchivoDeFigurasGeometricas2D archivoDeFigurasGeometricas;
	archivoDeFigurasGeometricas.convertirArchivoHaciaLista(figuras);
}


void Opcion::mostrarTitulo(unsigned posicion) {
	consola.escribir(toString(posicion) + titulo);
}

Opcion::~Opcion() {
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		delete figuras[i];
	}
}
