#ifndef MENU_CALCULADORMAXIMOSUPERFICIEDEFIGURAGEOMETRICA_H_
#define MENU_CALCULADORMAXIMOSUPERFICIEDEFIGURAGEOMETRICA_H_

#include "../modelos/figura_geometrica_2d/FiguraGeometrica2D.h"
#include "../utilidades/ListaEnlazada.h"
#include "Opcion.h"

class CalculadorMaximoSuperficieDeFiguraGeometrica : public Opcion{
public:
	CalculadorMaximoSuperficieDeFiguraGeometrica(ListaEnlazada<FiguraGeometrica2D*> figuras);
	void ejecutar() override;
	virtual ~CalculadorMaximoSuperficieDeFiguraGeometrica();
};

#endif
