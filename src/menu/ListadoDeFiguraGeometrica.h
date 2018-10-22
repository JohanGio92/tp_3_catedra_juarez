#ifndef MENU_LISTADODEFIGURAGEOMETRICA_H_
#define MENU_LISTADODEFIGURAGEOMETRICA_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class ListadoDeFiguraGeometrica: public Opcion {
public:
	ListadoDeFiguraGeometrica(ListaEnlazada<FiguraGeometrica2D*> figuras);
	void ejecutar() override;
	virtual ~ListadoDeFiguraGeometrica();
};

#endif
