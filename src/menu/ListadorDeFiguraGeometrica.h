#ifndef MENU_LISTADORDEFIGURAGEOMETRICA_H_
#define MENU_LISTADORDEFIGURAGEOMETRICA_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class ListadorDeFiguraGeometrica: public Opcion {
public:
	ListadorDeFiguraGeometrica(ListaEnlazada<FiguraGeometrica2D*>& figuras);
	void ejecutar() override;
	virtual ~ListadorDeFiguraGeometrica();
};

#endif
