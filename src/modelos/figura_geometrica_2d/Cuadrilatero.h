#ifndef MODELOS_FIGURA_GEOMETRICA_2D_CUADRILATERO_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_CUADRILATERO_H_

#include "FiguraGeometrica2D.h"

class Cuadrilatero: public FiguraGeometrica2D{
protected:
	static const unsigned CANTIDAD_DE_LADOS;
	double lado;
public:
	Cuadrilatero();
	Cuadrilatero(double lado);
};

#endif
