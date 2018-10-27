#ifndef MENU_CALCULADORDEPERIMETROMINIMO_H_
#define MENU_CALCULADORDEPERIMETROMINIMO_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class CalculadorDePerimetroMinimo : public Opcion {
public:
	CalculadorDePerimetroMinimo();
	void ejecutar() override;
	virtual ~CalculadorDePerimetroMinimo();
};

#endif
