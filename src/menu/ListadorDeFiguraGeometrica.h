#ifndef MENU_LISTADORDEFIGURAGEOMETRICA_H_
#define MENU_LISTADORDEFIGURAGEOMETRICA_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class ListadorDeFiguraGeometrica: public Opcion {
public:
	ListadorDeFiguraGeometrica();
	void ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) override;
	virtual ~ListadorDeFiguraGeometrica();
};

#endif
