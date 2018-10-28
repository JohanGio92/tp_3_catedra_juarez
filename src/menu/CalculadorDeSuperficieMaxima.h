#ifndef MENU_CALCULADORDESUPERFICIEMAXIMA_H_
#define MENU_CALCULADORDESUPERFICIEMAXIMA_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class CalculadorDeSuperficieMaxima : public Opcion{
public:
	CalculadorDeSuperficieMaxima();
	void ejecutar(ListaEnlazada<FiguraGeometrica2D*>& figuras) override;
	virtual ~CalculadorDeSuperficieMaxima();
};

#endif
