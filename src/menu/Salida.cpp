#include "Salida.h"

Salida::Salida() : Opcion(". Salir"), terminado(false){
}

void Salida::ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras){
	terminado = true;
	this->destruir(figuras);
}

bool Salida::terminar(){
	return terminado;
}

void Salida::destruir(ListaEnlazada<FiguraGeometrica2D*>& figuras) {
	for (unsigned i = 0; i < figuras.obtenerTamanio(); ++i) {
		delete figuras[i];
	}
}

Salida::~Salida() {
}

