#ifndef MENU_CALCULADORDESUPERFICIEMINIMA_H_
#define MENU_CALCULADORDESUPERFICIEMINIMA_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class CalculadorDeSuperficieMinima: public Opcion {
public:
	CalculadorDeSuperficieMinima();
	void ejecutar() override;
	virtual ~CalculadorDeSuperficieMinima();
};

#endif
