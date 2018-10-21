#ifndef MODELOS_FIGURA_GEOMETRICA_2D_RECTANGULO_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_RECTANGULO_H_

#include "Cuadrilatero.h"

class Rectangulo : public Cuadrilatero{
private:
	double base;
public:
	Rectangulo();
	Rectangulo(double altura, double base);
	double calcularSuperficie() override;
	double calcularPerimetro() override;
	virtual ~Rectangulo();
};

#endif
