#ifndef MODELOS_FIGURA_GEOMETRICA_2D_FIGURAGEOMETRICA2D_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_FIGURAGEOMETRICA2D_H_

#include "../../utilidades/Consola.h"

class FiguraGeometrica2D{
protected:
	Consola consola;
	std::string tipoDeFigura;
public:
	FiguraGeometrica2D();
	FiguraGeometrica2D(std::string tipoDeFigura);
	virtual double calcularSuperficie() = 0;
	virtual double calcularPerimetro() = 0;
	virtual void mostrar();
	virtual ~FiguraGeometrica2D();
};

#endif
