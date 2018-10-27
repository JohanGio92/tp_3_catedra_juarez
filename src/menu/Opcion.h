#ifndef MENU_OPCION_H_
#define MENU_OPCION_H_

#include <string>
#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../modelos/archivo_de_figuras_geometricas_2D/ArchivoDeFigurasGeometricas2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "../utilidades/Consola.h"

class Opcion {
protected:
	Consola consola;
	std::string titulo;
	ListaEnlazada<FiguraGeometrica2D*> figuras;
public:
	Opcion(std::string titulo);
	virtual void ejecutar() = 0;
	virtual void mostrarTitulo(unsigned posicion);
	virtual ~Opcion();
};

#endif
