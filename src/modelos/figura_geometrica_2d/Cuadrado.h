#ifndef MODELOS_FIGURA_GEOMETRICA_2D_CUADRADO_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_CUADRADO_H_

#include "Cuadrilatero.h"

class Cuadrado : public Cuadrilatero {
public:
	Cuadrado();
	Cuadrado(double lado);
	double calcularSuperficie() override;
	double calcularPerimetro() override;
	virtual ~Cuadrado();
};

#endif
