#ifndef MENU_OPCION_H_
#define MENU_OPCION_H_

#include <string>
#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "../utilidades/Consola.h"

class Opcion {
protected:
	Consola consola;
	std::string titulo;
	ListaEnlazada<FiguraGeometrica2D*> figuras;
public:
	Opcion(std::string titulo, ListaEnlazada<FiguraGeometrica2D*> figuras);
	virtual void ejecutar() = 0;
	virtual void mostrarTitulo();
	virtual ~Opcion();
};

#endif
