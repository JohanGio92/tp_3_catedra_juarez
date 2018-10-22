#ifndef MENU_CALCULADORDEPERIMETROMAXIMO_H_
#define MENU_CALCULADORDEPERIMETROMAXIMO_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class CalculadorDePerimetroMaximo: public Opcion {
public:
	CalculadorDePerimetroMaximo(ListaEnlazada<FiguraGeometrica2D*>& figuras);
	void ejecutar() override;
	virtual ~CalculadorDePerimetroMaximo();
};

#endif
