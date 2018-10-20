#ifndef MODELOS_FIGURA_GEOMETRICA_2D_CIRCULO_H_
#define MODELOS_FIGURA_GEOMETRICA_2D_CIRCULO_H_

#include "FiguraGeometrica2D.h"

class Circulo : public FiguraGeometrica2D {
private:
	double radio;
	static const double PI;
public:
	Circulo();
	Circulo(double radio);
	double calcularSuperficie() override;
	double calcularPerimetro() override;
	virtual ~Circulo();
};

#endif
